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



int knapsack(int wt[], int val[], int W, int n)      // O(2^n)
{
        //Base Condition
        if(n==0 || W==0)     // think of the smallest valid I/P
                return 0 ;     // max profit = 0 form the I/P


        if(wt[n-1] <= W)       //  two choices
                return max( (val[n-1] + knapsack(wt , val ,  W-wt[n-1] , n-1) ), knapsack(wt, val, W, n-1) ) ;     //  max(picked , not picked)

        else if(wt[n-1] > W)
                return knapsack(wt, val, W, n-1) ;     // can't be picked
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
    cout<<ans ;

    return 0 ;
}
