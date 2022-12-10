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


void test01(){
    vector<int> v ;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    print(v);
    // 通过区间构造
    vector<int> v2(v.begin(),v.end());
    print(v2);

    //n个m的方式  构造
    vector<int> v3(10,100);
    print(v3);

    //拷贝构造
    vector<int> v4(v3);
    print(v4 );
}


int main(){
    test01();
    return 0;
}