// marksheet
#include<stdio.h>
#include<conio.h>
int main()
{
    float s1,s2,s3,s4,s5,total;
    printf("\nmarksheet\nenter marks of subject 1 : ");
    scanf("%f",&s1);
    printf("\nenter marks of subject 2 : ");
    scanf("%f",&s2);
    printf("\nenter marks of subject 3 : ");
    scanf("%f",&s3);
    printf("\nenter marks of subject 4 : ");
    scanf("%f",&s4);
    printf("\nenter marks of subject 5 : ");
    scanf("%f",&s5);

    total = (s1+s2+s3+s4+s5)/5.0;
    printf("\npercenetage = %f%%",total);

    if(total>90)
    {
        printf("\n\n    PASS  A+ gread");
    }
    else if (total>75)
    {
        printf("\n\n    PASS  A gread");
    }
    else if (total>60)
    {
        printf("\n\n    PASS  B gread");
    }
    else if (total>50)
    {
        printf("\n\n    PASS  C gread");
    }
    else if (total>40)
    {
        printf("\n\n    PASS  D gread");
    }
    else if (total>33)
    {
        printf("\n\n    PASS  E gread");
    }
    else
    {
        printf("\n\n    FELL  F gread");
    }
    printf("\n\n\n");
    getch();
    
    
}