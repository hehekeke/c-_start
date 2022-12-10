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
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    print(v);


    // 赋值  =
    vector<int> v2 = v;
    print(v2);

    // assign
    vector<int> v3;
    v3.assign(v.begin(),v.end());
    print(v3);

    // n 个elem 赋值
    vector<int> v4;
    v4.assign(10,100);
    print(v4);
}
int main(){
    test01();
    return 0;
}