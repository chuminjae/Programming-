#include <bits/stdc++.h>
using namespace std;
long arr[100000]; // long long should be used as the input can exceed the range of integer.
int main()
{
    long s = 1;
    long n, k,ans = 0;
    cin >> n >> k;
    for(long i=1; i<=n; i++)
    {
        cin >> arr[i];
    }
    ans = k + 1; // answer represents the minimum value.
    for(long i=2; i<= n; i++)
    {
        if(arr[i]-arr[s] > k) // if paying by subscribing for consecutive day is expensive than paying each day
        {
            ans += k + 1; // pay each day.
        }
        else // if paying each day is expensive than paying for each day.
        {
            ans += arr[i] - arr[s];  // pay for consecutive days.
        }
        s = i; // s is used to store the index of the array to find out the value of the array at the current index minus value of the array at the prior index.
    }

    cout<<ans; }