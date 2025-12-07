// WAP to sort an array in ascending order.
#include<stdio.h>
void main(){
    int a[15],i,j,n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    printf("The sorted array in ascending order is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}