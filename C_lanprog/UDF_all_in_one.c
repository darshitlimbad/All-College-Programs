#include <stdio.h>
#include <conio.h>

void sum();
void sub(int x,int y);
int mul();
int div(int i,int j);
void main()
{
  int x,y,i,j,ans;
  clrscr();
  sum();
  
  printf("\nenter value of x:");
  scanf("%d",&x);
   
  printf("enter value of y:");
  scanf("%d",&y); 
  
  sub(x,y);
  
  ans=mul();
  printf("mul of p and q is:%d\n",(ans));
  
  printf("\nenter value of i:");
  scanf("%d",&i);
   
  printf("enter value of j:");
  scanf("%d",&j); 
  
  ans=div(i,j);
  printf("div of i & j is:%d",(ans));
  
  getch();
}

//udf-1 : NO RETURN NO ARGU
void sum()
{
  int a,b;
  
  printf("\nenter value of a:");
  scanf("%d",&a);
   
  printf("enter value of b:");
  scanf("%d",&b); 
  
  printf("your sum of a and b is:%d\n",(a+b));
}


//udf-2 : NO RETURN with ARGU
void sub(int x , int y)
{
  printf("sub of x and y is:%d\n",(x-y));
}

//udf-3 : WITH RETURN NO ARGU
int mul()
{
  int p,q;
  
  printf("\nenter value of p:");
  scanf("%d",&p);
   
  printf("enter value of q:");
  scanf("%d",&q); 
  
  return p*q;
}

//udf-4 : WITH RETURN WITH ARGU
int div(int i,int j)
{
  return i/j;
}
