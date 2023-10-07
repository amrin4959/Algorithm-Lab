#include<bits/stdc++.h>
using namespace std;

void swap1(int *a, int *b)
{
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}
void swap2(int *a, int *b)
{
    *a = *a + *b ;
    *b = *a - *b ;
    *a = *a - *b ;
}
void swap3(int *a, int *b)
{
    *a = *a * *b ;
    *b = *a / *b ;
    *a = *a / *b ;
}
void swap4(int *a, int *b)
{
    *a = *a ^ *b ;
    *b = *a ^ *b ;
    *a = *a ^ *b ;
}

int quicksort(int first,int last, int arr[])
{
    int i,j,pivot ;
    if(first<last)
    {
        i=first, j=last, pivot = first ;
        while(i<j)
        {
            while(arr[i] >= arr[pivot] && i<last)
                i++ ;
            while(arr[j] < arr[pivot])
                j-- ;

            if(i<j)
                swap2(&arr[i], &arr[j]);
        }
        swap1(&arr[j], &arr[pivot]);

        quicksort(first,j-1,arr);
        quicksort(j+1,last,arr);
    }
}

int main()
{
    int n,i;
    cin >> n ;
    int arr[n] ;
    for(i=0; i<n; i++)
        cin >> arr[i] ;

    quicksort(0,n-1,arr);

    for(i=0; i<n; i++)
        cout << arr[i] << " " ;
}
