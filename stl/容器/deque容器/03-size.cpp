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
        v1.push_back(i);
    }
    print(v1);
    if(v1.empty()) {
        cout << "v1为空 " <<endl;
    }else{
        cout << "v1 capacity =  " << v1.capacity() <<endl;
        cout << "v1 size =  " << v1.size() <<endl;
    }

    // 重新指定大小
    v1.resize(15 , 100); //  (100  默认填充值) 0 1 2 3 4 5 6 7 8 9 100 100 100 100 100
    print(v1);

    v1.resize(5 );
    print(v1);  // 0 1 2 3 4
}
int main(){
    test01();
    return 0;
}