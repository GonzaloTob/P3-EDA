/*  Gonzalo 
    Raúl Tricas Palacio, 903147
*/

#include "cola.hpp"

#include<iostream>
using namespace std;

//Devuelve una cola vacía, sin elementos.
void crear(cola& c){
    
}

//Devuelve la cola igual a la resultante de añadir e a c como último elemento.
void encolar(cola& c, elemento e){
    
}

//Devuelve verdad si y solo si c no tiene elementos. 
bool esVacia(cola& c){

}

//Devuelve el primer elemento encolado de los que hay en c.
//Parcial: la operación no está definida si c es vacía.
void primero(cola& c, elemento& e){

}

//Si c es no vacía, devuelve la cola igual a la resultante de 
//eliminar de c el primer elemento que fue encolado. En caso 
//contrario, devuelve una cola igual a c.
void desencolar(cola& c){

}

//Devuelve el nº de elementos de c.
void longitud(cola& c){

}

//Prepara el iterador y su cursor para que el siguiente elemento 
//a visitar sea el primero de la cola c (situación de no haber visitado 
//ningún elemento).
void iniciarIterador(cola& c){

}

//Devuelve falso si ya se ha visitado el último elemento, devuelve verdad en caso contrario.
bool existeSiguiente(cola& c){

}

//Devuelve el siguiente elemento de c.
//Parcial: la operación no está definida si no existeSiguiente?(c)
void siguiente(cola& c){

}

//Devuelve la cola resultante de avanzar el cursor en c.
//Parcial: la operación no está definida si no existeSiguiente?(c)
void avanza(cola& c){

}
