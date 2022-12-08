//
// Created by eric on 2022/12/8.
//
#include "iostream"

using namespace std;
class Person{
public:
    string m_name;
protected:
    string m_car;
private:
    string m_passwd;
public:
    void  func1(){
        m_name = "name";
        m_car = "car";
        m_passwd = "www";
    }
};
int main1203(){
    Person p;
    p.m_name = "张三";
    p.func1();
    return 0;
}

