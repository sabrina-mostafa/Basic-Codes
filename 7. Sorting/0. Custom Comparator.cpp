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




bool comp(int a, int b)
{
        cout<<"Check : "<<a<<" "<<b<<endl ;
        if(a%10 < b%10)
                cout<<"T\n" ;
        else cout<<"F\n" ;
        return a%10 < b%10 ;
}


int main ()
{
    int t, n, m, i, j, k, x, y, z, sum=0, l, r, f=0, flag=0, cnt=0, mx = INT_MIN , mn = INT_MAX ;

        cin>>n ;
         vector<int>vec(n) ;
        for(auto &i : vec)
                cin>>i ;

        sort(vec.begin(), vec.end(), comp) ;

        for(auto i : vec)
                cout<<i<<" " ;


    return 0 ;
}

/*
5
74 92 79 60 53
*/
