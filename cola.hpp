#ifndef COLA_HPP
#define COLA_HPP


template<typename T> struct cola;

template<typename T> struct ptDato;

/*
Devuelve una cola vacía, sin elementos.
*/
template<typename T> void crear(cola<T>& c);

/*
Devuelve la cola igual a la resultante de añadir e a c como último elemento.
*/
template<typename T> void encolar(cola<T>& c, const T& e);

/*
Devuelve verdad si y solo si c no tiene elementos. 
*/
template<typename T> bool esVacia(cola<T>& c);

/*
Devuelve el primer elemento encolado de los que hay en c.
*/
template<typename T> void primero(cola<T>& c, T& primero);

/*
Si c es no vacía, devuelve la cola igual a la resultante de 
eliminar de c el primer elemento que fue encolado. En caso 
contrario, devuelve una cola igual a c.
*/
template<typename T> void desencolar(cola<T>& c);

/*
Devuelve el nº de elementos de c.
*/
template<typename T> void longitud(cola<T>& c);

/*
Prepara el iterador y su cursor para que el siguiente elemento 
a visitar sea el primero de la cola c (situación de no haber visitado 
ningún elemento).
*/
template<typename T> void iniciarIterador(cola<T>& c);

/*
Devuelve falso si ya se ha visitado el último elemento, devuelve verdad 
en caso contrario.
*/
template<typename T> bool existeSiguiente(cola<T>& c);

/*
Devuelve el siguiente elemento de c.
*/
template<typename T> void siguiente(cola<T>& c);

/*
Devuelve la cola resultante de avanzar el cursor en c.
*/
template<typename T> void avanza(cola<T>& c);


// DECLARACION DEL TAD contacto 


template<typename T>
struct cola {
  friend void crear<T>(cola<T>& c);
  friend void encolar<T>(cola<T>& c, T& e);
  friend bool esVacia<T>(cola<T>& c);
  friend void primero<T>(cola<T>& c, T& primero);
  friend void desencolar<T>(cola<T>& c);
  friend void longitud<T>(cola<T>& c);
  friend void iniciarIterador<T>(cola<T>& c);
  friend bool existeSiguiente<T>(cola<T>& c);
  friend void siguiente<T>(cola<T>& c);
  friend void avanza<T>(cola<T>& c);
  private:  //declaracion de la representacion interna del tipo

    struct ptDato {
      T dato;
      ptDato* siguiente;
    };
  
    ptDato* primero, ultimo;
    unsigned longitud;
    ptDato* iter;
};

template<typename T>
void crear(cola<T>& c){
    c.longitud = 0;
    c.primero = nullptr;
    c.ultimo = nullptr;
}

template<typename T>
void encolar(cola<T>& c, const T& e){
  if(esVacia(c)){
    c.ultimo = new typename cola<T>::ptDato;
    c.primero = c.ultimo;
  }else{
    c.ultimo->siguiente = new typename cola<T>::ptDato;
    c.ultimo = c.ultimo->siguiente;
  }
  c.ultimo->dato = e;
  c.ultimo->siguiente = nullptr;
  c.longitud = c.longitud + 1;
}

template<typename T>
bool esVacia(cola<T>& c){
    return c.longitud == 0;
}

template<typename T>
bool primero(cola<T>& c, T& primero){
    if(!esVacia(c)){
      primero = c.primero->dato;
      return true;
    }
    return false;
}

template<typename T>
void desencolar(cola<T>& c){
    typename cola<T>::ptDato* aux;
    if(!esVacia(c)){
        aux = c.primero;
        c.primero = c.primero->siguiente;
        delete aux;
        c.longitud = c.longitud - 1;
        if(longitud == 0){
            c.ultimo = NULL;
        }
    }
}

template<typename T>
void longitud(cola<T>& c){
    return c.longitud;
}

template<typename T>
void iniciarIterador(cola<T>& c){
    c.iter = c.primero;
}

template<typename T>
bool existeSiguiente(cola<T>& c){
    return c.iter != nullptr;
}

template<typename T>
void siguienteAvanza(cola<T>& c){

}

#endif