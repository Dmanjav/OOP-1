//Diego Manjarrez Viveros A01753486
#ifndef LED_H
#define LED_H

#include <string>

using namespace std;

class Led{
    private:
        string color;
        bool encendido;

    
    public:
        Led();
        Led(string col,bool enc);
        string getColor();
        void setColor(string col);
        void setEncendido(bool enc);
        bool isEncendido();
        string apagar();
        string encender();
        string print();
};

#endif