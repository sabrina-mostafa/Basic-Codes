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



int main ()
{
    int num, x ;
    string s="1101" ;
    bitset<8>bi(s) ;
    
    cout<<"Binary representation of S in the given size = "<<bi<<endl ;
    cout<<"Last digit = "<<bi[0]<<endl ;          // indexing will be in reverse order
    
    x = bi.to_ulong() ;     //  Converts Binary to Decimal
    cout<<"Binary to Decimal : "<<x<<endl ;


    
    
    bitset<8>b ;

    cout<<"\nGet a number : " ;
    cin>>num ;

    b = num ;           // decimal to binary
    cout<<"Binary representation of "<<num<<" in the given size = "<<b<<endl ;

    x = b.size() ;          //  size
    cout<<"size = "<<x<<endl ;

    int c_one = b.count() ;                 // counting of 1
    cout<<"number of ONE = "<<c_one<<endl ;

    int c_zero = b.size() - b.count() ;                 // counting of 0
    cout<<"number of ZERO = "<<c_zero<<endl ;

    if( b.any()==true )
        cout<<"\nTRUE i.e. 1 is present\n" ;
    else
        cout<<"\nFALSE i.e. 1 is NOT present\n" ;

    if( b.none()==true )
        cout<<"\nTRUE i.e. 1 is NOT present\n" ;
    else
        cout<<"\nFALSE i.e. 1 is present\n" ;

    b <<= 2 ;               // leftshift = 2 unit
    cout<<"\nAfter leftshifting : "<<b<<endl ;
    b >>= 4 ;               // rightshift = 2 unit
    cout<<"After rightshifting : "<<b<<endl ;



    b.flip() ;
    cout<<"\nAfter fliping all the bits = "<<b<<endl ;

    b.set() ;               //  making every bit=1
    cout<<"b.set() = "<<b<<endl ;
    b.reset() ;             //  making every bit=0
    cout<<"bit.reset() = "<<b<<endl ;


    return 0 ;
}
