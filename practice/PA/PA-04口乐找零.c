#include"stdio.h"
int main(){
    int amount;
    printf("口乐的价格是3元，请客户投币:"); 
    scanf("%d",&amount);
    int change=amount-3;
    printf("找您%d元。\n",change);
}