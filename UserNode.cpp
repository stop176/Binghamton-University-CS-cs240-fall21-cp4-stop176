// UserNode.cpp by MIKE LEWIS FORTNITE CONCERT
#include <stdlib.h>
using namespace std;
#include "UserNode.h"
#include <string>

//constructors
UserNode::UserNode() = default; //default constructor

UserNode::UserNode(string I, int M){
    UserID = I;
    Money = M;
}

void UserNode::addMoney(int M){
  Money += M;
}

void UserNode::resetMoney(){
  Money = 0;
}

int UserNode::getMoney(){
  return Money;
}

//overloaded operators
bool UserNode::operator==(const UserNode& obj){
  if(UserID==obj.UserID)
    return true;
  else
    return false;
}

bool UserNode::operator!=(const UserNode& obj){
  if(UserID!=obj.UserID)
    return true;
  else
    return false;
}

bool UserNode::operator>(const UserNode& obj){
    if(Money>obj.Money)
        return true;
    else
        return false;
}

bool UserNode::operator<(const UserNode& obj){
    if(Money<obj.Money)
        return true;
    else
        return false;
}