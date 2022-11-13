//In this program we can find the biggest value of an Interger number.

#include <stdio.h>


void logo()
{
    printf("===================******************====================================\n");
    printf("*                                                                        *\n");
    printf("*                                                                        *\n");
    printf("*                  Highest Interger                                      *\n");
    printf("*                 created by 2WheelRideR                                 *\n");
    printf("*                                                                         *\n");
    printf("===================******************======================================\n");
}

int main()
{
    logo();
    int a,b,c;

    printf("enter three interger numbers:\n");
    scanf("%d%d%d",&a,&b,&c);



//Down below we have some If statements to find the biggest value of integers.


    if(a>b && a>c)
    {
        printf("Int 'A' is the highest integer");
    }
    else if(b>a && b>c)
    {
        printf("int 'B' is the highest integer");
    }
    else if(c>a && c>b)
    {
        printf("int 'C' is the biggest integer");
    }
    else if(a == b, a == c , b == a, b == c ,c == a ,c == b)
    {
        printf("Error,the values are the same");
    }
    

    return 0;

}
