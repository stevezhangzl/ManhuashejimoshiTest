//
// Created by zhanglong on 12/23/23.
//

#ifndef DONGHUASHEJIWOSHI_SIMPLEMESSAGEFACTORY_H
#define DONGHUASHEJIWOSHI_SIMPLEMESSAGEFACTORY_H

#include "Message.h"

enum MessageType{
    Xiaojiuzi,
    Dayizi
};

class SimpleMessageFactory {
public:
    static Message* createMessage(MessageType type);

};


#endif //DONGHUASHEJIWOSHI_SIMPLEMESSAGEFACTORY_H
