//
// Created by zhanglong on 12/23/23.
//

#ifndef DONGHUASHEJIWOSHI_MESSAGEFACTORY_H
#define DONGHUASHEJIWOSHI_MESSAGEFACTORY_H

#include "Message.h"

class MessageFactory {

public:
    virtual Message* createMessage() = 0;
};


#endif //DONGHUASHEJIWOSHI_MESSAGEFACTORY_H
