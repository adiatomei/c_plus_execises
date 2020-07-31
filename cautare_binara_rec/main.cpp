#include <iostream>

using namespace std;

const int MAX = 10;

int cautare_bin_rec(int arr[], int x, int left, int right)
{
    if(left > right)
    {
        return -1;
    }
    else
    {
        int mid = (left+right) / 2;
        if(x == arr[mid])
        {
            return mid;
        }
        else if(x < arr[mid])
        {
            return cautare_bin_rec(arr, x, left, mid - 1);
        }
        else
        {
            return cautare_bin_rec(arr, x, mid + 1, right);
        }

    }
}

int main()
{
    int arr[MAX] = {16, 21, 23, 28, 40, 45, 48, 66, 68, 69};
    cout << cautare_bin_rec(arr, 21, 0, MAX-1);
    return 0;
}
