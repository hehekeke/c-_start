//
// Created by eric on 2022/12/9.
//
#include <iostream>
#include "algorithm"
using  namespace std ;


#include "vector"

void  func(int val){
    cout << val << endl;
}
void test01(){
    vector<int> v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

//    vector<int>::iterator itBegin = v.begin();
//    vector<int>::iterator itEnd = v.end();
//    // 第一种遍历方式
//    while (itBegin != itEnd) {
//        cout << *itBegin << endl;
//        itBegin++;
//    }
    
    // 第二种遍历方式
    for (vector<int>::iterator  it = v.begin(); it != v.end() ; it++) {
        cout << *it << endl;
    }

    // 3、 利用STL提供的遍历算法
    for_each(v.begin(),v.end(), func) ;

 }
int main(){
    test01();
    return 0 ;
}