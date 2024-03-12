#include <iostream>
#include <cstring>
#include <cassert>
#include "customString.h"
using namespace std;





// 클래스 내부 변수는 초기화를 안해주면 디폴트 값으로 초기화된다.(기본 생성자 호출)

class Item { // Class definition
private :
  int inStockQuantity;
  int protectedTempValue;
public:
  CustomString::String title; // String is a class defined earlier
  double price; // double is a predefined data type
  Item(const char* t, int p , int inStockQ ) :title(t) , price(p) , inStockQuantity(inStockQ) {
  }
  double SalePrice() { return (price*0.9);}
  bool isAvailable(){
    return inStockQuantity > 0 ;
  }
  virtual void specificInfo(){
    cout << "no Info: a base-class object" << endl; 
  }; // virtual을 뺀다면? Item 타입이 MusicCdItem을 가리키고 있을 때 specificInfo 메서드를 호출하면 부모의 것이 호출된다.
  // java의 경우 virtual 과 같은 키워드 없이도 위와 같은 상황에서 실제 객체의 메서드가 호출되는데, 이는 다형성의 특징을 어길 필요가 없기 때문이다.
};



class MusicCDItem : public Item {
public:
  CustomString::String singer_name;
  MusicCDItem(const char *singerName ,const char* title, double price, int inStockQuantity) : Item(title, price,inStockQuantity) ,singer_name(CustomString::String(singerName)) {
     // singer_name = CustomString::string(singerName); -> error : String은 기본 생성자를 호출할 수 없는 상황이므로
     // inStockQuantity 에 접근 시도시 오류
    // protectedTempValue 에는 접근 가능
  }
  void specificInfo() { cout << "singername :" << singer_name << endl; }

  
};



void printSpecificInfo(Item *P) { P-> specificInfo(); }


int main(){

    Item itemA("itemA",1000,3);
    itemA.specificInfo(); //실제 객체가 Item이므로 Item의 메소드 콜
    MusicCDItem itemB("suhyeon","nolonger",10000,100);
    itemB.specificInfo(); // 실제 객체가 MusicCDItem이므로 자식 메소드 콜
    Item *itemC = new MusicCDItem("jihun","bigLove",3000,14);
    itemC->specificInfo(); // 부모 타입이지만 실제 객체는 자식이므로 자식메소드 콜!
    // virtual 키워드를 쓰지 않으면, 부모의 메소드가 콜된다.
    // java는 오버로딩만 되면 다형성이 보장된다.
  




}