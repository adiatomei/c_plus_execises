#include <iostream>

using namespace std;

int main()
{
    int arrNums[5] = {4, 25, 65, 10};
    int sizeN = sizeof(arrNums) / sizeof(arrNums[0]);
    int elemN = 0;
    int elemSters = 0;
    int k = 3;
    for(int i = 0; i < sizeN; i++){
        if(arrNums[i] != NULL){
            elemN++;
        }
    }
    //Inserare
    if(elemN == sizeN){
        cout << "The array is full";
    }else{
        for(int i = elemN-1; i >= k-1; i--){
            arrNums[i+1] = arrNums[i];
        }
        arrNums[k] = 14;
        elemN++;
    }

    for(int i = 0; i < elemN; i++){
        cout << arrNums[i] << " ";
    }
    cout << endl;

    //Eliminare

    if(elemN == 0){
        cout << "The array is empty";
    }else{
        elemSters = arrNums[k];
        for(int i = k; i <= elemN-2; i++){
            arrNums[i] = arrNums[i+1];
        }
        elemN--;
    }

     for(int i = 0; i < elemN; i++){
        cout << arrNums[i] << " ";
    }
    return 0;
}
