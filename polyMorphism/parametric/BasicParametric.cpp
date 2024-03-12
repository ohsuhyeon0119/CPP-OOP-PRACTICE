#include <iostream>
using namespace std;

// 매개 변수 다형성 (컴파일 다형성)
// 컴파일 시에 타입 인자에 따라 다른 함수를 생성하기 때문에 컴파일 다형적이다.
// generic으로도 불린다.


template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
// 컴파일러가 maximum이라는 함수 template을 이용하여 각 타입 인자에 맞게 적절한 함수를 generate 한다.


// 임시 다형성 구현
template <> // 아래 구현은 템플릿 과 관련있음
const char* maximum(const char * a, const char* b){
  string temp1(a);
  string temp2(b);
  return temp1.length() > temp2.length() ? a : b;
}




int main() {
    int maxInt = maximum(3, 7);
    cout << "maxInt: " << maxInt << endl;
    const char * maxChar = maximum("apple", "peaches");  
    cout << "maxChar: " << maxChar << endl;
    // char* type은 const char*을 받을 수 없다.

    return 0;
    }

