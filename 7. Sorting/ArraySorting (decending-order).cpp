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

#define YES cout << "YES"<< endl ;
#define NO cout << "NO" << endl ;
#define Yes cout << "Yes" << endl ;
#define No cout << "No" << endl ;
#define yes cout << "yes" << endl ;
#define no cout << "no" << endl ;


int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;




int main ()
{
    int n, i, j ;

    cin>>n ;

    int a[n+5] ;

    for(i=1; i<=n; i++)
        cin>>a[i] ;

        sort(a+1, a+1+n, greater<int>()) ;              // sorting in decreasing order

        cout<<"\nThe array in decending order : " ;
        for(i=1; i<=n; i++)
        cout<<a[i]<<" " ;


    return 0 ;
}
