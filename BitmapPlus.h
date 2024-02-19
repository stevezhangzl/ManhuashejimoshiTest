//
// Created by zhanglong on 12/22/23.
//

#ifndef DONGHUASHEJIWOSHI_BITMAPPLUS_H
#define DONGHUASHEJIWOSHI_BITMAPPLUS_H


#include <stdint.h>

class BitmapPlus {
public:
    BitmapPlus();
    BitmapPlus(int width,int height);
    ~BitmapPlus();

    //函数的参数使用引用 可以减少一次对象的拷贝  编译器不让用对象，这里只能是引用
    //原因：因为这里是对象参数     在调实参的时候就会发生 BitmapPlus bitmap = bitmapInput 这里会先调用一次拷贝构造函数 这样就递归了，因为他自己就是拷贝构造
    BitmapPlus(const BitmapPlus& bitmap);

    //注意：返回引用， 参数也是引用  这两个地方都可以是对象(前提是拷贝构造函数是独立实现的，如果调用的是赋值运算符重载，就必须使用引用了)
    BitmapPlus& operator=(const BitmapPlus& bitmap);

    int getWidth();
    int getHeight();
private:
    //在c++中，如果一个变量不进行赋初值，为变成一个不确定的随机数，这和java里是不一样的，所以一般会赋初值
    int width = 0;
    int height = 0;
    uint8_t * data = nullptr;



};


#endif //DONGHUASHEJIWOSHI_BITMAPPLUS_H
