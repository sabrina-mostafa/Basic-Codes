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
Best Case : O(n) >> outer loop = 2 to n times && inner loop = 1 time
Worst Case : O(n^2)

*/



int main ()
{
    int n, i, j ;
    cout<<"enter number of elements : " ;
    cin>>n ;

    int arr[n+5] ;
    cout<<"enter "<<n<<" numbers : " ;
    
    for(i=0; i<n; i++)
        cin>>arr[i] ;

        /// will devide the arr in 2 parts I. Sorted array II. Unsorted arry
           //  will INSERT the 1st element(one by one) of Unsorted arr to the Sorted arr on its appropriate position


    for(i=1; i<n; i++)        //  1st element(0th) is sorted alone. So rest(1th to (n-1)th ) are in unsorted list
    {
        int key = arr[i] ;            //  taking the 1st element from the Unsorted arr to INSERT it on its appropriate position in the Sorted arr
        j = i-1 ;


         while( j>=0 && key<arr[j] )        //  will place the KEY in appropriate place in the sorted list
        {
            arr[j+1] = arr[j] ;         //  comparing the KEY with the elements of sorted list and right shifting while the elements are bigger than key
             j-- ;
        }


        j++ ;
        arr[j] = key ;       //  INSERTING temp on its appropriate position
    }

    for(i=0; i<n; i++)
        cout<<arr[i]<<" " ;

    return 0 ;
}
