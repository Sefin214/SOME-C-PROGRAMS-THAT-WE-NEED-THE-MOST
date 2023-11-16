#include<stdio.h>
int main()
{
  int n,i,j,a;
  printf("Enter the size of matrix \n ");
  scanf("%d",&n);
  int mat[n][n];
  int tran[n][n];
  printf("Enter the elements of matrix\n");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
     {
       scanf("%d",&a);
       mat[i][j]=a;
     }
     printf("The Matrix \n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
       {
         a=mat[i][j];
         printf("%d ",a);
       }
      printf("\n");
     } 
   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      tran[j][i]=mat[i][j];
  printf("The Transposed Matrix \n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
       {
         a=tran[i][j];
         printf("%d ",a);
       }
      printf("\n");
     } 
    
}
