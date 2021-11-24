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


///Q : find the length of the Longest Common Subsequence(LCS) of two srings


#define mx 1005
int dpTable[mx][mx] ;

int DP(string s1, int i, string s2, int j)
{

    if(i==s1.size() || j==s2.size())
        return 0 ;

    if(dpTable[i][j] != -1) return dpTable[i][j] ;

    if(s1[i] == s2[j])
        return dpTable[i][j] = 1 + DP(s1, i+1, s2, j+1) ;
    else
        return dpTable[i][j] = max( DP(s1, i+1, s2, j), DP(s1, i, s2, j+1) ) ;          //compare fixing either i's position or j's position

}
int main ()
{
    int ans ;
    string  s1, s2;
    cout<<"Give two strings : " ;
    cin>>s1>>s2 ;

    memset(dpTable, -1, sizeof(dpTable) ) ;

    ans = DP(s1, 0, s2, 0) ;
    cout<<"ANS : "<<ans ;

    return 0 ;
}
