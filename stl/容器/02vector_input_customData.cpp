//
// Created by eric on 2022/12/9.
//
#include <iostream>
#include "algorithm"
using  namespace std ;


#include "vector"

class  Person{
public:
    Person(string name , int age){
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
};

void  func(int val){
    cout << val << endl;
}
void test01(){
    vector<Person> v;
    Person p1("a",10);
    Person p2("b",20);
    Person p3("c",30);
    Person p4("d",40);
    Person p5("e",50);

    v.push_back(p1) ;
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for (vector<Person>::iterator it = v.begin() ;  it != v.end();  it ++) {
        cout << "name : " << it->m_name  << " ; age :" << it->m_age <<  endl;
    }
  }
int main(){
    test01();
    return 0 ;
}