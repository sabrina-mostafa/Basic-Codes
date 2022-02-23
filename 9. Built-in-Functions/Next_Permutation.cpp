///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */




#include<bits/stdc++.h>
using namespace std ;


 /// Generate all premutaions of an Array/Vector

int main ()
{
    int n, i, ans ;
    cin>>n ;
    vector<int>vec ;

    for(i=1; i<=n; i++)
        vec.push_back(i) ;

    for(i=n-1; i>1; i--)         
       n*=i ;           // number of permutation can be made from n elements

    for(auto x : vec)
        cout<<x<<" " ;
    cout<<endl ;
    
    for(i=2; i<=n; i++)
    {

        next_permutation(vec.begin(), vec.end() ) ;     // gives the next JUST Greater sequence of premutaion to the Container(Vector/Array)

        for(auto x : vec)
            cout<<x<<" " ;
        cout<<endl ;
    }


    return 0 ;
}
