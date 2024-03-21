#include <iostream>
#include <string>

using namespace std;
int main(){

  //string 헤더의 getline함수는 개행문자를 제외하고 입력을 읽어들인다. getline은 cin과 string을 넣어줄 변수를 파라미터로 넣어주어야 한다.
  string input;
  getline(cin,input); 
  cout << input <<endl;
  cin >> input; // cin은 버퍼에 개행문자를 남긴다. 따라서 그 다음에 input을 받으려고 하면 앞의 개행문자도 함께 받는다.
  cout<<input<<endl;

  return 0;
}