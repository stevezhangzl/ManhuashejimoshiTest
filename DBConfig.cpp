//
// Created by zhanglong on 12/22/23.
//

#include "DBConfig.h"
#include <fstream>

DBConfig* DBConfig::config = nullptr;

std::string DBConfig::getConn() {
    return std::string();
}

std::string DBConfig::getUsername() {
    return std::string();
}

std::string DBConfig::getPassword() {
    return std::string();
}

DBConfig::DBConfig() {
    std::fstream fs("/Users/zhanglong/Desktop/work/cpp_project/donghuashejiwoshi/config.txt");
    char tempStr[1024];
    int index = 0;
    while (fs.getline(tempStr,1024)){
        if (index == 0){ //第一行
            this->m_conn = tempStr;
        }else if (index == 1){ //第二行
            this->m_username = tempStr;
        } else if (index == 2){ //第三行
            this->m_password = tempStr;
        }
        index++;
    }

}

DBConfig *DBConfig::getInstance() {
    if (config == nullptr)
        config = new DBConfig();
    return config;
}

DBConfig::~DBConfig() {

}

DBConfig::DBConfig(std::string conn, std::string username, std::string password):m_conn(conn),m_username(username),m_password(password) {

}

