/* Nombre, apellidos y NIP del (de los) autor(es).
*/

#ifndef AGRUPACION_HPP
#define AGRUPACION_HPP

// PREDECLARACION DEL TAD GENERICO agrupacion (inicio INTERFAZ)

const int MAX = 40;

/* COMPLETAR CON:
   LA ESPECIFICACION DEL DOMINIO DE VALORES DEL TAD agrupacion
   Y CON LAS CONDICIONES QUE SE LE EXIGEN AL PARAMETRO DE TIPO T.
*/
template<typename T> struct agrupacion;


/* COMPLETAR LA ESPECIFICACION DE CADA OPERACION DEL TAD
*/
template<typename T> void iniciar(agrupacion<T>& a);

/* ...
*/
template<typename T> bool anyadir(agrupacion<T>& a, const T& e);

/* ...
*/
template<typename T> bool vacia(const agrupacion<T>& a);

/* ...
*/
template<typename T> void borrarUltimo(agrupacion<T>& a);

/* ...
*/
template<typename T> bool esta(const agrupacion<T>& a, const T& e);

//COMPLETAR OPERACIONES ITERADOR
//....


// FIN predeclaracion del TAD GENERICO agrupacion (Fin INTERFAZ)



// DECLARACION DEL TAD GENERICO agrupacion

template<typename T>
struct agrupacion{
    friend void iniciar<T>(agrupacion<T>& a);
    friend bool anyadir<T>(agrupacion<T>& a, const T& e);
    friend bool vacia<T>(const agrupacion<T>& a);
    friend void borrarUltimo<T>(agrupacion<T>& a);
    friend bool esta<T>(const agrupacion<T>& a, const T& e);
    //COMPLETAR OPERACIONES ITERADOR
    //....
  private: 
     //campos
     T datos[MAX];
     int total;
    //COMPLETAR CAMPOS ITERADOR
    //...
};


// IMPLEMENTACION DE LAS OPERACIONES DEL TAD GENERICO agrupacion

template<typename T>
void iniciar(agrupacion<T>& a) {
    // COMPLETAR IMPLEMENTACION
}

template<typename T>
bool anyadir(agrupacion<T>& a, const T& e) {
    // COMPLETAR IMPLEMENTACION
}

template<typename T>
bool vacia(const agrupacion<T>& a) {
    // COMPLETAR IMPLEMENTACION
}
	
template<typename T>
void borrarUltimo(agrupacion<T>& a) {
    // COMPLETAR IMPLEMENTACION
}

template<typename T>
bool esta(const agrupacion<T>& a, const T& e) {
    // COMPLETAR IMPLEMENTACION (USANDO LA FUNCION == DEL TIPO T)
}

//COMPLETAR IMPLEMENTACION OPERACIONES ITERADOR
//...

#endif //fin de agrupacion.hpp