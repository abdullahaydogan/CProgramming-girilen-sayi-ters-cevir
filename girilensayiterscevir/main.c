#include <stdio.h>
#include <stdlib.h>
void swp(int *pnt);
int main()
{
int arr[5]={};
    for(int i=0;i<5;i++){
        printf("Enter the %d. element of the array=",i+1);
        scanf("%d",&arr[i]);
    }
    swp(arr);

    return 0;
}
void swp(int *pnt){
int temp[5]={};
int i=0;
   for(i=0;i<5;i++){
    temp[i]= *(pnt +5-i-1);
   }
   printf("Reverse of the array=   ");
   for(i=0;i<5;i++){
    printf("%-5d",temp[i]);
   }
}
