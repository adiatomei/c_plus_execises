#include "LaptopCl.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main(){
  Drinks *ptrJackDaniel = NULL;
  Drinks *ptrCocaCola = NULL;
  AlcDrinks jackDaniel(30, "Jack Daniel", "Alcohoolic", "Scotland", 25);
  JuiceDrinks cocaCola(2, "Coca-cola", "Nonalcohoolic", "United States", 1);
  AlcJuiceDrinks strowbool("bitter", 5, "Strowbool", "Alcohoolic juice", "England", 1.5);
  ptrJackDaniel = &jackDaniel;
  ptrCocaCola = &cocaCola;
  cout << "My favourite wiskey is " << ptrJackDaniel->get_name() << endl;
  cout << "My favourite juice is " << cocaCola.get_name() << " and is cost " <<
  cocaCola.get_cost() << endl;
  cout << "The best cidru I have drink is " << strowbool.get_name() << endl;
  cocaCola.set_cost(2.5);
  cout << "The total drinks I get is " << jackDaniel.get_numDrinks() << endl;
  jackDaniel.get_drink();
  ptrCocaCola->get_drink();

  return 0;
}
