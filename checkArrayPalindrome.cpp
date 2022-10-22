#include <iostream>
using namespace std;
bool checkpalin(int *arr, int n, int s, int e)
{
    if (arr[s] != arr[e])
    {
        return false;
    }
    if (s < e)
        checkpalin(arr, n, s + 1, e - 1);
    return true;
}
void print(int *arr)
{
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int arr[7] = {1, 2, 3, 3, 2, 1, 7};
    int n = 7;
    int s = 0;
    int e = n;
    // swap the array using recursion
    // printing the normal flow
    print(arr);
    bool ans = checkpalin(arr, 7, s, e);
    if (ans)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}