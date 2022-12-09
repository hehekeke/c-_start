//
// Created by eric on 2022/12/8.
//

#include "iostream"

using namespace std;

class Person{
public:
    Person(){
        cout << " Person 的 构造函数 调用" << endl;
    }
    ~Person(){
        cout << " Person 的 析构函数 调用" << endl;
    }

};
void func1301(){
    Person p1;  //分配在栈区 ，直接返回 ，会调用 析构函数
}
int main1301(){
    func1301();
    Person p1; // //分配在栈区 ，函数不会执行完 ，只会先调用  构造函数；
    cout<<"按任意键继续……";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

