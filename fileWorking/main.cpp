#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {5, 25, 12, 6, 8, 9};
    int sum = 0;
    int theNum = 0;
    for(int i = 0; i < numbers.size(); i++) {
      for(int j = i+1; j < numbers.size(); j++) {
        if(j){
          sum = numbers[j] + numbers[i];
          if(sum > theNum) {
            theNum = sum;
          }

        }
      }
    }
    cout << theNum;

  return 0;
}
