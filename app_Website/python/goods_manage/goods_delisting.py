import jd.api

import json

from jd.api.rest.WareUpdateDelistingRequest import WareUpdateDelistingRequest

jd.setDefaultAppInfo(appkey, secret)

a = WareUpdateDelistingRequest(url,port)

a.wareid = "jingdong" a.tradeno = "jingdong"

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
