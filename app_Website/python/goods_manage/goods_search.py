import jd.api

import json

from jd.api.rest.EccItemSearchRequest import EccItemSearchRequest

jd.setDefaultAppInfo(appkey, secret)

a = EccItemSearchRequest(url,port)

a.itemid = 123 a.itemstatus = 123 a.itemname = "jingdong" a.categoryid = 123 a.ip = "jingdong" a.pagesize = 123 a.pageindex = 123 a.ordercloumn = "jingdong" a.ordertype = "jingdong"

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
