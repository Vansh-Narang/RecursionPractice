#include <iostream>
using namespace std;
bool search(int *arr, int element, int i, int size,bool &flag)
{
    if (i != size)
    {
        if (arr[i] == element)
        {
            flag=true;
        }
        else
        {
            search(arr,element,i+1,size,flag);
        }
    }
    if(flag)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int arr[3] = {1, 2, 3};
    int element;
    cout << "ENter the element you want to srch" << endl;
    cin >> element;
    bool flag=false;
    bool ans = search(arr, element, 0, 3,flag);
    if (ans)
        cout << "true" << endl;
    else
    {
        cout << "not found" << endl;
    }
}