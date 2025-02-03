///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


///         Originator : Sabrina Mostafa
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;

#define   FastRead      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   ULL               unsigned long long
#define   LL                  long long
#define   ST                  string
#define   F                    first
#define   S                    second
#define   PB                 push_back
#define   MP                make_pair
#define   pi                   acos(-1.0)
#define   NL                 "\n"
#define    _                    " "







int BinaryExponentiation(int base, int power, int mod)
{
    if(power==0)
        return 1 ;

    int ans = BinaryExponentiation(base, power/2, mod) ;

    if(power&1)     // IF POWER IS ODD
    {
        return ((base * (ans * ans * 1LL)%mod) %mod) ;      // if power = a^5 >>  a * a^2 * a^2
    }
    else
    {
        return ((ans * ans * 1LL)%mod) ;        // if power = a^4 >>  a^2 * a^2
    }
}



int main ()
{
    int base, power, mod ;
    cin>>base>>power>>mod ;
    int ans ;
    ans = BinaryExponentiation(base, power, mod) ;

    cout<<ans<<NL ;


    return 0 ;
}

/*
I/P: 2 13 7
O/P: 2
*/

