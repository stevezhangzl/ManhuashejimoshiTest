//
// Created by zhanglong on 12/23/23.
//

#ifndef DONGHUASHEJIWOSHI_DAYIZIMESSAGE_H
#define DONGHUASHEJIWOSHI_DAYIZIMESSAGE_H

#include "Message.h"

class DayiziMessage: public Message{
public:
    int sendMessage(const std::string& number,const std::string& content) override;

};


#endif //DONGHUASHEJIWOSHI_DAYIZIMESSAGE_H
