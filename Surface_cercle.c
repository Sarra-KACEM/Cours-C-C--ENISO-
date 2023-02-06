/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define pi 3.14
int main()
{  float rayon , surface;
    float calcul(float rayon);
    printf("rayon=?");
    scanf("%f",&rayon);
    surface= calcul(rayon);
    printf("surface =%f" , surface);

}
float calcul(float rayon)
{ /* definition de la variable locale */
float a;
a = pi * rayon * rayon;
return(a);
}