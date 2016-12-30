import jd.api

import json

from jd.api.rest.WareDeleteRequest import WareDeleteRequest

jd.setDefaultAppInfo(appkey, secret)

a = WareDeleteRequest(url,port)

a.wareid = "jingdong" a.tradeno = "jingdong"

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
