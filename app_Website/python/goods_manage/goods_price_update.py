
import jd.api

import json

from jd.api.rest.PriceWriteUpdateSkuJdPriceRequest import PriceWriteUpdateSkuJdPriceRequest

jd.setDefaultAppInfo(appkey, secret)

a = PriceWriteUpdateSkuJdPriceRequest(url,port)

a.appid = "jingdong" a.name = "jingdong" a.jdPrice = 123 a.skuId = 123

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
