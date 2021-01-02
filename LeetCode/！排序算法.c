#include <stdio.h>
//数据交换
int swap(int* x,int* y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
//输出
int print(int arr[], int arrayLength){
    for(int i = 0; i < arrayLength; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//冒泡排序
int bubbleSort(int arr[], int arrayLength){  
    for(int i = arrayLength-1; i > 0; i--){
        for(int j = 0; j < i; j++){ 
            if(arr[i] < arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }
    printf("冒泡排序:");
    print(arr, arrayLength);
}
//选择排序
int selectionSort(int arr[],int arrayLength){
    for(int i = arrayLength;i > 0; i--){
        int max = i;
        for(int j = 0; j < i; j++){
            if(arr[max] > arr[j]){
                max = j;
            }
        }
        swap(&arr[i], &arr[max]);
    }
    printf("选择排序:");
    print(arr, arrayLength);
}
//插入排序
int insertionSort(int arr[],int arrayLength){
    for(int i=0;i < arrayLength-1; i++){
       for(int j=0;j < arrayLength-1;j++){
          if(arr[j]>arr[j+1]){
             swap(&arr[j],&arr[j+1]);
          }
       }
    }
    printf("插入排序:");
    print(arr, arrayLength);
}
//快速排序
int quickSort(int arr[],int arrayLength){
    //选择枢纽
    int median(int left,int right){
        int center=(left+right)/2;
        
        
    }
}
int main()
{
   int arr[] = {10, 35, 68, 59, 28, 39, 52, 96, 31, 18};
   int arrayLength = sizeof(arr)/ 4;
   printf("原数据:");
   print(arr, arrayLength);
   bubbleSort(arr,arrayLength);
   selectionSort(arr, arrayLength);
   insertionSort(arr, arrayLength);
}
