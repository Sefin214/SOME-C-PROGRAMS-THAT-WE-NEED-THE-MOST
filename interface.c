#include<stdio.h>
int main()
{
  int n,f=0;
  float perc,s,s1,s2,s3;
  printf("Enter your marks \n");
  printf("=================\n");
  scanf("%f",&s1);
  scanf("%f",&s2);
  scanf("%f",&s3);
  s=s1+s2+s3;
  printf("Subject 1 :%f \n",s1);
  printf("Subject 2 :%f \n",s2);
  printf("Subject 3 :%f \n",s3);
  printf("=================\n");
  printf("Total marks : %f \n",s);
  perc=(s*100)/150;
  printf("Percentage %f \n",perc);
  if (perc>=0 && perc<=40)
  printf("Try again,Fail again");
  else if(perc>40 && perc<50)
  printf("Keep going");
  else
  printf("Stay out of world");
}
int validateMarks(int a)
{
   if(a<=50)
   return 1;
   else
   return 0;
}






