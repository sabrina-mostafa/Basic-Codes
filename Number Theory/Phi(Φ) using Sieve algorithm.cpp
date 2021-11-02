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

#define lim 200
int phi[lim+5] ;
int PreCalculatioOf_Phi(int n)
{
        for(int i=1; i<=lim; i++) phi[i]=i ;
        for(int i=2; i<=lim; i++)
        {
                if( phi[i]==i )         // that means i is a Prime number
                {
                        phi[i]=i-1 ;            //  bcz number of Co-primes of a Prime number N equel or smaller than itself = N-1

                        for(int j=2*i; j<=lim; j+=i)
                        {
                                // Φ(n) = n* (1- (1/p1))*(1- (1/p2))*(1- (1/p3))* . . . . . . *(1- (1/pk))
                                phi[j] = ( phi[j] / i ) * (i-1) ;
                        }
                }
        }
        return phi[n] ;
}

int main ()
{
        int testCase, num ;
        cin>>testCase ;
    for(int i=1; i<=testCase; i++)
    {
            cin>>num ;
            cout<<PreCalculatioOf_Phi(num)<<endl ;

    }

    return 0 ;
}
