//
// Created by zhanglong on 12/22/23.
//

#include "BitmapPlus.h"
#include <stdlib.h>
#include <string.h>

BitmapPlus::BitmapPlus() {

}

BitmapPlus::BitmapPlus(int width, int height):width(width),height(height) {
    data = (uint8_t*) malloc(width*height*4);
}

BitmapPlus::~BitmapPlus() {
    if (data!= nullptr){
        free(data);
        data = nullptr;
    }
}

BitmapPlus::BitmapPlus(const BitmapPlus &bitmap) {
    /*width = bitmap.width;
    height = bitmap.height;
    //1.先申请同样的大小的内存空间
    data = static_cast<uint8_t *>(malloc(width * height * 4));
    //2.进行内存的拷贝
    memcpy(data,bitmap.data,width*height*4);*/
    //和赋值运算符函数是一样的逻辑，所以直接调用赋值运算符重载
    *this = bitmap;
}

BitmapPlus &BitmapPlus::operator=(const BitmapPlus &bitmap) {
    //1.先判断原来的data是不是有指向内存，有的话就释放掉
    if (data!= nullptr){
        free(data);
        data = nullptr;
    }

    width = bitmap.width;
    height = bitmap.height;
    data = static_cast<uint8_t *>(malloc(width * height * 4));
    memcpy(data,bitmap.data,width*height*4);

    return *this;
}

int BitmapPlus::getWidth() {
    return width;
}

int BitmapPlus::getHeight() {
    return height;
}
