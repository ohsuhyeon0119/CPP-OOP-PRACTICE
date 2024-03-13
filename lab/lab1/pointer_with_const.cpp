

int main(){

  int val;
  val = 10;
  // 선언과 초기화 분리 가능

  // const int val2; errpr
  const int const_val = 2;

  const int* const_ptr; // 내가 가리키는 대상이 상수라는 뜻이므로, 선언과 초기화 분리 가능
  int * const ptr_const  = &val; // 포인터 자체가 상수이므로, 동시에 해주어야 한다.

  const_ptr = &const_val;
  const_ptr =&val;
  // 가리키는 대상만 const 이면 된다. 포인터가 담는 주소는 변해도 된다.

}