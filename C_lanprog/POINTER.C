#include <stdio.h>
#include<conio.h>

int main()
{
  int a=10 , *p=a;
  clrscr();

  printf("value of a : %d\n",a);
  printf("value of a by pointer : %d\n",p);
  printf("addres of a by pointer : %d\n",*p);
  printf("addres of a by & : %d\n",&a);
  
  return 0;
}