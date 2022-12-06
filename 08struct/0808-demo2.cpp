//
// Created by eric on 2022/12/6.
//
#include <iostream>
using namespace std;
struct Hero{
    string name ;
    int  age ;
    string sex;
};
void bubbleSort(struct Hero aHeros[] ,int len){
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if(aHeros[j].age > aHeros[j+1].age ){
                Hero temp = aHeros[j];
                aHeros[j] = aHeros[j+1];
                aHeros[j+1] = temp;
            }
        }
    }
}
int main0808(){
    struct  Hero aHeros[5] = {
            {"a",3,"男"},
            {"b",90,"男"},
            {"c", 50,"男"},
            {"d",4,"男"},
            {"e",1,"男"},
    };
    int len = sizeof(aHeros) / sizeof(aHeros[0]);

    bubbleSort(aHeros ,len);
    for (int i = 0; i < len; ++i) {
        cout << aHeros[i].name << " " << aHeros[i].age << " ";
        cout << endl;
    }
    return 0;
}
