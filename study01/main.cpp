//窗口类的头文件
#include "widget.h"
//应用程序类的头文件
#include <QApplication>
#include <iostream>
//main函数程序入口 argc-命令行参数的个数（包含程序名自己），argv-命令行参数列表
int main(int argc, char *argv[])
{
    //创建应用程序类对象并传入两个参数进行初始化
    QApplication a(argc, argv);
    //创建窗口类对象
    Widget w;
    //窗口类对象默认是不会显示窗口，需要调用show方法来显示
    w.show();
    //让应用程序对象进入消息循环机制中(封装在exec中)，
    //代码阻塞到当前行
    std::cout << "hello QT6 world!!!" << std::endl;
    return a.exec();
    //如何不论写什么代码，程序都不会执行到，因此前一句是return了！！！
    std::cout << "hello QT6 world!!!" << std::endl;
}
