#include"stdio.h"
int date(int year, int month, int day){
   if(month<1 || month>12 || day<1 || day>31) return -1;
   int arrDate[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
   int sum=arrDate[month-1]+day;
   if(month>=3 && year%4==0 && year%100!=0 || year%400==0){
      return sum+1;
   }else{
      return sum;
   }
}
int main(){
   int year, month, day;
   scanf("%d %d %d",&year, &month, &day);
   printf("一年已经过去%d天",date(year, month, day));
}