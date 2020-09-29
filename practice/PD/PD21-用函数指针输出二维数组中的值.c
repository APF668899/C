#include"stdio.h"
void fun(int (*p)[3]){
    for(int i=0;i<3;i++){
       for(int j=0;j<4;j++){
          printf("%-5d",*(*(p+i)+j));
       }
       printf("\n");
    }
}
int main(){
     int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
     fun(arr);
}