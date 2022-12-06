//
// Created by eric on 2022/12/6.
//
/**
* 通信录 管理系统开发
*/

#include <iostream>
using namespace std;

#define MAX 100
struct Person {
    string name;
    int age ;
    string phone;
};
struct AddressBooks  {
    struct Person aPerson[MAX];
    int size;
};


void add(AddressBooks *pBooks);

void showAddress(AddressBooks *pBooks);

int isExist(AddressBooks *pBooks, string name);

void deleteAdd(AddressBooks *pBooks);
void find(AddressBooks *ads) ;
void change(AddressBooks *ads) ;
void clean(AddressBooks *ads) ;

void showMenu(){
    cout << "********************" << endl;
    cout << "***  1、显示联系人 ***" << endl;
    cout << "***  2、添加联系人 ***" << endl;
    cout << "***  3、删除联系人 ***" << endl;
    cout << "***  4、查找联系人 ***" << endl;
    cout << "***  5、修改联系人 ***" << endl;
    cout << "***  6、清空联系人 ***" << endl;
    cout << "***  0、退出联系人 ***" << endl;
    cout << "********************" << endl;
}
int mainAdd(){
    AddressBooks ads ;
    ads.size = 0;
    int select = 0;
    showMenu();
    while(true) {
       cin >> select;
       switch (select) {
           case 1:
               showAddress(&ads);
               break;
           case 2: //添加联系人
                add(&ads);
               break;
           case 3: //删除联系人
               deleteAdd(&ads);
               break;
           case 4: // 查找联系人
                find(&ads);
               break;
           case 5:
               change(&ads);
               break;
           case 6:
               clean(&ads);
               break;
           case 0:
               cout << "欢迎下次继续使用 " << endl;
               return 0;
               break;
           default:
               break;
       }
   }
    return 0 ;
}
int isExist(AddressBooks *ads, string name) {
    for (int i = 0; i < ads->size; i++) {
        if(ads->aPerson[i].name == name) {
            return i;
        }
    }
    return -1;
}

void deleteAdd(AddressBooks *ads) {
    cout << " input del name" << endl ;
    string name ;
    cin >> name;
    int res = isExist(ads ,name);
    if(res == -1) {
        cout << " 找不到这个人"<<endl;
        return;
    }
    for (int i = res; i < ads->size; ++i) {
        ads->aPerson[i] = ads->aPerson[i+1];

    }
    ads->size--;
    cout << "删除成功" << endl ;
}



void showAddress(AddressBooks *ads) {
    if(ads->size == 0 ){
        cout << "通信录为空"<< endl;
        return;
    }
    for (int i = 0; i < ads->size; ++i) {
        cout << ads->aPerson[i].name << "\t";
        cout << ads->aPerson[i].age << "\t";
        cout << ads->aPerson[i].phone << "\t" << endl;
    }
}

void add(AddressBooks *abs) {
    if(abs->size >= MAX) {
        cout << "通信录已满，无法添加新的名单" << endl;
        return;
    }
     string name ;
    cout << "input name" << endl;
    cin >> name;
    abs->aPerson[abs->size].name = name;

    int age ;
    cout << "input age" << endl;
    cin >> age ;
    abs->aPerson[abs->size].age = age;

    string phone ;
    cout << "input phone" << endl;
    cin >> phone ;
    abs->aPerson[abs->size].phone = phone;
    abs->size++;
    cout << "用户添加成功" << endl;
}


void find(AddressBooks *ads) {
    if(ads->size == 0 ){
        cout << "通信录为空"<< endl;
        return;
    }
    cout << "input find name " << endl ;
    string  name ;
    cin >> name ;
    int ret =  isExist(ads,name);
    if(ret == -1) {
        cout << " 没有此人 "<< endl;
        return;
    }
    cout << ads->aPerson[ret].name << "\t";
    cout << ads->aPerson[ret].age << "\t";
    cout << ads->aPerson[ret].phone << "\t" << endl;
}
// 修改联系人
void change(AddressBooks *abs) {
    cout << "input change name " << endl ;
    string  name ;
    cin >> name ;
    int ret =  isExist(abs,name);
    if (ret == -1){
        cout << " 没有此人 "<< endl;
        return;
    }
    cout << "input name" << endl;
    cin >> name;
    abs->aPerson[ret].name = name;

    int age ;
    cout << "input age" << endl;
    cin >> age ;
    abs->aPerson[ret].age = age;

    string phone ;
    cout << "input phone" << endl;
    cin >> phone ;
    abs->aPerson[ret].phone = phone;

    cout << "更新 成功" << endl;
}

/**
 * 清空
 * @param ads
 */
void clean(AddressBooks *ads) {
    ads->size = 0;
    cout << "联系人已清空" << endl;
}