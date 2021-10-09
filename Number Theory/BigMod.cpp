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

LL Bigmod(LL base, LL power, LL mod)
{
        if(power==0) return 1 ;
        else if(power%2==0)   //4   //2
        {
                LL a = ( Bigmod(base, power/2, mod) )%mod ;    //a=2^2 %mod    //a=2^1 %mod
                return (a*a)%mod ;    //2^4 %mod = (2^2 * 2^2)%mod    //2^2 %mod = (2^1 * 2^1)%mod
        }
        else
        {
                //2^5 %mod = (2^4 %mod * 2^1%mod) %mod
                LL a = base%mod ;      //2^1%mod
                LL b = ( Bigmod(base, power-1, mod) )% mod ;
                return (a*b)%mod ;    //(a=2^1%mod * b=2^4 %mod) %mod
        }
}

int main ()
{
   LL base, power, mod, ans ;
    // 2^5
        cin>>base>>power>>mod ;
        ans = Bigmod(base, power, mod) ;
        cout<<ans ;

    return 0 ;
}
