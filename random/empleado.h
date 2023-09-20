#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "fecha.h"
#include <string>

using namespace std;

class Empleado{

    private:
        string nombreEmp;
        float sueldoEmp;
        Fecha cumpleAniosEmp;

    public:
        Empleado();
        Empleado(string nomb, float sueldo, Fecha cumple);
        string getNombreEmp();
        float getSueldoEmp();
        Fecha getFecha();
        void setNombreEmp(string nomb);
        void setSueldo(float sueldo);
        void setFecha(Fecha);
        void subeSueldo(float);
};

#endif