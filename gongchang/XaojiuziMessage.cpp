//
// Created by zhanglong on 12/23/23.
//

#include "XaojiuziMessage.h"

int XaojiuziMessage::sendMessage(const std::string &number, const std::string &content) {
    printf("xiaojiuzi appdi:%s,secret:%s\n",m_appid.c_str(),m_secret.c_str());
    printf("Xiaojiuzi sendMessage  number:%s,content:%s\n",number.c_str(),content.c_str());
    return 0;
}

XaojiuziMessage::XaojiuziMessage(const std::string& appid, const std::string& secret):m_appid(appid),m_secret(secret) {

}
