#include <iostream> 
#include "Nodo.h" //Se incluye a la clase Nodo
#include <string>
using namespace std;
void Encolar(Nodo*& inicio, Nodo*& fin) { //Punteros enviados por referencia      
    Nodo* Elemento = new Nodo; //Creacion del nodo      
    if (inicio == NULL) {

        inicio = fin = Elemento; //Le asigno la direccion del primer nodo  
        cout << "ID: "; cin >> Elemento->dato.ID;
        cout << "Nombres: "; 
        cin.ignore();
        getline(cin, Elemento->dato.Nombre);
        cout << "Artista: "; 
        cin.ignore();
        getline(cin, Elemento->dato.Artista);
     
        cout << "Genero: "; cin >> Elemento->dato.Genero;
        cout << "Lanzamiento: ";
        cin.ignore();
        getline(cin, Elemento->dato.Lanzamiento);

        


    }
    else {

        fin->puntero = Elemento; //Asigno el puntero del anterior elemento al nuevo

        fin = Elemento; //Cambio la direccion del ultimo nodo creado 
        cout << "ID: "; cin >> Elemento->dato.ID;
        cout << "Nombre: "; 
        cin.ignore();
        getline(cin, Elemento->dato.Nombre);
        cout << "Artista: ";
        cin.ignore();
        getline(cin, Elemento->dato.Artista);
        cout << "Genero: "; cin >> Elemento->dato.Genero;
        cout << "Lanzamiento: "; 
        cin.ignore();
        getline(cin, Elemento->dato.Lanzamiento);
        

    }

} void Desencolar(Nodo*& inicio) {
    if (inicio != NULL) {
        cout << "ID: " << inicio->dato.ID << endl;
        cout << "Nombre: " << inicio->dato.Nombre << endl;
        cout << "Artista: " << inicio->dato.Artista << endl;
        cout << "Genero: " << inicio->dato.Genero << endl;
        cout << "Lanzamiento: " << inicio->dato.Lanzamiento << endl;
       
        inicio = inicio->puntero; // Cambio Inicio al siguiente nodo
    }
    else {
        cout << "La cola se encuentra vacia" << endl;
    }
} int main(int argc, char* argv[]) {
    Nodo* inicio = NULL, * fin = NULL; //Punteros libres para el manejo de la cola
    int opc = 0, respuesta = 0;
    do {
        cout << "1. LA COLA ESTA VACIA?" << endl;
        cout << "2. ENCOLAR" << endl;
        cout << "3. DESENCOLAR" << endl;
        cout << "4. FINALIZAR" << endl;
        cout << "Opcion: "; cin >> opc;


        switch (opc) {
        case 1:
            if (inicio == NULL)
                cout << "La cola se encuentra vacia" << endl;
            else
                cout << "Existe elemento(s) dentro de la cola" << endl;
            break;
        case 2:
            Encolar(inicio, fin);
            break;
        case 3:
            Desencolar(inicio);
            break;

        }

    } while (opc != 4);


    return 0;
}