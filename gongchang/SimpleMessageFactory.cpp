//
// Created by zhanglong on 12/23/23.
//

#include "SimpleMessageFactory.h"
#include "XaojiuziMessage.h"
#include "DayiziMessage.h"

Message* SimpleMessageFactory::createMessage(MessageType type) {
    if (type == Xiaojiuzi){
        std::string appid = "123";
        std::string secret = "flsjflsjf";
        return new XaojiuziMessage(appid,secret);
    }else if (type == Dayizi){
        return new DayiziMessage();
    }

    return nullptr;
}
