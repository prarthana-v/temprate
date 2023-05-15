#include<stdio.h>
#include<conio.h>
main()
{
 int i,n;
 clrscr();
  printf("enter any value:");
  scanf("%d",&n);
  i=0;
  while(n>0)
  {
    n=n/10;
    i++;
  }

  printf("Total number of digits:%d",i);
getch();
}
