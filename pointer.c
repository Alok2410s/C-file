#include<stdio.h>
void main(){
    int a[5]={10,20,30,40,50}, sum=0;
    int *p=a;
    for(int i=0;i<5;i++){
        //printf("%d\t",*p++);
        //printf("%d\t",*(p+i));
       if(i%2==0)
       {
        sum=sum+*(p+i);
       }
       else{
        sum=sum-*(p+i);
       }
       printf("sum=%d\n",sum);
    }
}