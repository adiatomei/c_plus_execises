#include <iostream>
#include "head.h"
using namespace std;

 Pers::Pers()
 {
 }

 Pers::Pers(int varsta, string num)
 : vs(varsta), nume(num)
 {

 }

 unsigned Pers::arata_varsta()
 {
     return this->vs;
 }

 string Pers::arata_nume()
 {
     return nume;
 }
