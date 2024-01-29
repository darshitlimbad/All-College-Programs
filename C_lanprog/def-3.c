#include <stdio.h>
#include <conio.h>


void main()
{
  
  int i,j,k,n=1,val;
  
  printf("enter any number");
  scanf("%d",&val);
  
  clrscr();
  
  for(i=1 ; i<=val; i++)
  {
      for(k=val ; k>=i ; k--)
      {
        printf("\t");
      }
      for(j=1 ; j<=i; j++)
      {
        printf(" %d ",n);
        n+=2;
      }
      
   printf("\n");
  }
 getch();
}