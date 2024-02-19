cmake_minimum_required(VERSION 3.24)
project(donghuashejiwoshi)

set(CMAKE_CXX_STANDARD 17)

add_executable(donghuashejiwoshi main.cpp DBConfig.cpp DBConfig.h BitmapPlus.cpp BitmapPlus.h gongchang/Message.cpp gongchang/Message.h gongchang/XaojiuziMessage.cpp gongchang/XaojiuziMessage.h gongchang/DayiziMessage.cpp gongchang/DayiziMessage.h gongchang/SimpleMessageFactory.cpp gongchang/SimpleMessageFactory.h gongchang/MessageFactory.cpp gongchang/MessageFactory.h gongchang/XiaojiuziMessageFactory.cpp gongchang/XiaojiuziMessageFactory.h)
