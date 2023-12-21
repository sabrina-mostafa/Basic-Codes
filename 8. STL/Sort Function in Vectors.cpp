///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


#include<bits/stdc++.h>
using namespace std ;

#define  Fast      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ULL       unsigned long long
#define  LL         long long
#define ST          string
#define  F           first
#define  S           second
#define  PB        push_back
#define  MP       make_pair
#define  pi         acos(-1.0)
#define  NL       "\n"
#define   _          " "

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
    int n ;
    cin>> n;
    vector<int> v(n) ;

    for(int i=0; i<n; i++)
        cin>>v[i] ;
    sort(v.begin(), v.end()) ;
    for(int i=0; i<n; i++)
        cout<<v[i]<<_ ;
    cout<<NL ;
  

    for(int i=0; i<n; i++)
        cin>>v[i] ;
    sort(v.begin(), v.begin()+3) ;
    for(int i=0; i<n; i++)
        cout<<v[i]<<_ ;
    cout<<NL ;

  
    for(int i=0; i<n; i++)
        cin>>v[i] ;
    sort(v.begin(), v.end(), greater<int>() ) ;  //  ANOTHER WAY ::  sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i++)
        cout<<v[i]<<_ ;
    cout<<NL ;
  
    return 0 ;
}
