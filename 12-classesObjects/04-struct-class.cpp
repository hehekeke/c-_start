//
// Created by eric on 2022/12/8.
//
#include "iostream"

using namespace std;

// struct 与 class 的唯一区别：默认权限不一样
// struct ： 默认 共用 public
// class ： 默认 私有 private
class C1 {
    int a ; //  私有 private
};

struct C2 {
    int a ; //  共用 public
};

int main1204(){
    return  0;
}