#include <iostream>

// 서브타입 다형성(런타임 다형성)
// 런타임 시에 부모 타입이 가리키는 실제 객체가 무엇인지에 따라 호출 함수가 결정되므로 런타임 다형적이다.

class Animal{
  private:
  int privateNum;
  

public: 
  int publicNum;
  Animal(int pn) : publicNum(pn) {

  }
  
  virtual void sound() =0; // pure 가상함수 : 추상클래스를 만듬.

 

};


class Dog : public Animal{


  public:
  Dog(int pn) : Animal(pn) {

  }
  void sound() override {
    std::cout<<"왈왈" <<std::endl;

  };
  

};

class Cat : public Animal{


  public:

  Cat(int pn) : Animal(pn) {

  }

  void sound() override{
    std::cout << "야옹" <<std::endl;
  }


};


int main(){
  Animal * animals[3] = {new Dog(1), new Cat(2), new Cat(3)};
  // animals[0]->privateNum error

}