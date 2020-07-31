#include <iostream>

using namespace std;
const int MAX = 10;
int binary_searc(int x, int arr[])
{
    int sol = -1, right = MAX, left = 0;
    while(left <= right)
    {
        int med = (right+left) / 2;
        if(arr[med] == x)
        {
            sol = med;
            break;
        }
        else if(arr[med] < x)
        {
            left = med + 1;
        }
        else if(arr[med] > x)
        {
            right = med - 1;
        }
    }
    return sol;
}

int main()
{
    int arr[MAX] = {25, 40, 52, 56, 60, 64, 70, 72, 80, 81};
    int solution = binary_searc(56, arr);
    cout << "The number has been found at pos " << solution;
    return 0;
}
