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
bool mark[lim+5] ;
vector<int>primes ;
void sieve()
{

        mark[0]=1, mark[1]=1, primes.PB(2) ;
        for(int i=4; i<=lim; i+=2) mark[i]=1 ;
        for(int i=3; i<=lim; i+=2)
        {
                if(!mark[i])
                {
                        primes.PB(i) ;
                        for(int j=i*i; j<=lim; j+=2*i)
                        {
                                 mark[j]=1 ;
                        }
                }
        }
}

void SOD(int n)
{
        int ans = 1 ;
        for(int i=0; i<primes.size() && primes[i]*primes[i]<=n; i++)  // prime factorization
        {
                if(n%primes[i]==0)
                {
                        int power=0 ;
                        while(n%primes[i]==0)
                        {
                                power++ ;
                                n/=primes[i] ;
                        }
                         /// ar^0+ar^1+ar^2+ar^3+. . . +ar*n = (a*(r^n+1  -1)) /(r-1)
                       int up = 1* ( pow(primes[i], power+1) - 1 ) ;     //a = 1
                       int down = primes[i]-1 ;
                        ans = (up/down) ;
                }
        }
        if(n>1) ans *= (1*(pow(n, 1+1) -1) )/(n-1) ;
        cout<<"Sum of Divisors : "<<ans<<endl ;
}

int main ()
{
    sieve() ;
    int n ;
    cin>> n ;
    SOD(n) ;

    return 0 ;
}
