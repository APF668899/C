#include"stdio.h"
int print(int arr[], int arrayLength){
    for(int i = 0; i < arrayLength; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//去重函数：删除相同的数据，只保留一个
int deleteRepeatOne(int arr[], int arrayLength){
   for(int i=0; i<arrayLength; i++){
      for(int j=0; j<arrayLength; j++){
         if(arr[i]==arr[j] && i!=j){
            arr[j]=0;
            break;
         }
      }
   }
   print(arr,arrayLength);
}
//去重函数：删除相同的数据
int deleteRepeatDouble(int arr[], int arrayLength){
   for(int i=0; i<arrayLength; i++){
      for(int j=0; j<arrayLength; j++){
         if(arr[i]==arr[j] && i!=j){
            arr[i]=0;
            arr[j]=0;
            break;
         }
      }
   }
   print(arr,arrayLength);
}
int main(){
   int arr[]={11,22,33,11,44,11,55,33};
   //deleteRepeatOne(arr,7);
   deleteRepeatDouble(arr,7);
}