#include "Queue.h"
Queue::Queue(){

cabeza = 0;
cola = 0;
ITEMS = 0;
ITEMSIZE = 1;
}
Queue::~Queue() {}

int Queue::empty() { 
    return ITEMS == 0;
}
int Queue::put(int d){
    if (ITEMS == MAX_SIZE) return -1;
    if (cola >= MAX_SIZE) { cola = 0; }
    alma[cola] = d;
    cola++;
    ITEMS++;
    return d;
}
int Queue::get(){
    char d;
    if (empty()) return -1;
    if (cabeza >= MAX_SIZE) { cabeza = 0; }
    d = alma[cabeza];
    cabeza++;
    ITEMS--;
    return d;
}
int Queue::size() { 
    return ITEMS; 
}


