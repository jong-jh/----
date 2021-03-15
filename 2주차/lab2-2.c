#include<stdio.h>

int main(){
    int i;
    int *ptr;
    int **dptr;

    i=1234;
    printf("--------[정종현] [2018038051]---------\n\n");
    printf("[checking values before ptr = &i]\n");//포인터 변수에 i의 주소값을 넣기 전 체크
    printf("value of i == %d\n",i); //i의 값 출력
    printf("address of i == %p\n",&i); //i의 주소값 출력
    printf("value of ptr == %p\n",ptr); //ptr의 값 출력 의미없는 값이 있다.
    printf("address of ptr == %p\n",&ptr);//ptr의 주소값 출력

    ptr=&i; /*ptr is now holding the address of i // ptr에 i의 주소값을 대입*/

    printf("\n[checking values after ptr=&i]\n");
    printf("value of i == %d\n",i); 
    printf("address of i == %p\n",&i);
    printf("value of ptr == %p\n",ptr); //ptr이 i의 주소값을 가지게 됨. 
    printf("address of ptr == %p\n",&ptr);
    printf("value of *ptr == %d\n",*ptr); //ptr의 역참조 값은 i의 값

    dptr=&ptr; /*dptr is now holding the address of ptr*/ //dptr 에 ptr의 주소값을 대입

    printf("\n[checking values after dptr=&ptr]\n");
    printf("value of i == %d\n",i);
    printf("address of i == %p\n",&i);
    printf("value of ptr == %p\n",ptr);
    printf("address of ptr == %p\n",&ptr);
    printf("value of *ptr == %d\n",*ptr);
    printf("value of dprt == %p\n",dptr); //dptr의 값은 ptr을 가르키므로 ptr의 주소값을 가짐
    printf("address of dptr == %p\n",&dptr);
    printf("value of *dptr == %p\n",*dptr);//dptr의 역참조값은 ptr이 가르키는 i의 주소값임.
    printf("value of **dptr == %d\n",**dptr);//**dptr은 i의 값

    *ptr=7777; /*changing the value of *ptr */

    printf("\n[after *ptr = 7777]\n");//*ptr은 i의 값을 의미하므로 i의 값이 바뀜.
    printf("value of i == %d\n",i);
    printf("value of *ptr == %d\n",*ptr);
    printf("value of **dptr == %d\n",**dptr);

    **dptr = 8888; /*changing the value of **dptr*/

    printf("\n[after **dptr = 8888]\n"); //**dptr은 i의 값을 의미하므로 i의 값이 8888이 된다.
    printf("value of i == %d\n",i);
    printf("value of *ptr == %d\n",*ptr);
    printf("value of **dptr == %d\n",**dptr);

    return 0;
}