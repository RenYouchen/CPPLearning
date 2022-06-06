#include <stdio.h>
int fun1(void){
    for (int i = 0; i < 35; i++){
        printf("=");
    }
    printf("\n");
}
int fun2(void){
    fun1();
    printf("\t今日食物單點價格\n");
    fun1(); 
    printf("\t(1)拉麵 100元\n");
    printf("\t(2)壽司 10元\n");
    printf("\t(3)豬排飯 75元\n");
    printf("\t(4)味增湯 30元\n");
    printf("\t(5)茶 15\n");
    fun1();
}

int main(){
    int n,sw,count,money;
    fun2();
    printf("請輸入餐點代碼：\n\n");
    scanf("%d",&sw);
    printf("您要幾份：\n\n");
    scanf("%d",&count);
    printf("請輸入您的費用：\n\n");
    scanf("%d",&money);
}
