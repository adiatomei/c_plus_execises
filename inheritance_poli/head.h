#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>

using namespace std;

class Instrument
{
public:
    Instrument(string newName, int newPrice);
    ~Instrument();
    string get_name();
    int get_price();
    void set_name(string newName);
    void set_price(int newPrice);
    virtual void sound();
    void play(string song);
private:
    string name;
    int price;

};

class Acordion : public Instrument
{
public:
    Acordion(int newBas, string newName, int newPrice);
    ~Acordion();
    int get_bas();
    void set_bas(int newBas);
    void sound();
    void play(string song, string acordionSong);
private:
    int bas;
};

class Piano : public Instrument
{
public:
    Piano(int newClape, string newName, int newPrice);
    ~Piano();
    int get_clape();
    void set_clape(int newClape);
    void sound();
    void play(string song, string pianoSong);
private:
    int clape;
};



#endif // HEAD_H_INCLUDED
