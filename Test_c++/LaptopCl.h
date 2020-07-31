#ifndef LAPTOPCL_H
#define LAPTOPCL_H
#include <iostream>
using namespace std;

//Drinks class declaration

class Drinks{
  public:
    Drinks(string newName, string newType, string newCountry, float newCost);
    ~Drinks();
    string get_name();
    void set_name(string newName);
    string get_type();
    void set_type(string newType);
    string get_country();
    void set_country(string newCountry);
    float get_cost();
    void set_cost(float newCost);
    static int get_numDrinks();
    virtual void get_drink();

  private:
    static int numDrinks;
    string name;
    string type;
    string country;
    float cost;
};

//AlcDrinks class declaration
class AlcDrinks: public Drinks {
  public:
    AlcDrinks(int newDegree, string newName, string newType, string newCountry,
              float newCost);
    ~AlcDrinks();
    int get_degree();
    void set_degree(int newDegree);
    void get_drink();
  private:
    int degree;
};

//NonAlcDrinks class declaration
class JuiceDrinks: public Drinks {
  public:
    JuiceDrinks(int newAlc, string newName, string newType, string newCountry,
                 float newCost);
    ~JuiceDrinks();
    int get_alc();
    void set_alc(int newAlc);
    void get_drink();
    void test();
  private:
    int alc;
};

//AlcJuiceDrinks class declaration
class AlcJuiceDrinks: public AlcDrinks {
  public:
    AlcJuiceDrinks(string newTaste, int newDegree, string newName, string newType, string newCountry,
                 float newCost);
    ~AlcJuiceDrinks();
    string get_taste();
    void set_taste(string newTaste);
  private:
    string taste;
};



#endif // LAPTOPCL_H
