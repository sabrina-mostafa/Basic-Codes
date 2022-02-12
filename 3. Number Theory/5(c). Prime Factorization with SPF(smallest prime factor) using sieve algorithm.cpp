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

/// ---for Unordered map---
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
/// ---for Setprecision---
/* cout<< fixed << showpoint << setprecision(9) << */

int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;

#define mx 2000000
LL spf[mx+5] ;

void SPF(int n)      ///complexity  >>> Log2(n)
{
    for(LL i=1 ; i<=mx; i+=2)   spf[i]=i ;  // initialing every number's SPF with themselves
    for(LL i=2 ; i<=mx; i+=2)   spf[i]=2 ;  //bcz every even number's SPF is 2
    for(LL i=3; i<=mx; i+=2)
    {
        if(spf[i]==i)
        {
            for(LL j=i*i; j<=mx; j+=2*i)
            {
                spf[j] = i ;
            }
        }
    }
    int cnt = 0 ;
    while(spf[n]>1)
    {
            cnt++ ;
            if(cnt>1) cout<<" * " ;
        cout<<spf[n]  ;

        n/= spf[n] ;
    }
}
int main ()
{
        int n ;
        cin>>n ;   ///here n should be integer (!long long)
    SPF(n) ;
    return 0 ;
}
