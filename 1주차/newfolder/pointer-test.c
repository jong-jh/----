#include <stdio.h>
int main(){
    int i;
    int *p;

    i=10;

    printf("value of i = %d\n",i); // ���� i�� �� ���
    printf("address of i = %p\n",&i);//���� i�� �ּҰ� ���
    printf("value of p %p\n",p);//���� p�� �� ���
    printf("address of p = %p\n",&p);//���� p�� �ּҰ� ���

    p=&i;//p�� i�� �ּҰ��� ����. p�� ���� i�� ����Ű�� ����
    printf("\n\n===after p=&i===\n\n");

    printf("value of p = %p\n",p);//p�� �� ���
    printf("address of p = %p\n",&p);//p�� �ּҰ� ���
    printf("dereferencing *p=%d\n",*p);//p�� ����Ű�� ������ �� ���

    return 0;
//p�� �ּҰ��� �״�������� p�� ���� �ǹ̾��� ������ i�� �ּ��� ������ �ٲ����.
//dereferencing �� ���� ������ ���� p�� ����Ű�� ������ ���� ��Ÿ������.
}