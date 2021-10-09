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

///for Unordered map
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/


int main ()
{
    LL t, n, i, j, k, x, y, z, sum=0, r, f, cnt=0, mx = -1000000000, mn = 1000000000 ;
    string s, s1, s2 ;
    cin>>n>>k ;
    for(i=0; i<n; i++)
    {
        set<char>st ;
        cin>>s ;
        for(j=0; j<s.size(); j++)
        {
            if(( (s[j]-'0') % 10) <=k ) st.insert(s[j]) ;
        }
        if(st.size() == (k+1)) cnt++ ;
    }
    cout<<cnt ;

    return 0 ;
}
