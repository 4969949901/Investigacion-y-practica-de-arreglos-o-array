#include <iostream>
#include<stdlib.h>
#include <conio.h>
#include "archivos.h"


using namespace std;

int main() {
  cout << "-----Practica aplicando Arrays----- " <<endl;
  int opc,op;

    while(opc!=6){
        cout<<"Seleccione una opcion para ejecutar el ejercicio que elija:\n1.Escribir un programa que calcule la suma de los elementos de un array de enteros de 10 posiciones.\n2.Escribir un programa que encuentre el numero mayor en un array de enteros de 6 posiciones.\n3.Escribir un programa que invierta el orden de los elementos en un array de enteros de 8 posiciones.\n4.Escribir un programa que muestre la suma de todos los numeros de un array de enteros de 10 posiciones.\n5.Escribir un programa que cuente el numero de veces que aparece cada fruta en el siguiente array:\n\t*string frutas[9]={\"fresa\", \"sandia\", \"melon\", \"fresa\", \"naranja\", \"melon\", \"mango\", \"naranja\", \"fresa\"}\n6.Salir; "<<endl;
        cin>>opc;
        switch (opc) {
            case 1:
                sumaElementos();
                system("pause");
                system("cls");
                break;
            case 2:
                mayorElementoArray();
                system("pause");
                system("cls");
                break;
            case 3:
                invierteOrdenElmentos();
                system("pause");
                system("cls");
                break;
            case 4:
                mostrarSumaElementos();
                system("pause");
                system("cls");
                break;
            case 5:
                numeroVecesFruta();
                system("pause");
                system("cls");
                break;
            case 6:
                cout << "Seguro que quiere salir. " << endl;
                cout << "1.Si " << endl;
                cout << "2.No " << endl;
                cin >> op;
                if (op = 1) {
                    return 0;
                } else {
                    return main();
                }
                break;
        }

    }
    return 0;

}
