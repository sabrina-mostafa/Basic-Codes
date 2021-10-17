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

#define mx 2000
int mark[mx] ;
vector<int>primes ;

void sieve()
{
    int i, j ;
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

    /*cout<<"PR ~~~~~\n" ;
        for(i=0; i<primes.size(); i++)
            cout<<primes[i]<<" " ;
        cout<<NL ; */

}

void seg_sieve(LL a, LL b)
{
    LL x ;
    vector<bool> mark_2(b-a+5) ;
    //if(a==1) mark_2[ 0 ] = 1 ;
    for(auto p: primes)
    {
        if(p*1LL*p > b) break ;

        LL k = a/p ;
        if(a%p!=0) k++ ;
        LL i = k*p ;
        if(i == p) i+=p ;
        for( ; i<=b ; i+=p)
            mark_2 [ i-a ] = 1 ;
    }
    //int cnt = 0 ;
    //vector<LL>Primes_2 ;
    for(LL i=a; i<=b; i++)
    {
        if( mark_2[ i-a ]== 0 )
        {
            //Primes_2.PB(i) ;
            //cout<<i<<NL ;
            //cnt++ ;
            x = i ;
        }
    }
    //cout<<"Count : "<<cnt<<NL ;
    cout<<x<<NL ;
    /*
      for(int i=0; i<Primes_2.size(); i++)
            cout<<Primes_2[i]<<" " ;
            cout<<NL ; */
}

int main ()
{
    int t ;
    sieve() ;
    cin>>t ;
    while(t--)
    {
        LL a, b ;
        cin>>b ;
        if(b>1000)
            a = b-1000+1 ;   ///bcz it's proved that two consecutive prime numbe's difference is not less than 400(safe=1000)
        else a = 1 ;
        seg_sieve(a, b-1) ;
    }


    return 0 ;
}
