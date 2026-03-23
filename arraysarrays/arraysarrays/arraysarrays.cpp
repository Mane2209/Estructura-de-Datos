#include <iostream>
#include "Vector.h"
#define MAX 10
using namespace std;

void cargarVectordeVector(Vector v[], int n);
void generarMatriz(Vector v[], Vector m[][MAX], int n);
void mostrarVectordeVectores(Vector v[], int n);
void mostrarMatriz(Vector m[][MAX], int n);


int main()
{
    int tamanio;
    Vector vec[MAX];
    Vector matriz[MAX][MAX];
    do {
        cout << "Ingrese tamaño de vector: ";
        cin >> tamanio;
    } while ((tamanio <= 0) || (tamanio > MAX));
    cargarVectordeVector(vec, tamanio);
    mostrarVectordeVectores(vec, tamanio);
    generarMatriz(vec, matriz, tamanio);
    mostrarMatriz(matriz, tamanio);
}
void cargarVectordeVector(Vector v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cargar vector [" << i << "]: ";
        v[i].cargar(n);
    }
}
void generarMatriz(Vector v[], Vector m[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j].setN(n);
            for (int k = 0; k < n; k++) {
                m[i][j].setDato(k, v[i].getDato(j));
            }
        }
    }
}
void mostrarVectordeVectores(Vector v[], int n) {
    cout << "Mostrando vector de Vectores" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Mostrar vector [" << i << "]: ";
        v[i].mostrar(n);
    }
}
void mostrarMatriz(Vector m[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j].mostrar(n);
            cout << " ";
        }
    }
}



