/******************************************************************************

                        Permutation des nombres entiers 

*******************************************************************************/

#include<stdio.h>
int a,b,c ;
int main(){
    
    printf("donner un entier %d",a);
    scanf("%d",&a);
    printf("donner un entier %d",b);
    scanf("%d",&b);
   
    
    c=a;
    a=b;
    b=c;
    printf("%d et %d",a,b);
}