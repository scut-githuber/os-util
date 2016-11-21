#import "SearchContent.h"

@implementation SearchContent

/**
 *  查询聊天记录 被渲染特定的字符串
 *
 *  @param content  完整的聊天内容
 *  @param drawText 要查找的聊天内容的子字符串
 *  @param theShowCharaterNumbers 一行要多少个可以看到的文字其它的省略号
 *  @return 渲染的结果
 */

+ (NSMutableAttributedString *)theContent:(NSString *)content drawStr:(NSString *)drawText theShowCharaterNumbers:(NSInteger)charaterNumbers{
    //查找子字符串的位置
    NSRange range = [content rangeOfString:drawText];
    NSMutableAttributedString *attributeStr = nil;
    //如果整条聊天记录的长度小于屏幕可以展示的长度 则整条消失
    if (content.length  <= charaterNumbers) {
        attributeStr = [[NSMutableAttributedString alloc] initWithString:content];
        //渲染子字符串的字体颜色  greenThemeColor自定义的颜色
        [attributeStr addAttribute:NSForegroundColorAttributeName value:[UIColor greenThemeColor] range:range];
        return attributeStr;
    } else{
        /* 渲染规则:聊天记录显示是以要渲染的部分为标准 渲染部分 前要保留8个字符 后部分保留字符个数无要求
         1、渲染部分前半部分不够8个的，则保留前的所有字体向渲染部分后去足够的字体
         2、*/
        if (range.location+range.length > charaterNumbers) {//则从前面截取8个字符
            
            NSInteger number = range.length + range.location - charaterNumbers;//前部分显示8个字符还多出来的自负个数
            if (range.location <= 8) {//前面不够或者正好8个字符 则前部分不用做截取处理 向后再找够足够的
                content = [content substringToIndex:range.location + range.length + number];
                content = [content stringByAppendingString:@"...."];//后面添加内容省略符
                attributeStr = [[NSMutableAttributedString alloc] initWithString:content];
                range = [content rangeOfString:drawText];
                
            } else{
                //判断后边的不够前面的内容充足
                NSString *tmpContent = [content substringFromIndex:range.location - 8];
                if (tmpContent.length < charaterNumbers) {
                    NSInteger beforeNumber = charaterNumbers - tmpContent.length;
                    content = [content substringFromIndex:range.location - 8 - beforeNumber];
                    content = [NSString stringWithFormat:@"....%@",content];//前面添加省略号
                    range = [content rangeOfString:drawText];
                    attributeStr = [[NSMutableAttributedString alloc] initWithString:content];
                } else{
                    content = [content substringFromIndex:range.location - 8];
                    NSRange newRange = [content rangeOfString:drawText];
                    //开始向后查找剩下的后部分字体
                    NSInteger numberBehind = charaterNumbers - (newRange.location + newRange.length);
                    NSString *subString2 = [content substringWithRange:NSMakeRange(0, range.location + range.length +numberBehind)];
                    subString2 = [NSString stringWithFormat:@"....%@",subString2];//前面添加省略号
                    range = [subString2 rangeOfString:drawText];
                    attributeStr = [[NSMutableAttributedString alloc] initWithString:subString2];
                    
                }
                
            }
        } else if (range.location +range.length < charaterNumbers){// 向后区余下的文字
            NSString *subContent = [content substringWithRange:NSMakeRange(0, charaterNumbers)];
            subContent = [subContent stringByAppendingString:@"...."];//省略号显示不需要的内容
            attributeStr = [[NSMutableAttributedString alloc] initWithString:subContent];
            range = [subContent rangeOfString:drawText];
        }
        
    }
    //渲染子字符串的字体颜色 greenThemeColor自定义的颜色
    [attributeStr addAttribute:NSForegroundColorAttributeName value:[UIColor greenThemeColor] range:range];
    return attributeStr;
}
