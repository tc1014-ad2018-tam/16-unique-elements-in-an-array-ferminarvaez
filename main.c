// Fermín Narváez Reyes
#include <stdio.h>

int main() {
    int n; // Definir variables
    int kaka; // Definir variables
    int i; // Definir variables
    int x; // Definir variables
    int count =0; // Definir variables
// El tamaño del array
    printf("Introduce el tamaño del array: ");
    scanf("%d", &n);
    double array[n];
// Output para pedir los elementos del array
    printf("Introduce %d elementos en el arreglo: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &array[i]);
    }
// Output para poner los valores
    printf("\nLos números que pusiste en el array son: ");
    for(i=0; i<n; i++)
    {
        printf("%lf ", array[i]);
    }

    printf("\nValores únicos en el array: ");
    for(i=0; i<n; i++)
    {
        count=0;
        if(array[i]==array[i-1]){
            count++;
        }
        for(x=0;x<i;x++)
        {
            if(array[i]==array[x])
            {
                count++;
            }
        }
        for(kaka=i+1;kaka<n;kaka++)
        {
            if(array[i]==array[kaka])
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%lf ", array[i]);
        }
    }
    return 0;
}
