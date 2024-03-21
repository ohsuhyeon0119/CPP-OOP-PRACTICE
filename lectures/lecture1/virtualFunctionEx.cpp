#include <iostream>
using namespace std;



class A {
public:
virtual void pr() {
cout << "base" << endl;
}
};


class B : public A {

public:
void pr() {
cout << "derived" << endl;
}

};


int main () {
B b;
A a = b; 
// 복사 생성자가 호출된다. 복사 생성자에서는 b의 필드를 a로 복사하는데, b는 A의 유도 클래스인 B의 객체이므로 결국 스택 영역에 
// 생성되는 것은 A타입의 객체이다.
// what if A &a = b;  -> callByRef 이므로, A 타입의 a 객체가 가리키는 것은 B타입의 객체 b이다. 복사 하지 않는다.

A *pA = &b;
// A Class의 포인터가 derived class B의 Object를 가리키고 있는 경우

a.pr();
pA->pr();

return 0;
}
