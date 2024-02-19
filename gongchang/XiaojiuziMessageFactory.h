//
// Created by zhanglong on 12/23/23.
//

#ifndef DONGHUASHEJIWOSHI_XIAOJIUZIMESSAGEFACTORY_H
#define DONGHUASHEJIWOSHI_XIAOJIUZIMESSAGEFACTORY_H

#include "MessageFactory.h"

class XiaojiuziMessageFactory: public MessageFactory{
public:
    Message* createMessage() override;

};


#endif //DONGHUASHEJIWOSHI_XIAOJIUZIMESSAGEFACTORY_H
