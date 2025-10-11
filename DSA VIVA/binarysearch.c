#include<stdio.h>
int main()
{
int arr[20],size,data;
int l,r,mid,position=-1;
printf("enter the array size :");
scanf("%d",&size);
printf("enter the array elements :");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("enter the search number :");
scanf("%d",&data);
l=0;
r=size-1;
while(l<=r){
    mid=(l+r)/2;
    if(arr[mid]==data){
        position=data;
        break;
    }
    else if(arr[mid]>data){
        r=mid-1;
    }
    else{
        l=mid+1;
    }
}
if(position!=-1){
    printf("num is search in a array : %d",data);
}
else{
    printf("num not search in array :%d",data);
}
return 0;
}