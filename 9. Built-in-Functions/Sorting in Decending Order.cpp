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
vector<int>vec ;
pair<int, int>pr ;
set<int>st ;
map<int, int>mp ;
*/


/// ---for Unordered map---
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
/// ---for Setprecision---
/* cout<< fixed << showpoint << setprecision(9) << */

int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;



int main ()
{
    LL t, n, m, i, j, k, x, y, z, sum=0, l, r, f, flag=0, cnt=0, mx = INT_MIN, mn = INT_MAX ;
    
    cin>>n ;

    int a[n+5] ;

    for(i=0; i<n; i++)
        cin>>a[i] ;

    sort(a, a+n, greater<int>()) ;
    for(i=0; i<n; i++)
        cout<<a[i]<<" " ;

    return 0 ;
}
