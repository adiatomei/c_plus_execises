#include <iostream>

using namespace std;

const int Max = 8;

void insertionSort(int arr[], int n)
{
    int key, bKey;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        bKey = i - 1;
        while(bKey >= 0 && arr[bKey] > key)
        {
            arr[bKey + 1] = arr[bKey];
            bKey--;
        }
        arr[bKey + 1] = key;
    }
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

int main()
{
    int arr[Max] = {25, 14, 22, 100, 21, 65, 78, 98};
    insertionSort(arr, Max);
    print(arr, Max);
    return 0;
}
