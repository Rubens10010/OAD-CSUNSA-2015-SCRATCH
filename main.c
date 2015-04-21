#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a,b,i;
    float s;

    /*pedir limetes superior e inferior */
    printf("Limite inferior: ");
    scanf("%d",&a);
    while(a<0){
        printf("no puede ser negativo\n");
        printf("Limite inferior: ");
        scanf("%d",&a);
}
    printf("Limite superior: ");
    scanf("%d",&b);
    while(b<a){
        printf("No puede ser menor que %d\n",a);
        printf("Limite superior: ");
        scanf("%d",&b);
}
s=0.0;
for(i=a;i<=b;i++){
    s+=sqrt(i);
}
printf("Sumatorio de raices: ");
printf("%f",s);

    //int a;
    //float b;
    a=13%2;
    b=2.0/(1,0+2-(a+1));
    printf("el valor de a %d y el de b es: %f\n",a,b);
    return 0;
}
