// UserNode.h by MIKE LEWIS FORTNITE CONCERT
#ifndef USERNODE_H
#define USERNODE_H
#include <stdlib.h>
using namespace std;
#include <string>

class UserNode {
 public:
  UserNode();
  UserNode(string id, int money);
  void addMoney(int m);
  void resetMoney();
  int getMoney();

  // overlaoded operators
  bool operator==(const UserNode&);
  bool operator!=(const UserNode&);
  bool operator<(const UserNode&);
  bool operator>(const UserNode&);
 private:
  string UserID;
  int Money;
};

#endif