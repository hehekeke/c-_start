//
// Created by eric on 2022/12/10.
//
#include "iostream"
#include "vector"

using namespace std;

void print(vector<int> v){
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i + 10);
    }
    cout << "交换前:" << endl;
    print(v1);
    vector<int> v2;
    for (int i = 10; i > 0; --i) {
        v2.push_back(i + 10);
    }
    print(v2);

    v1.swap(v2);
    cout << "交换后:" << endl;
    print(v1);
    print(v2);
}
//2、实际用途   巧用swap可以收缩内存空间
void test02(){
    vector<int> v1 ;
    for (int i = 0; i < 100000; ++i) {
        v1.push_back(i);
    }
    cout << "v1 cap :" << v1.capacity() << endl; //131072
    cout << "v1 size :" << v1.size() << endl; // 100000

    v1.resize(3);
    cout << "v1 cap :" << v1.capacity() << endl; // 131072
    cout << "v1 size :" << v1.size() << endl; // 3

    //巧用swap可以收缩内存空间
    vector<int>(v1).swap(v1);
    cout << "v1 cap :" << v1.capacity() << endl; // 3
    cout << "v1 size :" << v1.size() << endl; // 3
}
int main(){
//    test01();
    test02();
    return 0;
}