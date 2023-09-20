//ejepmlo clase foco 22 nov
#include <string>
#ifndef FOCO_H
#define FOCO_H
using namespace std;


class Foco{
    private:
        int luminosidad;
        string color;

    public:
        Foco();
        Foco(int lum, string col);

        int getLuminosidad();
        string getColot();

        string print();

};
#endif