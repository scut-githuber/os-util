
import jd.api

import json

from jd.api.rest.WareUpdateListingRequest import WareUpdateListingRequest

jd.setDefaultAppInfo(appkey, secret)

a = WareUpdateListingRequest(url,port)

a.wareid = "jingdong" a.tradeno = "jingdong"

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
