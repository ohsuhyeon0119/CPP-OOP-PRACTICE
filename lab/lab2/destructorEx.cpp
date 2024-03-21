#include <iostream>
#include <string>

using namespace std;


class Chicken{
 public:
    string name;
    void print_name(){
      cout << "i am " << name << endl;
    }
    Chicken(){ // 생성자는 반환값과 파라미터를 가질 수 없다.
      name = "KFC";
        cout << name <<" created." << endl;
    }
  
    Chicken(string arg){
      name = arg;
      cout << name <<" created." << endl;
      
    } 
    ~Chicken(){ //소멸자는 반환값과 파라미터를 가질 수 없다.
      cout << name << " destructed"<<endl;
    }
      
  };





int main(){

  Chicken *chickenPtr = new Chicken(); // 동적할당의 경우 ()를 붙여도 된다.
  chickenPtr->print_name();
  delete chickenPtr; // 소멸자가 이때 호출

  Chicken dfc("DFC, Delicious Fried Chicken");
  dfc.print_name();
  // 지역변수로 선언한 경우 함수를 빠져나갈 때 소멸자 호출
  return 0;
}