#pragma once
#include <iostream>
#define MAX_SIZE 256 /* capacidad máxima */
typedef char almacen[MAX_SIZE];
class Queue
{
	int cabeza; /* puntero de lectura */
	int cola; /* puntero de escritura */
	int ITEMS; /* número de elementos en la lista */
	int ITEMSIZE; /* tamaño de cada elemento */
	almacen alma; /* el almacen */

public:
	Queue();
	~Queue();
	int empty();
	int put(int d);
	int get();
	int size();


};

