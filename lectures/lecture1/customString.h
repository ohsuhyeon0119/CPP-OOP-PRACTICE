#pragma once
#include <iostream>
#include <cassert>
#include <cstring> // strlen, strcpy 등은 cstring에 정의되어 있다.
using namespace std;


namespace CustomString{
class String{
  private:
  int len;
  char *str;

  public:
    String(const char *s){ // s에는 문자열 리터럴이 와야 한다.
    
    
    len = strlen(s);

    str = new char[len+1];
    assert(str !=0); // 힙 동적할당이 성공해야 한다.
    strcpy(str,s);
    }
    String(int length){
      len = length;
      str = new char[len+1];
      assert(str!=0);
      str[0] = '\0'; // null문자가 있어야 빈문자열이라고 할 수 있다.
    }
    ~String(){
      delete [] str; // 포인터가 가리키는 대상이 배열이면 [] 빼놓지 말아야 한다.
    }
    char* getStringPointer(){
      return str;
    }
    String& operator+=(String & s){ // String&으로 반환타입을 적어주어야 참조값을 넘겨줄 수 있다.
      len += s.len;
      char * p = new char[len+1];
      assert(p !=nullptr);
      strcpy(p,str);
      strcat(p, s.str);
      delete str;
      str = p; // 포인터가 새로운 메모리 공간을 가리킨다.
      return *this; // this는 생성된 객체를 가리키는 포인터. *this는 객체 자신
    }
    String& operator+=(const char* s){
      len += strlen(s);
      char * p = new char[len +1];
      strcpy(p,str);
      strcat(p, s);
      delete str;
      str = p;
      return *this;

    }
    


};


}

ostream& operator<<(ostream& cout , CustomString::String& s){ //&을 사용하여 손쉽게 callByRef. overhead를 줄인다.
  cout << s.getStringPointer();
  return cout;
}