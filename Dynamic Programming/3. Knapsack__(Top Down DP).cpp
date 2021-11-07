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


//int dp [n+3][W+3]
int dp[103][1003] ;     ///  O(n^2)

int knapsack(int wt[], int val[], int W, int n)
{
    //Base Condition  >> Initialization (find the O/P by doing it raughly on table)
    //  n>>i  and W>>j
    
    ///FOR Initialization
    for(int i=0; i<n+1 ; i++)           
        for(int j=0; j<W+1; j++)
            if(i==0 || j==0)
                dp[i][j] = 0 ;

    ///FOR Choice Diagram
    for(int i=1; i<n+1; i++)
        for(int j=1; j<W+1; j++)
        {
            if(wt[i-1] <= j)       //  two choices
                dp[i][j] = max( (val[i-1] + dp[i-1][j-wt[i-1]] ), dp[i-1][j]) ;            //  max(picked , not picked)

            else if(wt[i-1] > j)
                dp[i][j] = dp[i-1][j] ;     // can't be picked
        }
    return dp[n][W] ;

}

int main ()
{
    int n, W ;
    cout<<"number of elements : " ;
    cin>>n ;
    cout<<"weight capasity : " ;
    cin>>W ;
    int wt[n+3], val[n+3] ;
    for(int i=0; i<n; i++)
    {
        cin>>wt[i]>>val[i] ;
    }
    int ans = knapsack(wt, val, W, n) ;
    cout<<"Maximum Profit : "<<ans ;

    return 0 ;
}
