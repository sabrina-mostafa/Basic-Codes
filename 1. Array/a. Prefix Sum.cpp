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


///determining the summation of a range in a given Array for given query times

int main ()
{
    int n, query, left, right , ans, i ;
    cin>>n ;
    int a[n+3], b[n+3] ;

    b[0] = 0 ;
    for(i=1; i<=n; i++)
    {
        cin>>a[i] ;
        b[i] = b[i-1] + a[i] ;
    }


    cin>>query ;
    for(i=1; i<=query; i++)
    {
        cin>>left>>right ;
        ans = b[right] - b[left-1] ;
        cout<<ans<<endl ;
    }


    return 0 ;
}
