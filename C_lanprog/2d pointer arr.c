#include<stdio.h>
#include<conio.h>

void main(){
    int **m;

    m = (int *) malloc (10 * sizeof(int));

    int i=0;
    while(i<=3)
        m[i++] = (int *) malloc (10 * sizeof(int));

    for(int i=0 ; i<=3 ; i++)
    {
        for(int j=0; j<=3 ; j++){
            m[i][j] = i + j;
        }
    }    
    for(int i=0 ; i<=3 ; i++)
    {
        for(int j=0; j<=3 ; j++){
            printf("[%d]\n" , &m[i][j]);
            printf("%d\n" , m[i][j]);
        }
    }   
}