#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pes,cot,dol;
    printf("Ingres el monto en pesos:");
    scanf("%lf",&pes);
    printf("Ingrese la cotizacion del dolar:");
    scanf("%lf",&cot);
    dol=pes/cot;
    printf("El monto %g pesos equivale a U$D %g",pes,dol);
    return 0;
}
