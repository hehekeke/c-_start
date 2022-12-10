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


// 容器预留len个元素长度，预留位置不初始化，元素不可访问。
void test01(){
    vector<int> v1 ;

    // resize 预留空间  ， 不需要找新的空间
    v1.resize(100000) ;
    int num = 0;
    int *p = NULL ;
    for (int i = 0; i < 100000; ++i) {
        v1.push_back(i);
        if (p != &v1[0]) {
            p = &v1[0];
            num++;
        }
    }
    cout << "num = " <<  num << endl; // 18

    vector<int>(v1).swap(v1);
    cout << "v1 cap :" << v1.capacity() << endl; // 3
    cout << "v1 size :" << v1.size() << endl; // 3
}
int main(){
    test01();
    return 0;
}