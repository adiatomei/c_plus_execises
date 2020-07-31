#include <iostream>

using namespace std;
const int MAX = 5;

int part(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    while(i < j)
    {
        do
        {
            i++;
        }while(arr[i] <= pivot);

        do
        {
            j--;
        }while(arr[j] > pivot);

        if(i < j)
        {
            int b = arr[i];
            arr[i] = arr[j];
            arr[j] = b;
        }
    }
    int t = arr[l];
    arr[l] = arr[j];
    arr[j] = t;
    return j;
}

void quiqSort(int arr[], int l, int h)
{
    if(l < h)
    {
        int j = part(arr, l, h);
        quiqSort(arr, l, j);
        quiqSort(arr, j+1, h);
    }
}


int main()
{
    int arr[MAX] = {25, 31, 14, 18, 27};
    quiqSort(arr, 0, MAX);
    for(int i = 0; i < MAX; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}
