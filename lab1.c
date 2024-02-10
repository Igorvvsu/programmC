/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,x1,x2;
    
    a=5.1;
    b=1;
    c=-2.2;
    
    d = b*b - 4*a*c;
    printf("d = %lf \n",d);
    
    if (d>0) {
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("x1=%lf x2=%lf \n",x1,x2);
    }
    if (d==0) {
        x1 = (-b/(2*a));
        printf("x1=%lf \n",x1);
    }
    if (d<0) {
        printf("KORNEY NET");
    }
    
    return 0;
}
