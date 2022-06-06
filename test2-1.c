#include <stdio.h>

int main(){
    int n1,n2,a1,a2;
    printf("請輸入兩個數字:");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        printf("%d > %d\n",n1,n2);
    }else{
        printf("%d < %d\n",n1,n2);
    }
}