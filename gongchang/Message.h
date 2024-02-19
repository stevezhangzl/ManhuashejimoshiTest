//
// Created by zhanglong on 12/23/23.
//

#ifndef DONGHUASHEJIWOSHI_MESSAGE_H
#define DONGHUASHEJIWOSHI_MESSAGE_H
#include <string>

/**
 * 这个多态的好处在于：每有一个新的情况，是新增一个类去解决问题，而不是基于现有的去修改，不会对现有的进行干扰
 */
class Message {

public:
    //纯虚函数  Message是一个抽象类
    virtual int sendMessage(const std::string& number,const std::string& content) = 0;
};


#endif //DONGHUASHEJIWOSHI_MESSAGE_H
