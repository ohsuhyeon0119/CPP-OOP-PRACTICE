#include <iostream>
using namespace std;

// 강제 다형성이란 특정 타입을 다른 타입으로 변환하는 것
// 캐스팅

// 생성자와 강제 형변환. explicit keyword
class A{
  int a;
  public :
  explicit A(int num) : a(num){};
  int getNum(){
    return a;
  }

};

int getNumber(A obj){
  return obj.getNum();
}



int main(){
  // A obj = 10; error. 생성자에 explicit keyword를 사용하였으므로
  // cout<<obj.getNum() <<endl;
  // cout << getNumber(10)<<endl;
  return 0;
}




