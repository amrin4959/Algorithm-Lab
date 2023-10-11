#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j=0, n, index,x=1,k  ;
    cout << "Enter the size : " ;
    cin >> n ;
    int arr[n] ;
    cout << "Enter the values : ";
    for(i=0; i<n; i++)
        cin >> arr[i] ;

    sort(arr,arr+n);
    int s = n/2 ;
    if(n%2!=0)
        swap(arr[s],arr[n-1]) ;

    i = 0;
    j = n-1 ;
    while(i<j)
    {
        while(arr[i]%2 != 0)
            i++ ;
        while(arr[j]%2 == 0)
            j-- ;
        if(i<j)
            swap(arr[i],arr[j]) ;
    }

    for(i=0; i<s-1; i++)
    {
        for(j=0; j<s-1; j++)
        {
            if(arr[j] < arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    if(n%2!=0)
    {
        for(i=s+1; i<n-1; i++)
        {
            for(j=s+1; j<n-1; j++)
            {
                if(arr[j] > arr[j+1])
                    swap(arr[j+1],arr[j]);
            }
        }
    }
    else
    {
        for(i=s; i<n-1; i++)
        {
            for(j=s; j<n-1; j++)
            {
                if(arr[j] > arr[j+1])
                    swap(arr[j+1],arr[j]);
            }
        }
    }

    for(i=0; i<n; i++)
        cout << arr[i] << " ";
}
