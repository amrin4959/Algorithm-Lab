#include<bits/stdc++.h>
using namespace std;

void swap1(int *a, int *b)
{
    *a = *a ^ *b ;
    *b = *a ^ *b ;
    *a = *a ^ *b ;
}

int bubblesort(int n, int arr[])
{
    int i,j ;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(arr[j] > arr[j+1])
                swap1(&arr[j], &arr[j+1]);
        }
    }
}

int main()
{
    int n,i;
    cin >> n ;
    int arr[n] ;
    for(i=0; i<n; i++)
        cin >> arr[i] ;

    bubblesort(n,arr);

    for(i=0; i<n; i++)
        cout << arr[i] << " " ;
}
