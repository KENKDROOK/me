#include<stdio.h>
#include<conio.h>
void main()
{
  int n,fact=1,i;
  printf("Enter two numbers");
  scanf("%d", &n);
  i=1;
  while(i<=n)
  {
    fact=fact*i;
    i++;
  }
  printf("%d",fact);
  getch();
}
