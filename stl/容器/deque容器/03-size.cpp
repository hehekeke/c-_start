//
// Created by eric on 2022/12/10.
//
#include "iostream"
#include "vector"

#include "deque"

using namespace std;

void printDeque(const deque<int> &d){
    for(deque<int>::const_iterator it =d.begin() ; it != d.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
}


void test01(){
    deque<int> d1;
    for (int i = 0; i < 10; ++i) {
        d1.push_back(i);
    }
    printDeque(d1);

  if(d1.empty()) {
      cout << "d1 is empty" << endl;
  }else{
      cout << "d1 is size : " << d1.size() << endl;  //  10 ， 没有过容量的概念
  }

//    d1.resize(15);
//    printDeque(d1); // 0 1 2 3 4 5 6 7 8 9 0 0 0 0 0
//    d1.resize(15,1);
//    printDeque(d1); // 0 1 2 3 4 5 6 7 8 9 1 1 1 1 1
    d1.resize(5); // 0 1 2 3 4

}

int main(){
    test01();
    return 0;
}