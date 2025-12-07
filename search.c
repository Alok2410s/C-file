// WAP to search an element in an array.
#include<stdio.h>
void main(){
    int a[15],i,n,element,flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter the element to be searched: ");
    scanf("%d",&element);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1)
        printf("Element found at position %d\n",i+1);
    else
        printf("Element not found in the array\n");
}