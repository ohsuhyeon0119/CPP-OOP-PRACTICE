#include <iostream>

void swapCallByValue(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
} 

void swapCallByReference(int* ptr1, int* ptr2){
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;

}

int main() {
  int i1 = 1;
  int i2 = 2;

  swapCallByValue(i1, i2);

  std::cout << "i1 = " << i1 << std::endl;
  std::cout << "i2 = " << i2 << std::endl;

  swapCallByReference(&i1, &i2);

  std::cout << "i1 = " << i1 << std::endl;
  std::cout << "i2 = " << i2 << std::endl;
}