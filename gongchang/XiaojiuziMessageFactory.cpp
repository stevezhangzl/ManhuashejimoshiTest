//
// Created by zhanglong on 12/23/23.
//

#include "XiaojiuziMessageFactory.h"
#include "XaojiuziMessage.h"

Message *XiaojiuziMessageFactory::createMessage() {
    std::string appid = "12345";
    std::string secret = "jflsjflefe";
    return new XaojiuziMessage(appid,secret);
}
