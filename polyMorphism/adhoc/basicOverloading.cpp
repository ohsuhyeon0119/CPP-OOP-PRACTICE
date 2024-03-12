#include <iostream>
#include <string>
using namespace std;

// ad-hoc: 임시의, 특정한 목적의
// 임시 다형성 : 특정 목적을 위해서 따로 정의하는, 특수화된 것을 정의하는 다형성 구현 방식이다.
// 함수 오버로딩 (다른 목적을 위해 따로 정의), 템플릿 특수화

int add(int a, int b){
  return a+b;
}


// 특정 목적을 위해 따로 다시 정의함으로서 임시 다형성을 구현
string add(const char* a, const char* b){
  string temp(a);
  temp +=b;
  return temp;
};

// 템플릿 특수화를 통한 임시다형성 구현은 parametric.cpp 참조

int main(){

  string c = add("i am a " ,"boy.");
  cout<<c<<endl;

  return 0;

};


