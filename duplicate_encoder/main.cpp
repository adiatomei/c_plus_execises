#include <iostream>
#include <cctype>
using namespace std;

string duplicate_encoder(string word){
  string newWord = word;
  int status = 0;
  for(int i = 0; i < word.length(); i++){
    status = 0;
    for(int j = 0; j < word.length(); j++){
      if(j == i){
        continue;
      }
      if(toupper(word[i]) == toupper(word[j])){
          status = 1;
        }
  }


    if(status){
        newWord[i] = ')';
    }else{
        newWord[i] = '(';
    }
  }
  string consWord = newWord;
  return consWord;
}

int main()
{
    string food = "Pizza";
    string newOne = duplicate_encoder(food);
    cout << newOne;
    return 0;
}
