#include <iostream>
using namespace std;
void swapper(int *arr, int n, int s, int e)
{
    if (s < e)
    {
        swap(arr[s], arr[e]);
        swapper(arr, n, s + 1, e - 1);
    }
    else
    {
        return;
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int arr[100000];
    int n;
    cout << "the size of array" << endl;
    cin >> n;
    cout << "enter the elemnets" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 0;
    int e = n;
    // swap the array using recursion
    // printing the normal flow
    print(arr, n);
    swapper(arr, n, s, e);
    print(arr, n);
}