import jd.api

import json

from jd.api.rest.WareAddRequest import WareAddRequest

jd.setDefaultAppInfo(appkey, secret)

a = WareAddRequest(url,port)

a.tradeno = "jingdong" a.warelocation = "jingdong" a.cid = "jingdong" a.shopcategory = "jingdong" a.title = "jingdong" a.upccode = "jingdong" a.optiontype = "jingdong" a.itemnum = "jingdong" a.stocknum = "jingdong" a.producter = "jingdong" a.wrap = "jingdong" a.length = "jingdong" a.wide = "jingdong" a.high = "jingdong" a.weight = "jingdong" a.costprice = "jingdong" a.marketprice = "jingdong" a.jdprice = "jingdong" a.notes = "jingdong" a.wareimage = "txt" a.packlisting = "jingdong" a.service = "jingdong" a.skuproperties = "jingdong" a.attributes = "jingdong" a.skuprices = "jingdong" a.skustocks = "jingdong" a.propertyalias = "jingdong" a.outerid = "jingdong" a.ispayfirst = "jingdong" a.iscanvat = "jingdong" a.isimported = "jingdong" a.ishealthproduct = "jingdong" a.isshelflife = "jingdong" a.shelflifedays = "jingdong" a.isserialno = "jingdong" a.isappliancescard = "jingdong" a.isspecialwet = "jingdong" a.warebigsmallmodel = "jingdong" a.warepacktype = "jingdong" a.inputpids = "jingdong" a.inputstrs = "jingdong" a.hascheckcode = "jingdong" a.adcontent = "jingdong" a.listtime = "jingdong"

try:

f= a.getResponse(sessionkey)

print(json.dumps(f, ensure_ascii=False))

except Exception,e:

print(e)
