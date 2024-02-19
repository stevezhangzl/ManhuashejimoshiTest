//
// Created by zhanglong on 12/23/23.
//

#ifndef DONGHUASHEJIWOSHI_XAOJIUZIMESSAGE_H
#define DONGHUASHEJIWOSHI_XAOJIUZIMESSAGE_H

#include "Message.h"

class XaojiuziMessage: public Message{

public:
    //有函数体具体的实现
    int sendMessage(const std::string& number,const std::string& content) override;

    XaojiuziMessage(const std::string& appid,const std::string& secret);

private:
    std::string m_appid;
    std::string m_secret;
};


#endif //DONGHUASHEJIWOSHI_XAOJIUZIMESSAGE_H
