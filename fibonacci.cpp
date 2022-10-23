#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int>&ans)
{
    if(n<=1)
    {
        return n;
    }
    ans.push_back(n);
    return fib(n-1,ans)+fib(n-2,ans);
}
int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    int ans1=fib(n,ans);
    cout<<ans1;
}