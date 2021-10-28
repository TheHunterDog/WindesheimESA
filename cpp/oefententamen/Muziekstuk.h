#ifndef MUZIEKSTUK___H
#define MUZIEKSTUK___H

const int MAX_NAAM_LENGTE = 80;


class Muziekstuk
{
    public:
        Muziekstuk(const char titel[], const char componist[]);
        void uitvoeren();
        ~Muziekstuk();
        char* GetTitel();
        char* GetComponist();

    
    private:
        char* titel;
        char* componist;
};





#endif