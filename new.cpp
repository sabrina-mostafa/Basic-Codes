///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///


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


int main ()
{
    LL t, n, i, j,q,l,r, k, LB, UP, x, y, u, sum=0, f=0, flag=0, cnt=0, mx = -1000000000, mn = 1000000000 ;
    cin>>n>>q ;
    vector<LL>a(n+2) ;
    for(i=1; i<=n; i++)
        cin>>a[i] ;
    sort(a.begin()+1, a.begin() +n+1) ;
    //for(i=1; i<=n; i++)
        //cout<<a[i]<<" " ;
        //cout<<endl ;
    for(i=1; i<=q; i++)
    {
        cin>>x ;
        if(x==1)
        {
            cin>>y ;
            sum+=y ;
        }
        else
        {
            cin>>l>>r>>k ;
            l+=sum ;
            r+=sum ;
            LB = lower_bound(a.begin(), a.end(), l) - a.begin()  ;
            UP = upper_bound(a.begin(), a.end(), r) - a.begin()  ;
            u = UP-LB ;
            //cout<<"LB : "<<LB<<endl ;
           // cout<<"UP : "<<UP<<endl ;
           // cout<<"U : "<<u<<endl ;
            if( u>=k && (LB+k-1) < UP ) cout<<a[LB+k-1]-sum<<endl ;
            else cout<<-1<<endl ;
        }
    }


    return 0 ;
}
