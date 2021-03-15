#include <stdio.h>

int main(){
    printf("--------[정종현] [2018038051]---------\n\n");
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("Size of char : %ld byte\n",sizeof(charType));//char형 타입의 변수의 크기 : 1byte
    printf("Size of int : %ld byte\n",sizeof(integerType));//int형 타입의 변수의 크기 : 4byte
    printf("Size of float : %ld byte\n",sizeof(floatType));//float형 타입의 변수의 크기 : 4byte
    printf("Size of double : %ld byte\n",sizeof(doubleType));//double형 타입의 변수의 크기 : 8byte
    printf("==============================================\n");

    printf("Size of char: %ld byte\n",sizeof(char));//char형 타입의 크기 : 1byte
    printf("Size of int: %ld byte\n",sizeof(int));//int형 타입의 크기 : 4byte
    printf("Size of float: %ld byte\n",sizeof(float));//float형 타입의 크기 : 4byte
    printf("Size of double: %ld byte\n",sizeof(double));//double형 타입의 크기 : 8byte
    printf("==============================================\n");

    printf("Size of char* : %ld byte\n",sizeof(char*));//포인터변수 크기는 운용체제에 따라 정해진 크기를 갖는다.
    printf("Size of int* : %ld byte\n",sizeof(int*));//64bit 운영체제의 pc를 사용중이라 8byte가 나올 줄 알았다.
    printf("Size of float* : %ld byte\n",sizeof(float*));//예상과는 다르게 4byte가 나와 알아본 결과 32bit로 컴파일을 하면 4byte가 나온다고 하였다.
    printf("Size of double* : %ld byte\n",sizeof(double*));
    printf("==============================================\n");

    return 0;
}