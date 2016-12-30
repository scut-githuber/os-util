import jd.api

import json

from jd.api.rest.ImageWriteDeleteRequest import ImageWriteDeleteRequest

jd.setDefaultAppInfo(appkey, secret)

a = ImageWriteDeleteRequest(url,port)

a.appid = "jingdong" a.name = "jingdong" a.wareId = 123 a.colorIds = "jingdong,yanfa,pop" a.imgIndexes = "123,234,345"

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
