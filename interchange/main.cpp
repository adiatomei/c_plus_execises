#include <iostream>

using namespace std;
const int MAX = 5;
void inter_sor(int arr[])
{
    if(arr[0] == 0)
    {
        cout << "The adress it is NULL\n";
    }
    else
    {
        for(int i = 0; i < MAX; i++)
        {
            for(int j = i + 1; j < MAX; j++)
            {
                if(arr[i] > arr[j])
                {
                    int aux = arr[i];
                    arr[i] = arr[j];
                    arr[j] = aux;
                }
            }
        }
    }
}

void bouble_sor(int arr[])
{
    int status = 1;
    while(status)
    {
        status = 0;
        int aux = 0;
        for(int i = 0; i <= MAX-2; i++)
        {
            if(arr[i] > arr[i+1])
            {
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                status = 1;
            }
        }
    }
};

int main()
{
    int arr[MAX] = {40, 23, 28, 52, 22};
   /* inter_sor(arr);*/
    bouble_sor(arr);
    for(int i = 0; i < MAX; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
