#include<stdio.h>
int main (){
    int n;
    printf("enetr a number");
    scanf("%d",&n);
    int c_arr[n];
    for(int i=0;i<n;i++){
        c_arr[i]=0;
        printf("c_arr[%d]=%d\n",i,c_arr[i]);
    }
    return 0;
}