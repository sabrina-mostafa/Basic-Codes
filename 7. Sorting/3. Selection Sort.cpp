///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


#include<bits/stdc++.h>
using namespace std ;

#define   Fast      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define   ULL       unsigned long long
#define   LL         long long
#define   ST          string
#define   F           first
#define   S           second
#define   PB        push_back
#define   MP       make_pair
#define   pi         acos(-1.0)
#define   NL       "\n"
#define    _           " "


/*

Complexity :
Best Case : O(n^2)
Worts Case : O(n^2)

Build up a sorted list by selecting the minimum element from the unsorted list and place it at the 1st position of the unsorted list

*/



int main ()
{
    int n, i, j ;
    cout<<"enter number of elements : " ;
    cin>>n ;
    
    int arr[n+5] ;
    
    for(i=0; i<n; i++)
    cin>>arr[i] ;
    

    for(i=0; i<n-1; i++)        //  number of passes will be 1 less than the element number
    {
        int x = i, PosMin = i+1 ;
        for(j=i+1; j<n; j++)            //  to determine the min value from x's next pos to last pos of arr
        {
            if(arr[PosMin]>arr[j])
                PosMin = j ;
        }
        if(arr[PosMin]<arr[x])
            swap(arr[PosMin], arr[x]) ;         //  the min value will get it's accurate position
    }
    
    
    cout<<"Sorted Array :\n" ;
    
    for(i=0; i<n; i++)
    cout<<arr[i]<<" " ;

    return 0 ;
}
