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


int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;









/*

in a typical computer architecture,
any digit of BOOLEAN takes memory space of 1 byte = 8 bits
WHEREAS,
every digit of BITSET takes memory space of 1 bit only
So basically by using BITSET we can OPTIMIZE the uses of MEMORY SPACE.

*/


#define max_num 10000
bitset<max_num>mark ;    ///indexes of MARK represents the numbers


void sieve()
{
        int i, j ;

        mark.set() ;            // all digit = 1      i.e. let all number are prime from 1 to 10000

        mark[0] = mark[1] = 0 ;         //  as 0 and 1 are not prime number

        for(i=4; i<=max_num; i+=2)
                mark[i] = 0 ;        // all are divisible by 2

        for(i=3; i<=max_num; i+=2)
        {
                if(mark[i]==1)
                {
                        for(j=i*i; j<=max_num; j+= 2*i)
                                mark[j] = 0 ;
                }
        }
}


int main ()
{
    int n ;

    sieve() ;

    cout<<"Enter a number to check weather it is a prime number or not? : " ;
    cin>>n ;

    if(mark[n]==1)
        cout<<"\nPrime number. " ;
    else
        cout<<"\nNot a prime number. " ;


  
    return 0 ;
}
