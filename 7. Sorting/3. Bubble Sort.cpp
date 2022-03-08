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
Best Case : O(n)  >> only one pass >> outer loop=1 && inner loop=n-1 times
Worst Case : O(n^2)


*/


int main ()
{
    int t, n, i, j ;

    cout<<"Get the size of the array : " ;
        cin>>n ;

        int a[n+5], b[n+5], c[n+5] ;
        cout<<"Enter the elements of the array : " ;

        for(i=1; i<=n; i++)
                cin>>a[i] ;
  

        for(i=1; i<=n; i++)     //  for n-1 passes and each next largest number will be in its correct position in each pass
        {
                bool Swap_done = 0 ;
                for(j=1; j<=n-i ; j++)         // for each checking for each pairs
                {
                        if(a[j]>a[j+1])
                        {
                                swap(a[j], a[j+1]) ;
                                Swap_done = 1 ;
                        }
                }
                if(!Swap_done) break ;
        }
  
  
        cout<<"After Bubble Sort : " ;

        for(i=1; i<=n; i++)
        cout<<a[i]<<" " ;

                cout<<endl ;


    return 0 ;
}
