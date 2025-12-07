#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*ptr,n1;
    printf("Enter the number of elements");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));

    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Enter the new no of elements");
    scanf("%d",&n);

     ptr=(int*) realloc(ptr,n*sizeof(int));
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
        printf("print the elements of array \n");
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }

}