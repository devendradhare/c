float area_of_circle(float);
int main()
{
    float a, re;
    printf("\nenter redius of circle : ");
    scanf("%f", &a);
    re = area_of_circle(a);
    printf("area of circle is %f", re);
}
float area_of_circle(float x)
{
    float c;
    c = (22.0/7.0) * x * x;
    return (c);
}