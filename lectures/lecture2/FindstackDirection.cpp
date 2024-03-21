#include <iostream>


void testStackDirection(int param){

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


int main(){

    // stack이 어느 방향으로 메모리 주소를 할당 받는지 찾는 방식
    int a1;
    int a2;
    int a3;
    
    printf("a1 var address: %p\n", (void*)&a1);
    printf("a2 var address: %p\n", (void*)&a2);
    printf("a3 var address: %p\n", (void*)&a3);

    testStackDirection(1);
    return 0;
}