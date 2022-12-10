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
    // 1、使用 [] 来访问数组元素
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << " ";
    }
    cout << endl ;

    // 2、使用 at 来访问数组元素
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1.at(i) << " ";
    }
    cout << endl ;

    // 获取第一个元素
    cout << "获得第一个元素 :" << v1.front() << endl;

    cout << "获得最一个元素 :" << v1.back() << endl;

}
int main(){
    test01();
    return 0;
}