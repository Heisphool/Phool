#include<stdio.h>
int main (){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int arr[10];
    for(int i=0;i<10;i++){
      arr[i]=n+n*i;
        printf("%d ",arr[i]);
    }
    return 0;
}   