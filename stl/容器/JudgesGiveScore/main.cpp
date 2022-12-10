//
// Created by eric on 2022/12/10.
//
#include "iostream"

#include "deque"
#include "vector"

using namespace std;
#include "algorithm"
class Person {
public:
  Person(string name, int score) {
    this->m_Name = name;
    this->m_Score = score;
  }
  string m_Name;
  int m_Score;
};

void createPerson(vector<Person> &v);

void setScore(vector<Person> &vector1);

void showScore(vector<Person> &vector1);

int main() {

  // 随机数粽种子
  ::srand(::time(NULL));
  // 1、创建5名选手
  vector<Person> v;
  createPerson(v);

  // 测试
  //  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
  //    cout << "姓名" << it->m_Name << "; socre = " << it->m_Score << endl;
  //  }

  // 2、给5名选手打分
  setScore(v);
  // 3、显示最后的得分
  showScore(v);
  return 0;
}

void showScore(vector<Person> &v) {
  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
    cout << "姓名" << it->m_Name << "; socre = " << it->m_Score << endl;
  }
}

void setScore(vector<Person> &v) {
  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
    // 评委的分数 放到deque
    deque<int> d;
    for (int i = 0; i < 10; ++i) {
      int score = ::rand() % 41 + 60;
      d.push_back(score);
    }
    // 排序
    sort(d.begin(), d.end());
    //去掉最高分  最低分
    d.pop_front();
    d.pop_back();
    // 计算平均分
    int sum = 0;
    for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
      sum += *dit;
    }
    int avg = sum / d.size();
    it->m_Score = avg;
  }
}

void createPerson(vector<Person> &v) {
  string nameSeed = "ABCDE";
  for (int i = 0; i < 5; ++i) {
    string name = "选手";
    name += nameSeed[i];
    int score = 0;
    Person p(name, score);
    v.push_back(p);
  }
}
