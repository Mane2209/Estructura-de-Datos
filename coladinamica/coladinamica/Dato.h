#pragma once 
#include <string>
using namespace std;
class Dato
{
public:
    float ID;
    string Nombre;
    string Artista;
    string Genero;
    string Lanzamiento;
    Dato() {
        ID = 0;
        Nombre = "Unknow";
        Artista = "Unknow";
        Genero = "Unknow";
        Lanzamiento = "Unknow";
    }
};

