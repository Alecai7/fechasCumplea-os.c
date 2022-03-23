#include <stdio.h>
int main (){

    int fechas [2][3];

    for(int i = 0; i<=1; i++){
        printf ("\ningrese fecha de nacimiento: ");
        printf ("\ningrese el dia de nacimiento: ");
        scanf ("%d", &fechas[i][0]);
        printf ("\ningrese el mes de nacimiento: ");
        scanf ("%d", &fechas[i][1]);
        printf ("\ningrese el anio de nacimiento: ");
        scanf ("%d", &fechas[i][2]);
    }
    printf ("PERSONA  DIA  MES  ANIO\n");
    for (int i = 0; i<=1; i++){
    printf ("  %d      %d   %d   %d\n", i, fechas [i][0], fechas [i][1], fechas [i][2]);
    }



return 0;
}
