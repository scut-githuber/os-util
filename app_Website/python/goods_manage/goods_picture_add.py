import jd.api

import json

from jd.api.rest.ImageWriteUpdateRequest import ImageWriteUpdateRequest

jd.setDefaultAppInfo(appkey, secret)

a = ImageWriteUpdateRequest(url,port)

a.appid = "jingdong" a.name = "jingdong" a.wareId = 123 a.colorId = "jingdong,yanfa,pop" a.imgId = "123,234,345" a.imgIndex = "123,234,345" a.imgUrl = "jingdong,yanfa,pop" a.imgZoneId = "jingdong,yanfa,pop"

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
