#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;
#include <numeric>
#include <unordered_map>

int xorfind(ll *arr,int j){
    ll k=0;
    for(int i=0;i<j;i++){
        k^=arr[i];
    }
    return k;
}
int power2(ll n)
{
    int k = 0;
    while (n >= 1)
    {
        n /= 2;
        k++;
    }
    return k;
}

int county(ll *arr,int j){
    int c=0;
    for(int i=0;i<j;i++){
        if(arr[i]&1==1){
            c++;
        }
    }
    return c%2;
}

int final(ll *arr, int j)
{
    
    ll temp = 0;
    ll multi=1;
    // int k = power2(big);
    int x = 0;

    
    while (x<64)
    {
        if (xorfind(arr,j) != 0)
        {
            for (int i = 0; i < j; i++)
            {
                arr[i] += multi;
                temp+=multi;
            }
        }
        x++;
        multi*=2;
    }

    if (xorfind(arr,j)!=0){

        return -1;
    }
    return temp;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        ll arr[n];
        int j = 0;

        ll a[n];

        // unordered_map<ll, int> f;


        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            // f[a[i]]++;
            
        }

        // ll maxi=0;

        // unordered_map<ll, int>::iterator it;
        // for (it = f.begin(); it != f.end(); it++)
        // {
        //     if (it->second % 2 == 1)
        //     {
        //         arr[j] = it->first;
                
        //         if (arr[j]>maxi){
        //             maxi=arr[j];
        //         }
        //         j++;
        //     }
        // }

        // printf("%lld\n",final(arr,j));
        cout << final(a, n) << endl;    
    }
}