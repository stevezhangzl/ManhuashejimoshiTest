//
// Created by zhanglong on 12/22/23.
//

#ifndef DONGHUASHEJIWOSHI_DBCONFIG_H
#define DONGHUASHEJIWOSHI_DBCONFIG_H

#include <string>


class DBConfig {

public:
    static DBConfig* getInstance();

    std::string getConn();
    std::string getUsername();
    std::string getPassword();

    DBConfig(const DBConfig& config) = delete;
    DBConfig& operator =(const DBConfig& config) = delete;
private:
    std::string m_conn;
    std::string m_username;
    std::string m_password;

    DBConfig(std::string conn,std::string username,std::string password);


    static DBConfig* config;
    DBConfig();
    ~DBConfig();


};


#endif //DONGHUASHEJIWOSHI_DBCONFIG_H
