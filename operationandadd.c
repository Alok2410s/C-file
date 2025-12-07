//pointers operation
#include<stdio.h>
void main (){
    int a,b,*p,*q;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    p =&a;
    q =&b;

    int c= *p + *q;
    printf("result=%d",c);

}