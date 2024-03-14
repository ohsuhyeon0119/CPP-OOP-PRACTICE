#include <iostream>
#include "customString.h"
using namespace std;

int main(){

  CustomString::String buf = 1024; //  자동으로 생성자 호출
  //CustomString::String str(); ->error . ambiguity 문제가 있다. 함수 선언문과 같지 않은가! 
  CustomString::String *stringA = new CustomString::String("i am human");
  
  CustomString::String str1("i");
  CustomString::String str2(" am");
  CustomString::String str3("big");
  str3 +=" pig";
  str1 +=str2 += " a human";
  cout <<str1<<endl;
  cout <<str3<<endl;

  return 0;
}