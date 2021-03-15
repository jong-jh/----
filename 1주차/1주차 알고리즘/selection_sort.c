#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100
void swap(int*,int*); 
void selection_sort(int *,int);

int main(){
srand(time(NULL)); 

int list[MAX];
int n=0;

scanf("%d",&n); 
for(int i=0;i<n;i++){
    list[i]=rand()%MAX;
    printf("%d ",list[i]);
}
printf("\n");
//선택정렬
selection_sort(list,n);

for(int i=0;i<n;i++){
    printf("%d ",list[i]);
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