#include <iostream>
using namespace std;
int main(){

  int arr[] = {1,2,3,4,5,6};
  int *ptr = arr;
  cout << *(ptr+1) <<endl;
  cout << *(arr+1) <<endl;
  return 0;
}