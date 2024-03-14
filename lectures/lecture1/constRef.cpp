#include <iostream>
using namespace std;


int main(){
  int val1  = 1 ;
  int val2 = 2;
  int& refVal1 = val1;
  // int &const refVal1 = val1;
  // refVal1, refVal2은 같은 선언에 해당된다. 한 번 initialize 된 참조자는 다른 대상을 가리킬 수 없다. 단 const를 직접 적어주지 않는다.
  refVal1  = val2; // refVal1은 2가 된다. 단순히 별칭이므로, 참조자가 가리키는 대상의 값이 변경된다.

  const int& constRef1 = val1;
  // constRef1  = 4; error -> 참조자를 통해 값을 변경할 수 없다. 
  val1 = 2; // ok. -> 원래 변수를 통해서는 변경 가능하다.
  cout<< val1<<endl;

  const int& constRef2 = 4; // 참조자를 const 선언하면, 임시변수를 받을 수 있다.(리터럴을 넘겨줄 수 있음)
  
  return 0;
} 