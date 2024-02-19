#include <iostream>
#include <fstream>


class SqlQuery{
public:
    SqlQuery(const std::string& conn,const std::string& username,const std::string& password){
        m_conn = conn;
        m_username = username;
        m_password = password;
    }

    int query(){
        //假装这里有实现
        return 0;
    }

    std::string m_conn;
    std::string m_username;
    std::string m_password;
};


#include "DBConfig.h"

#include <chrono>

long long getTime(){
    std::chrono::time_point<std::chrono::system_clock,std::chrono::milliseconds> tp = std::chrono::time_point_cast<std::chrono::milliseconds>(std::chrono::system_clock::now());
    auto temp = std::chrono::duration_cast<std::chrono::milliseconds>(tp.time_since_epoch());


    return (long long)temp.count();
}


//#include "gongchang/XaojiuziMessage.h"
#include "gongchang/SimpleMessageFactory.h"


int main() {
    /*for (int i = 0; i < 100; ++i) {
        DBConfig* config = DBConfig::getInstance();
        SqlQuery query(config->getConn(),config->getUsername(),config->getPassword());
        query.query();
    }*/

    /*//父类的指针，调用子类的具体的实现
    Message *message = new XaojiuziMessage();
    message->sendMessage("111212","dfjdlfdl");


    delete message;*/

    Message* message = SimpleMessageFactory::createMessage(Xiaojiuzi);
    message->sendMessage("111212","dfjdlfdl");
    delete message;



    return 0;
}
