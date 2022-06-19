#include<stdio.h>
int main(){
    int i,a,b;
    for ( i = 0; i <= 101; i++)
    {
        a=i*i;
        b=(i+1)*(i+1);
        printf("%d * %d = %d\n",i,i,a);
        printf("                -  =  %d\n",b-a);
    }
    
}