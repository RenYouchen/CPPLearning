#include <stdio.h>

int main(){
    int sw;
    float n,C,F;
    printf("您要轉換 1>攝氏溫度轉華氏溫度 2>華氏溫度轉攝氏溫度 ：");
    scanf("%d",&sw);
    printf("輸入欲轉換的溫度數值：");
    scanf("%f",&n);
    if(sw==1){
        printf("攝氏 %f 度 = 華氏 %f 度\n",n,n*(9/5)+32);
    }else{
        printf("華氏 %f 度 = 攝氏 %f 度\n",n,(n-32)*5/9);
    }
}