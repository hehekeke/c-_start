//
// Created by eric on 2022/12/8.
//

#include "iostream"

using namespace std;
class Student{
public:
    string  m_name ;

    void showName(){
        cout << "name is :" << m_name << endl;
    }

    void setName(string name) {
        m_name = name   ;
    }

};
int main1202(){
    Student s;
//    s.name = "111";
    s.setName("账单");
    s.showName();
    return 0;
}
