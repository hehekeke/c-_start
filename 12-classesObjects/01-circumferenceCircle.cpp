//
// Created by eric on 2022/12/8.
//
#include "iostream"

using namespace std;

const double  PI = 3.14;
class Circle{
public:
    int mr;
    double zhouchang(){
        return 2*PI*mr;
    }
};




int main1201(){
    Circle ci;
    ci.mr = 10;
    cout << "周长 : " << ci.zhouchang() << endl;
    return 0;
}
