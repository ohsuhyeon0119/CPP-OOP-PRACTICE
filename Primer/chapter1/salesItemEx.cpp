#include <iostream>
#include "Sales_item.h"
using namespace std;


int main(){

  Sales_item total;

  if(std::cin>>total){
    Sales_item trans;
    while(cin>>trans){
      if(total.isbn() == trans.isbn()){
        total +=trans;

    }else{
      cout << total<<endl;
      total  =trans;
    }
    cout <<total << std::endl;
  }
  return 0;

  }else{
    cerr<<"No data"<<endl;
    return -1;
  }

  
}