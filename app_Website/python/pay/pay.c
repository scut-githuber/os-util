import jd.api

import json

from jd.api.rest.EccPaymentServiceQueryPaymentJournalRequest import EccPaymentServiceQueryPaymentJournalRequest

jd.setDefaultAppInfo(appkey, secret)

a = EccPaymentServiceQueryPaymentJournalRequest(url,port)

a.orderid = 123

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
