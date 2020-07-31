#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string name;
    cin >> name;
    bool status = false;



    for(int i = 0; i < name.length(); i++) {
        for(int j = i+1; j < name.length(); j++) {
           if(name[i] == '-'){
               continue;
           }else if(name[i]  == ' ') {
               continue;
           }else if(toupper(name[i]) == toupper(name[j])) {
            status = true;
            break;
           }
        }
    }

    if(status) {
        cout << "The string it is a isogram";
    }else{
        cout << "The string is not a isogram";
    }
    return 0;
}
