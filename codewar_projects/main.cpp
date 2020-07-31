#include <iostream>

using namespace std;

int main()
{
 int start = 24;
 int endi = 99;
int counti = 0;
  if(start > endi){
    return 0;
  }else{
  for(int i = start; i <= endi; i++){
    if(i == 5 || i % 10 == 5) {
      continue;
    }else{
      counti++;
    }
  }
  cout << counti << " " << 50 / 10 % 10;
  }

}
