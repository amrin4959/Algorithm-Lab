#include<bits/stdc++.h>
using namespace std;

int func(int n, int x, int arr[])
{
    int i, j ;
    for(i=x; i!=n; i++)
    {
        for(j=0; j<x-1; j++)
        {
            if(arr[j] < arr[j+1])
                swap(arr[j], arr[j+1]);
        }
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int n,i,index;
    cin >> n ;
    int arr[n] ;
    for(i=0; i<n; i++)
        cin >> arr[i] ;
    cin >> index ;

    sort(arr,arr+n);

    if(index==0)
        goto print;

    func(n,index,arr);

print:
    for(i=0; i<n; i++)
        cout << arr[i] << " " ;
}
