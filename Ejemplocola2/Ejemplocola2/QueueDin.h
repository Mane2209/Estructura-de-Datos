#pragma once
#include "nodo.h"
using namespace std;

class QueueDin
{
	int ITEMS, ITEMSIZE;
	nodo* cola, * cabeza;

public:
	QueueDin();
	~QueueDin();
	DATA_TYPE put(DATA_TYPE valor);
	int empty();
	DATA_TYPE get();

};

