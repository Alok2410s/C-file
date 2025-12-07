//WAP to find multiplication of two matrices
#include<stdio.h>
void main(){
    int a[100][100],b[100][100],mul[100][100],i,j,k,r1,c1,r2,c2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of first matrix: ");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2){
        printf("Matrix multiplication not possible");
        return;
    }
    printf("Enter the elements of second matrix: ");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    
    
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
            mul[i][j]=0;
    
    
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
            for(k=0;k<c1;k++)
                mul[i][j]+=a[i][k]*b[k][j];
    
    printf("The resultant matrix after multiplication is: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
            printf("%d ",mul[i][j]);
        printf("\n");
    }
}