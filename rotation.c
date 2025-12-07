//WAP to rotate an array using pointers
#include<stdio.h>
void main(){
    int a[15],i,n,d,temp;
    int *ptr;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d",&d);
    
    ptr=a; 
    for(i=0;i<d;i++)
    {
        temp=*ptr; 
        for(int j=0;j<n-1;j++)
        {
            *(ptr+j)=*(ptr+j+1); 
        }
        *(ptr+n-1)=temp; 
    }
    
    printf("The rotated array is: ");
    for(i=0;i<n;i++)
        printf("%d ",*(ptr+i));
}