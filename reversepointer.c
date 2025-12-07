// WAP to reverse an array using pointers
#include<stdio.h>
void main(){
    int a[15],i,n,temp;
    int *ptr1,*ptr2;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    ptr1=a; 
    ptr2=a+n-1; 
    
    for(i=0;i<n/2;i++)
    {
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2--;
    }
    
    printf("The reversed array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}