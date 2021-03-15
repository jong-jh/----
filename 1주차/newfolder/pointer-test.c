#include <stdio.h>
int main(){
    int i;
    int *p;

    i=10;

    printf("value of i = %d\n",i); // 변수 i의 값 출력
    printf("address of i = %p\n",&i);//변수 i의 주소값 출력
    printf("value of p %p\n",p);//변수 p의 값 출력
    printf("address of p = %p\n",&p);//변수 p의 주소값 출력

    p=&i;//p에 i의 주소값을 대입. p가 변수 i를 가르키는 상태
    printf("\n\n===after p=&i===\n\n");

    printf("value of p = %p\n",p);//p의 값 출력
    printf("address of p = %p\n",&p);//p의 주소값 출력
    printf("dereferencing *p=%d\n",*p);//p가 가르키는 변수의 값 출력

    return 0;
//p의 주소값은 그대로이지만 p의 값은 의미없는 값에서 i의 주소의 값으로 바뀌었다.
//dereferencing 의 값은 포인터 변수 p가 가르키는 변수의 값을 나타내었다.
}