#include "QueueDin.h"

QueueDin::QueueDin() {
	cola=NULL; 
	cabeza=NULL;
	ITEMS=0; 
	ITEMSIZE=sizeof(DATA_TYPE);
}

QueueDin::~QueueDin() {}

DATA_TYPE QueueDin :: put(DATA_TYPE valor)
{
	nodo* temp;

	temp = new nodo;
	if (temp == NULL) return -1;

	ITEMS++;
	temp->data = valor;
	temp->next = NULL;

	if (cabeza == NULL)
	{
		cabeza = temp;
		cola = temp;
	}
	else
	{
		cola->next = temp;
		cola = temp;
	}
	return valor;
}
int QueueDin::empty() { 
	return ITEMS == 0; 
}
DATA_TYPE QueueDin::get()
{
	nodo* temp;
	DATA_TYPE d;

	if (empty()) return -1;

	d = cabeza->data;
	temp = cabeza->next;
	if (cabeza) delete cabeza;
	cabeza = temp;
	ITEMS--;
	return d;
}