 #include<stdio.h>
int main(){
    int i=0;
    int sum=0;
    scanf("%d",&i);   
    do{
       sum=sum+i;
       i++;
    }while(i<=100);
 printf("%d",sum);
}