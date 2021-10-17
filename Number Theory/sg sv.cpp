///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


#include<bits/stdc++.h>
using namespace std ;

#define  Fast      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ULL       unsigned long long
#define  LL         long long
#define  NL        "\n"
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

#define mx 65540
int mark[mx+5] ;
vector<int>primes ;

void sieve()
{
    LL i, j ;
    mark[0] = mark[1] = 1, primes.PB(2) ;

    for(i=4; i<=mx; i+=2) mark[i]=1 ;
    for(i=3; i<=mx; i+=2)
    {
        if(mark[i]==0)
        {
            primes.PB(i) ;
            for(j=i*i; j<=mx; j+=2*i )
            {
                mark[j] = 1 ;
            }
        }
    }

  /*  cout<<"PR ~~~~~\n" ;
    for(i=0; i<primes.size(); i++)
        cout<<primes[i]<<" " ;
    cout<<NL ;  */

}


int main ()
{
    sieve() ;
    int n, cnt ;
    cin>>n ;
    for(int i=0; i<primes.size() && primes[i]*primes[i]<=n; i++)
    {
        if(n%primes[i]==0)
        {
            cnt=0 ;
            while(n%primes[i]==0)
            {
                n/= primes[i] ;
                cnt++ ;
            }
            cout<< primes[i]<<"^"<<cnt<<" " ;
        }
    }
    if(n!=1) cout<<n<<"^"<<1 ;   ///bcz there can be only one prime that is greater than sqrt(n)

    return 0 ;
}
