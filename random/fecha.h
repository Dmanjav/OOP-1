#ifndef FECHA_H
#define FECHA_H

using namespace std;

class Fecha{
    
    private:
        int dia;
        int mes;

    public:
        Fecha();
        Fecha(int day, int month);
        int getDia();
        int getMes();
        void setDia(int day);
        void setMes(int month);
};

#endif