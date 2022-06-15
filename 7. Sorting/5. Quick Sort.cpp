#include<bits/stdc++.h>
using namespace std ;

//Complexity Worst=O(n^2) , Average/Best=O(n logn)

int Partition(int a[], int LB, int UB)
{
    int pivot = a[LB] ;
    int start=LB, end=UB, loc ;

    while(start<end)
    {
        while(a[start]<=pivot)
            start++ ;
        while(a[end]>pivot)
            end-- ;

        if(start<end)
            swap(a[start], a[end]) ;
    }
    swap(a[LB], a[end]) ;

    return loc = end ;
}


void QuickSort(int a[], int LB, int UB)
{
    if(LB<UB)
    {
        int location = Partition(a, LB, UB) ;

        QuickSort(a, LB, location-1) ;
        QuickSort(a, location+1, UB) ;
    }
}


int main()
{
    int i, j, n, UB, LB ;
    cout<<"Enter the number of elements : " ;
    cin>>n ;

    int a[n+5] ;
    cout<<"Enter "<<n<<" numbers : " ;

    for(i=0; i<n; i++)
        cin>>a[i] ;
    LB=0, UB=n-1 ;

    QuickSort(a, LB, UB) ;

    cout<<"\nAfter Quick Sort : " ;
    for(i=0; i<n; i++)
        cout<<a[i]<<" " ;
        cout<<endl ;
}
