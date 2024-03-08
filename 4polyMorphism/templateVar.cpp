#include <iostream>
using namespace std;

// 템플릿의 매개변수에 타입이 아닌 일반적인 타입의 변수 값을 넣을 수 있다.
// 템플릿은 매개변수 다형성을 구현하는 문법이다.
// 변수 값으로 서로 다른 함수를 만들어냄으로서, 클래스 또는 함수를 다양하게 generate 한다.

template <int len>
class intArray{
  int data[len];
  public :
  int getElement(int index){
      return data[index];
  }
  void setElement(int index,int value){
    data[index] = value;
  }



};


int main (){

  intArray<5> arr;
  for(int i =0;i<5;i++){
    arr.setElement(i,i*10);
  }


  return 0;
}




