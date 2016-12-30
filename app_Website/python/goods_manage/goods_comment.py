import jd.api

import json

from jd.api.rest.ClubPopVendercommentsGetRequest import ClubPopVendercommentsGetRequest

jd.setDefaultAppInfo(appkey, secret)

a = ClubPopVendercommentsGetRequest(url,port)

a.skuids = "jingdong" a.wareName = "jingdong" a.beginTime = "jingdong" a.endTime = "jingdong" a.score = 123 a.content = "jingdong" a.pin = "jingdong" a.isVenderReply = true a.cid = "jingdong" a.orderIds = "jingdong" a.page = 123 a.pageSize = 123 a.replyPageSize = 123

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
