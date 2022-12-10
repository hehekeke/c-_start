//
// Created by eric on 2022/12/9.
//
#include "iostream"
using namespace std;

#include "map"
#include "vector"

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    int carry = 0;
    while (l1 || l2) {
      int n1 = l1 ? l1->val : 0;
      int n2 = l2 ? l2->val : 0;
      int sum = n1 + n2 + carry;
      if (!head) {
        head = tail = new ListNode(sum % 10);
      } else {
        tail->next = new ListNode(sum % 10);
        tail = tail->next;
      }
      carry = sum / 10;
      if (l1) {
        l1 = l1->next;
      }
      if (l2) {
        l2 = l2->next;
      }
      if (carry > 0) {
        tail->next = new ListNode(carry);
      }
    }
    return head;
  }
};

// 数组作为函数参数传递的时候，传递的是指针，所以不能正确的求出子函数中传递进去的数组的长度，切记
ListNode *arrToNodes(int arr[], int len) {
  ListNode *head = nullptr;
  ListNode *tail = nullptr;
  for (int i = 0; i < len; ++i) {
    if (!head) {
      head = tail = new ListNode(arr[i]);
    } else {
      tail->next = new ListNode(arr[i]);
      tail = tail->next;
    }
  }
  return head;
}

void printNodes(ListNode *node) {
  while (node) {
    cout << node->val << " ";
    node = node->next;
  }
  cout << endl;
}
int main() {
  Solution s;
  int arr1[] = {2, 4, 3};
  int arr2[] = {5, 6, 4};
  printNodes(arrToNodes(arr1, sizeof(arr1) / sizeof(arr1[0])));
  printNodes(arrToNodes(arr2, sizeof(arr2) / sizeof(arr1[0])));

  ListNode *a = s.addTwoNumbers(arrToNodes(arr1, 3), arrToNodes(arr2, 3));
  printNodes(a);
  return 0;
}
