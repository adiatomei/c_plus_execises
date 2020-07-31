#include <iostream>
#include "head.h"

using namespace std;

//Instrument implementation class

Instrument::Instrument(string newName, int newPrice)
: name(newName), price(newPrice)
{

}

Instrument::~Instrument()
{
    cout << "A instrument has deleted\n";
}

string Instrument::get_name()
{
    return name;
}

int Instrument::get_price()
{
    return price;
}

void Instrument::set_name(string newName)
{
    name = newName;
}

void Instrument::set_price(int newPrice)
{
    price = newPrice;
}

void Instrument::sound()
{

}

void Instrument::play(string song)
{
    cout << "The song " << song << " is played.\n";

}

//Acordion implementation class

Acordion::Acordion(int newBas, string newName, int newPrice)
: bas(newBas), Instrument(newName, newPrice)
{

}

Acordion::~Acordion()
{
    cout << "A acordion has been deleted\n";
}

int Acordion::get_bas()
{
    return bas;
}

void Acordion::set_bas(int newBas)
{
    bas = newBas;
}

void Acordion::sound()
{
    cout << "The accordion sounds romantic.\n";
}

void Acordion::play(string song, string acordionSong)
{
    cout << "The songs " << song << " and " << acordionSong << " are played.\n";
}

//Piano implementation class

Piano::Piano(int newClape, string newName, int newPrice)
: clape(newClape), Instrument(newName, newPrice)
{

}

Piano::~Piano()
{
    cout << "The piano has closed.\n";
}

int Piano::get_clape()
{
    return clape;
}

void Piano::set_clape(int newClape)
{
    clape = newClape;
}

void Piano::sound()
{
    cout << "The piano sounds profund.\n";
}

void Piano::play(string song, string pianoSong)
{
    cout << "The songs " << song << " and " << pianoSong << " are played.\n";
}
