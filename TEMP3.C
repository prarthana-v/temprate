#include<stdio.h>
#include<conio.h>
main()
{
 int n,fd,ld,sum;
 clrscr();
  printf("enter any value:");
  scanf("%d",&n);
 ld=n%10;

  while(n>=10)
  {
    n=n/10;
  }
  fd=n;
  sum=fd+ld;
  printf("Sum of first and last digit:%d",sum);
getch();
}
