#include<stdio.h>
int main(){
    int arr[10],size;
    printf("enter the size of array :");
    scanf("%d",&size);
    printf("enter the elements of an array :");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("elements in array are :");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}