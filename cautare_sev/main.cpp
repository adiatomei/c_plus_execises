#include <iostream>

using namespace std;
const int MAX = 5;

void fil_arr(int arr[])
{
    for(int i = 0; i < MAX; i++)
    {
        cin >> arr[i];

    };
};

bool searc_arr(int arr[], int searchEl)
{
    for(int i = 0; i < MAX; i++)
    {
        if(searchEl == arr[i])
        {
            return true;
        }
    }
}
int main()
{
    int arr[MAX];
    cout << "Please insert value in the array.\n";
    fil_arr(arr);
    int searcEl = 0;
    cout << "Please select a number.\n";
    cin >> searcEl;
    bool status = searc_arr(arr, searcEl);
    if(status){
        cout << "The number has been found";
    }else{
        cout << "The number hasn't found";
    }


    return 0;
}
