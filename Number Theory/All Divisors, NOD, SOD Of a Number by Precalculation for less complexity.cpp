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

#define lim 1000005
vector<int> divs[lim+3] ;
int NumOfDivs[lim+3] ;
int SumOfDivs[lim+3] ;
void PreCalculation()           // Complexity >> N*Log2(n)
{
    for(int div=1; div<=lim; div++)
    {
        for(int num=div ; num<=lim; num+=div)
        {
            divs[num].push_back(div) ;      //  pushing a specific divisor to all its multiples
            NumOfDivs[num]++ ;
            SumOfDivs[num] += div ;
        }
    }
}

void divisors(int n)
{
        cout<<"Divisors : \n" ;
    for(int i=0; i<divs[n].size(); i++)
    {
        cout<<divs[n][i]<<" " ;
    }
    cout<<"\nNumber of Divisors : "<<NumOfDivs[n]<<endl ;
    cout<<"Sum of Divisors : "<<SumOfDivs[n]<<endl ;
}


int main ()
{
    PreCalculation() ;

    int t, n ;
    t = lim ;
    while(t--)
    {
        cin>>n ;
        divisors(n) ;
    }

    return 0 ;
}
