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
    print(v1);  // 10 11 12 13 14 15 16 17 18 19

    //尾删除
    v1.pop_back();
    print(v1);  // 10 11 12 13 14 15 16 17 18

    // 插入
    v1.insert(v1.begin(),100);
    print(v1);  // 100 10 11 12 13 14 15 16 17 18

    v1.insert(v1.begin(),2,1000);
    print(v1);  // 1000 1000 100 10 11 12 13 14 15 16 17 18

    // 删除
    v1.erase(v1.begin()) ;
    print(v1);  // 1000 100 10 11 12 13 14 15 16 17 18

    // 清空操作
//    v1.erase(v1.begin(),v1.end());
    v1.clear();
    print(v1);
}
int main(){
    test01();
    return 0;
}