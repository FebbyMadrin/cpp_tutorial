#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

template <typename T>
T add (T value1, T value2){
    qInfo()<< value1+value2;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    add(100,8);

    return a.exec();
}
