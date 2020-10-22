#include"stdio.h"
//数组,数组长度,第row个换行
int output(int arr[], int arrayLength,int row){
    for(int i = 0; i < arrayLength; i++){
        printf("%d ", arr[i]);
        if(i%row==row-1) printf("\n");
    }
}
//数据交换
int swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
//选择排序,装数组从小到大排序
int selectionSort(int arr[],int arrayLength){
    for(int i = 0;i < arrayLength; i++){
        int min=arr[i], a=i;
        for(int j = i; j < arrayLength; j++){
            if(min > arr[j]){
                min = arr[j];
                a=j;
            }
        }
        swap(&arr[i], &arr[a]);
    }
    printf("选择排序:\n");
    output(arr, arrayLength,10);
}
int methodOne(int arr[]){
   int i,m=0,s=0;
   int range=5000;//范围为5000以内
   for(i=1;i<=range;i++){
     if(i%2==0&&(i%7==0||i%17==0)){
         printf("%d ",i);
         s=s+i;
         ++m;
         if(m%10==0) printf("\n");
     }
   }
   printf("\nsum1=%d\n\n",s);
}
int methodTwo(int arr[],int arrLength){
  int sum=0;
  int range=5000;//范围为5000以内
  for(int i=0,j=14,m=1;j<=range;j+=14,m++){
      arr[i]=j;
      sum=sum+arr[i];
      ++i;
      if(j+20*m<range && (j+20*m)%7!=0){
         arr[i]=j+20*m;
         sum=sum+arr[i];
         ++i;
      }
   }
   selectionSort(arr,arrLength);
   printf("\nsum2=%d\n",sum);
}
main(){
  int arr[483]={0};
  methodOne(arr);
  methodTwo(arr,sizeof(arr)/4);
}
 