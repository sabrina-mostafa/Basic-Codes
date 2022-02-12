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

/// ---for Unordered map---
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
/// ---for Setprecision---
/* cout<< fixed << showpoint << setprecision(9) << */

int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;

void Phi(int n)         // O( sqrt(n) )
{
        int ans=n ;
        for(int p=2; (LL) p*p<=n; p++)
        {
                if(n%p==0)
                {
                        while(n%p==0)
                                n/=p ;
                        //  phi(n) = n*(1- (1/p1)) * (1- (1/p2)) * . . . . . *(1- (1/pk))
                        ans = (ans/p) * (p-1) ;
                }
        }
        if(n>1) ans = (ans/n) * (n-1) ;
        cout<<"Number of Co-primes those are less than N is :\n"<<ans ;
}

int main ()
{
    int n ;
    cin>>n ;
    Phi(n) ;

    return 0 ;
}
