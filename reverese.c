// WAP to reverse an array.
#include<stdio.h>
void main(){
    int a[15],i,n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    
    printf("The reversed array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}