//
// Created by eric on 2022/12/3.
//
#include <iostream>
using  namespace std ;
int main(){
    for (int i = 0; i < 100; ++i) {
        if (i% 2 == 0 ) {
            continue;
        }
        cout << i << endl;
    }
}

