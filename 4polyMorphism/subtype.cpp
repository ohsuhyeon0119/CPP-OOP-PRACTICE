#include <iostream>

// 서브타입 다형성(런타임 다형성)
// 런타임 시에 부모 타입이 가리키는 실제 객체가 무엇인지에 따라 호출 함수가 결정되므로 런타임 다형적이다.

class Animal{

public: 
  virtual void sound() =0;


};
class Dog : public Animal{

  void sound() override{
    std::cout<<"왈왈" <<std::endl;

  };
  

};

class Cat : public Animal{

  void sound() override{
    std::cout << "야옹" <<std::endl;
  }


};


int main(){
  Animal *dog = new Dog;
  Animal *cat = new Cat;
  dog->sound(); 
  cat->sound();
  delete dog;
  delete cat;
  return 0;
}