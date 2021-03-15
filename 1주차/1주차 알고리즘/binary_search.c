/*�ۼ��� : ������
���� : �������İ� ����Ž�� �Լ�
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int*,int*);//swap �Լ�
void selection_sort(int *,int);//���������Լ�, �迭�� �迭�� ũ�⸦ �޴´�
int binary_search(int,int*);//ã������ ���� �迭�� �޴� ����Ž�� �Լ�

int main(){
int num;//ã������ ��
int result;//��� �ݿ� ����

printf("press the search_num: ");
scanf("%d",&num);

srand(time(NULL)); //ũ�Ⱑ 100�� �迭�� 100�̸��� ������ �� �Է�
int list[100];
for(int i=0;i<100;i++){
    list[i]=rand()%100;
}
selection_sort(list,100); //�������ķ� �迭�� ������������ ����
result=binary_search(num,list);//����Ž�� ����

if(result){ //������� ������ ����Ž�� ��� ���
    printf("\n%d��°�� �ֽ��ϴ�.",result);
}
else{//������� ������ ������ ��¹�.
    printf("\nã������ ���� �����ϴ�.");
}
return 0;
}

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void selection_sort(int list[],int n){
    for(int i=0;i<n-1;i++){ 
    for(int j=i+1;j<n;j++){
        if(list[i]>list[j]){
        swap(&list[i],&list[j]);    
        }
    }
}
}

int binary_search(int search_num,int list[]){
int left=0;
int right=99;
int middle;
while(left<=right){
    middle=(left+right)/2;
    if(search_num==list[middle]){
        return middle+1;
        }
    else if(search_num>list[middle]){
        left=middle+1;
        }
    else{
        right=middle-1;
        }
    }
    return 0;
}