//
// Created by eric on 2022/12/9.
//
// 拷贝构造函数的调用时机
#include "iostream"

using namespace std;

class Person{
public:
    Person(){
        cout << " Person 的 无参 构造函数 调用" << endl;
    }
    explicit Person(int a){
        age = a;
        cout << " Person 的 有参  构造函数 调用" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p){
        age = p.age ;
        cout << " Person 的 拷贝构造函数 调用" << endl;
    }

    int age{} ;
    ~Person(){
        cout << " Person 的 析构函数 调用" << endl;
    }
};
// 1、使用一个已经创建的对象 进行 初始化一个新的对象
void  test01(){
    Person p1(20);
    Person p2(p1 );
    cout << " p2 age is :" << p2.age << endl;
}
//2、 值传递的方式给函数参数传值
void dowork(Person p) {

}
void  test02(){
    Person p1;
    dowork(p1);

}
 // 3、值方式返回局部对象
 Person dowork2(){
    Person p1;
    cout << &p1 << endl;
    return p1;
}
void test03(){
    Person p = dowork2();
    cout << &p << endl;
}

int main() {
//    test01();
//    test02();
    test03();
    return 0 ;
}
