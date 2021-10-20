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

bool comp(pair<int, int>a  ,  pair<int, int>b)  ///compares after swapping
{
        if(a.F != b.F)  return a.F < b.F ;   //simply return the required condition
        else  return a.S > b.S ;
}

///another Way
/*
bool comp(pair<int, int>a  ,  pair<int, int>b)  ///compares after swapping
{
        if(a.F != b.F)
        {
                if(a.F < b.F) return true ;    // if fulfills the requirement after swapping TRUE returns and the swap will be accepted
                else return false ;           // otherwise FALSE returns and swap doesn't happen
        }
        else
        {
                if(a.S > b.S) return true ;
                else return false ;
        }
} 
*/

int main ()
{
        int n ;
        cin>>n ;
    vector< pair<int, int>  > vec(n) ;
    for(int i=0; i<n; i++)
        cin>>vec[i].F>>vec[i].S ;

        sort(vec.begin(), vec.end(), comp) ;   //(Requirement) F >> Assending  nd S >> Decending
        cout<<"After sorting : "<<NL ;
    for(int i=0; i<n; i++)
        cout<<vec[i].F<<_<<vec[i].S<<NL ;


    return 0 ;
}
