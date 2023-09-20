#include <string>
#ifndef PERFIL_H
#define PERFIL_H

using namespace std;

class Perfil{
    private:
        string nombre;
        string telefono;
        string ciudad;

    public:
        Perfil();
        Perfil(string nomb, string tel, string city);

        string getNombre();
        string getTelefono();
        string getCiudad();
        void setNombre(string nomb);
        void setTelefono(string tel);
        void setCiudad(string city);
        void guardar();
        void agregarAmigos();
        void cum();
};

#endif