#include <iostream>
#include<string.h>

using namespace std;
/*Escribir un programa que calcule la suma de los elementos
 de un array de enteros de 10 posiciones.*/

void sumaElementos(){
    int elementos[10]={1,2,3,4,5,6,7,8,9,10};
    int suma=0;

    for(int i=0;i<10;i++){
        suma+=elementos[i];
    }
    cout<<"La suma de elementos enteros es: "<<suma<<endl;
}
//Escribir un programa que encuentre el número mayor en un array de enteros de 6 posiciones.

void  mayorElementoArray(){
    int elementos[6]={1,2,7,4,5,3};
    int mayor=0;
    for(int i=0;i<6;i++) {
        if (elementos[i] > mayor) {
            mayor = elementos[i];
        }
    }

    cout<<"El numero mayor del array es: "<<mayor<<endl;
}
//Escribir un programa que invierta el orden de los elementos en un array de enteros de 8 posiciones.

void invierteOrdenElmentos() {
    int enteros[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 8; i++) {
        cout << "Posicion normal: " << i << "==>" << enteros[i] << endl;
    }cout<<"\n";
        for (int i = 8 - 1; i >= 0; i--) {
            cout << "Posicion inversa: " << i << "==>" << enteros[i] << endl;
        }
    }

//Escribir un programa que muestre la suma de todos los números de un array de enteros de 10 posiciones.
void mostrarSumaElementos(){

    int elementos[10]={1,2,3,4,5,6,7,8,9,10};
    int suma=0;

    for(int i=0;i<10;i++) {
        suma += elementos[i];

        cout << "Posicion: "<<i<<" Numeros enteros: " <<elementos[i]  <<" suma de los numeros: " << suma << endl;
    }
}
//Escribir un programa que cuente el número de veces que aparece cada fruta en el siguiente array:
//busqueda secuencial
void numeroVecesFruta() {
    string frutas[9]={"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
    int contador=0,cont=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0,cont8=0;
    for(int i=0;i<9;i++) {
        if (frutas[i] == frutas[0])
            contador++;
        if (frutas[i] == frutas[1])
            cont++;
        if (frutas[i] == frutas[2])
            cont2++;
        if (frutas[i] == frutas[3])
            cont3++;
        if (frutas[i] == frutas[4])
            cont4++;
        if (frutas[i] == frutas[5])
            cont5++;
        if (frutas[i] == frutas[6])
            cont6++;
        if (frutas[i] == frutas[7])
            cont7++;
        if (frutas[i] == frutas[8])
            cont8++;

    }
        cout<<"Posicion: 0 "<<"Fruta: "<<frutas[0]<<"--> veces que aparece en el arreglo--> "<<contador<<endl;
        cout<<"Posicion: 1 "<<"Fruta: "<<frutas[1]<<"--> veces que aparece en el arreglo--> "<<cont<<endl;
        cout<<"Posicion: 2 "<<"Fruta: "<<frutas[2]<<"--> veces que aparece en el arreglo--> "<<cont2<<endl;
        cout<<"Posicion: 3 "<<"Fruta: "<<frutas[3]<<"--> veces que aparece en el arreglo--> "<<cont3<<endl;
        cout<<"Posicion: 4 "<<"Fruta: "<<frutas[4]<<"--> veces que aparece en el arreglo--> "<<cont4<<endl;
        cout<<"Posicion: 5 "<<"Fruta: "<<frutas[5]<<"--> veces que aparece en el arreglo--> "<<cont5<<endl;
        cout<<"Posicion: 6 "<<"Fruta: "<<frutas[6]<<"--> veces que aparece en el arreglo--> "<<cont6<<endl;
        cout<<"Posicion: 7 "<<"Fruta: "<<frutas[7]<<"--> veces que aparece en el arreglo--> "<<cont7<<endl;
        cout<<"Posicion: 8 "<<"Fruta: "<<frutas[8]<<"--> veces que aparece en el arreglo--> "<<cont8<<endl;


}





