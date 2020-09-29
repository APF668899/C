#include"stdio.h"
int main(){
    int amount;
    int price;
    printf("请输入物品金额(元):");
    scanf("%d",&price);
    printf("请输入客户给的票面:");
    scanf("%d",&amount);
    int change=amount-price;
    printf("找您%d元。\n",change);
}