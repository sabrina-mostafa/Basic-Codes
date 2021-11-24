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


///determine the minimum nmbr of coins(each can be taken multiple times) that will be sum equal to K


#define mx 1005
int dpTable [mx][mx] ;

int DP(int coins[], int k, int n)
{

    if(n==0)
    {
        if(k==0) return 0 ;
        else return 1e9 ;
    }

    if(dpTable[n][k] != -1) return dpTable[n][k] ;

    if(coins[n-1]<=k) return dpTable[n][k] =  min(  ( 1 + DP(coins, k-coins[n-1], n) ),  ( 0 + DP(coins, k, n-1) )  ) ;
    else return dpTable[n][k] = 0 + DP(coins, k, n-1) ;

}

int main ()
{
    int n, k, ans ;
    cout<<"Number of Coins : " ;
    cin>>n ;
    cout<<"Target Sum : " ;
    cin>>k ;

    int coins[mx] ;
    for(int i=0; i<n; i++)
        cin>>coins[i] ;

    memset(dpTable, -1, sizeof(dpTable) ) ;

    ans = DP( coins, k, n ) ;
    if(ans>=1e9) ans = 0 ;
    cout<<"ANS : "<<ans ;

    return 0 ;
}


/*

4
8
1 2 3 4

*/
