#include<stdio.h>
float circumference(float);
float circumference(float a)
{
    float re;
    re = 2.0*(22.0/7)*a;
    return(re);
}
int main()
{
    float r,re;
    printf("\nenter redius of circle : ");
    scanf("%f",&r);
    re = circumference(r);
    printf("\ncircumference of circle is %f",re);
}