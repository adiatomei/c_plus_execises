#include <iostream>

using namespace std;

int main()
{

    int numOne, numTwo;
    cout << "Please chose two number between 1 and 10\n";
    cin >> numOne >> numTwo;
    try{
      if( (numOne < 0 || numOne > 10) || (numTwo < 0 || numTwo > 10) ) {
       throw 1;
      }else if(numOne == 0 || numTwo == 0) {
       throw 2;
       }else{
           cout << "The result is: " << numOne / numTwo;
       }
    }catch(int x){
        if(x == 1) {
            cout << "Please choose a valid number";
        }else if(x == 2) {
            cout << "Division by 0";
        }
    }

    return 0;
}
