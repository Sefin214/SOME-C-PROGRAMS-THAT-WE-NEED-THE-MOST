#include<stdio.h>
int main()
{
int n,i,h,r;
int sal;
char s[10];
  printf("Enter the number of employees \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("\n-----------------------------------\n");
     printf("Enter the name of employee %d",i);
     printf(" :");
     scanf("%s",&s);
     printf("Enter the working hours of employee %d",i);
     printf(" :");
     scanf("%d",&h);
     printf("Enter the hourly rate of employee %d",i);
     printf(" :");
     scanf("%d",&r);
     sal=calculateSalary(h,r);
     if(sal == 0)
     printf("INVALID INPUT\n");
     else
     {
     printf("Salary of Employee%d",i);
     printf(" :");
     printf("%d",sal);
     }
  }
  
}
int calculateSalary(int x,int y)
{
   if(x<=0 || y<=0)
    return 0;
   else if(x<=40 && x>=1)
    return (x*y);
   else 
   {
     int t=x-40;
     int ot=t*1.5*y;
     return (ot+(40*y));
   }
}
