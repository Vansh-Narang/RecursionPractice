#include<iostream>
using namespace std;
int countdigit(int n,int &cnt)
{
    if(n!=0)
    {
        cnt++;
        n=n/10;
        countdigit(n,cnt);
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    cout<<countdigit(n,cnt)<<endl;
}