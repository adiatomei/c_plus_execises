#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>

using namespace std;



class Country{
  public:
    Country(string newName, string newLanguage, float newPop, float newPib);
    string get_name();
    string get_language();
    float get_pop();
    float get_pib();
    void dead(float hum);
    void born(float hum);
    void war();
    void peace();
  private:
    string name;
    string language;
    float pop;
    float pib;

};


#endif // HEAD_H_INCLUDED
