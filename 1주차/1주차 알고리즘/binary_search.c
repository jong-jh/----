/*작성자 : 정종현
내용 : 선택정렬과 이진탐색 함수
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int*,int*);//swap 함수
void selection_sort(int *,int);//선택정렬함수, 배열과 배열의 크기를 받는다
int binary_search(int,int*);//찾으려는 값과 배열을 받는 이진탐색 함수

int main(){
int num;//찾으려는 값
int result;//결과 반영 변수

printf("press the search_num: ");
scanf("%d",&num);

srand(time(NULL)); //크기가 100인 배열에 100미만의 무작위 수 입력
int list[100];
for(int i=0;i<100;i++){
    list[i]=rand()%100;
}
selection_sort(list,100); //선택정렬로 배열을 오름차순으로 정렬
result=binary_search(num,list);//이진탐색 시작

if(result){ //결과값이 있으면 이진탐색 결과 출력
    printf("\n%d번째에 있습니다.",result);
}
else{//결과값이 없으면 나오는 출력문.
    printf("\n찾으려는 값이 없습니다.");
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