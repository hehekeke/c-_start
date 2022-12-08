//
// Created by eric on 2022/12/8.
//

#include "iostream"

using namespace std;

class Person1{
public:
    Person1(){
        cout << " Person1 的 无参 构造函数 调用" << endl;
    }
    Person1(int a){
        age = a;
        cout << " Person1 的 有参  构造函数 调用" << endl;
    }
    // 拷贝构造函数
    Person1(const Person1 &p){
        age = p.age ;
        cout << " Person1 的   拷贝构造函数 调用" << endl;
    }

    int age ;
    ~Person1(){
        cout << " Person1 的 析构函数 调用" << endl;
    }
};

// 调用
void  test01(){
    // 1、括号法
    Person1 p ; // 默认构造函数调用
    Person1 p2(10) ; // 有参构造函数
    Person1 p3(p2);
    cout << "p2 age = " << p2.age << endl;
    cout << "p3 age = " << p3.age << endl;

    // 2、显示法
    Person1 p4  = Person1(10);

    // 3、隐式转换法

    Person1 p5  = 10; //  等价于  Person1 p5  = Person1(10);
    Person1 p6 = p5 ; // 拷贝构造
}
int main(){
    test01();
    cout<<"按任意键继续……";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
