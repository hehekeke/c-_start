//
// Created by eric on 2022/12/8.
//

#include "iostream"

using namespace std;

class Person{
public:
    Person(){
        cout << " Person 的 无参 构造函数 调用" << endl;
    }
    Person(int a){
        age = a;
        cout << " Person 的 有参  构造函数 调用" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p){
        age = p.age ;
        cout << " Person 的   拷贝构造函数 调用" << endl;
    }

    int age ;
    ~Person(){
        cout << " Person 的 析构函数 调用" << endl;
    }
};

// 调用
void  test01(){
    // 1、括号法
    Person p ; // 默认构造函数调用
    Person p2(10) ; // 有参构造函数
    Person p3(p2);
    cout << "p2 age = " << p2.age << endl;
    cout << "p3 age = " << p3.age << endl;

    // 2、显示法
    Person p4  = Person(10);

    // 3、隐式转换法

    Person p5  = 10; //  等价于  Person p5  = Person(10);
    Person p6 = p5 ; // 拷贝构造
}
int main1302(){
    test01();
    cout<<"按任意键继续……";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
