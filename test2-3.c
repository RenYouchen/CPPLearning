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
    printf("請輸入餐點代碼：");
    scanf("%d",&sw);
    printf("\n\n您要幾份：");
    scanf("%d",&count);
    printf("\n\n請輸入您的費用：");
    scanf("%d",&money);
    
    switch (sw){
    case 1:
        fun1();
        n = 100 * count;
        printf("拉麵每份100元，總共買了 %d 份，需付 %d 元\n",count,n);
        fun1();
        break;
    case 2:
        fun1();
        n = 10 * count;
        printf("壽司每份10元，總共買了 %d 份，需付 %d 元\n",count,n);
        fun1();
        break;
    case 3:
        fun1();
        n = 75 * count;
        printf("豬排飯每份75元，總共買了 %d 份，需付 %d 元\n",count,n);
        fun1();
        break;
    case 4:
        fun1();
        n = 30 * count;
        printf("味增湯每份30元，總共買了 %d 份，需付 %d 元\n",count,n);
        fun1();
        break;
    case 5:
        fun1();
        n = 15 * count;
        printf("茶每份15元，總共買了 %d 份，需付 %d 元\n",count,n);
        fun1();
        break;
    
    default:
        fun1();
        printf("請你用用你的腦子    沒有這個選項就代表沒有賣 好嗎 這只是一個搞笑程式而已\n");
        printf("找零： %d\n", money);
        fun1();
        break;
    }
    if (n<=money){
        printf("找零： %d\n", money - n);
    }else if (n>money){
        printf("錢不夠 去拿你的神奇小卡\n");
    }
}
