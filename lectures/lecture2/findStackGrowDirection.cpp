#include <iostream>



// stack segment activation record 내의 데이터가 쌓이는 방향을 찾는다.
void findVarGrowDirection(int param){

    printf("function start\n");
    printf("param var address: %p\n", (void*)&param);
    int num1;
    int num2;
    int num3;
    printf("a1 var address: %p\n", (void*)&num1);
    printf("a2 var address: %p\n", (void*)num2);
    printf("a3 var address: %p\n", (void*)&num3);
    printf("function end\n");
}



void funcC(){
    int numC;
     printf("numC var address: %p\n", (void*)&numC);
}

void funcB(){
    int numB;
     printf("numB var address: %p\n", (void*)&numB);
     funcC();

}

void funcA(){
     int numA;
     printf("numA var address: %p\n", (void*)&numA);
     funcB();

}


int main(){

    funcA();
    return 0;
}