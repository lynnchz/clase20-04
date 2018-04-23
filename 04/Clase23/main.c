#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
    int isEmpty;
} eEmpleado;

int menu();

int main ()
{
    int salir =0;
    eEmpleado gente [50];
    inicializarEmpleados(gente, 50);

    do
        {
        switch(menu())
        {
        case 1:
            printf("\nAlta\n\n");
            system("pause");
            break;
        case 2:
            printf("\nBaja\n\n");
            system("pause");
            break;
        case 3:
            printf("\nModificacion\n\n");
            system("pause");
            break;
        case 4:
            printf("\nListar\n\n");
            system("pause");
            break;
        case 5:
            printf("\nOrdenar\n\n");
            system("pause");
            break;
        case 6:
            printf("\nSalir\n\n");
            salir = 1;
            break;
        default:
            printf("\n Opcion Incorrecta, vuelva a intentarlo \n\n");
            system("pause");
        }
        }
        while(salir !=1);
            return 0;
    }


    int menu()
{
    int opcion;
    system("cls");
    printf("1.Alta\n");
    printf("2.Baja\n");
    printf("3.Modificacion\n");
    printf("4.Listar\n");
    printf("5.Ordenar\n");
    printf("6.Salir \n");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
void inicializarEmpleado(eEmpleado vec[], int tam)
{
    for (int i=0; i<tam; i++)
    {
        vec[i].isEmpty=1;
    }
}
void mostrarEmpleado(eEmpleado vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        if (vec[i].isEmpty ==0)
        {
            mostrarEmpleado(vec[i]);
        }
    }
}
/*void mostrarEmpleados(eEmpleado emp)
{
    printf("%d %s % c %.2f $2d/%2d/%4d\n", emp.legajo emp)
}*/
int buscarLibre(eEmpleado vec[],int tam)
{
    int indice=-1;
    for(int i=0;i<tam;i++)
    {
        if(vec[i].isEmpty==1)
        {
            indice =1;
            break;
        }
    }
    return indice;
}
