#ifndef KAT___H
#define KAT___H

const int MAX_NAAM_LENGTE = 80;


class Kat
{
    public:
        Kat(const char naam[]);
        void praat();
        ~Kat();
    
    private:
        char* naam;
};





#endif