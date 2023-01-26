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

/*
vector<int>vec ;
pair<int, int>pr ;
set<int>st ;
vector<  pair< pair<char, int>, int>   >v ;
        for(auto i=v.begin(); i!=v.end(); i++)
        {
                cout<<i->F.F<<" "<<i->F.S<<" "<<i->S<<endl ;
        }
map<int, int>mp ;
map<char, int> :: iterator it ;
for(it = mp.begin() ; it!=mp.end(); it++)
        cout<<(*it).second<<NL ;
*/


/// ---for Unordered map---
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
/// ---for Setprecision---
/* cout<< fixed << showpoint << setprecision(9) << */

int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;





int main ()
{
        priority_queue<int> pq ;        // by default max_heap (decreasing order)
        pq.push(1) ;
        pq.push(2) ;
        pq.push(3) ;
        pq.push(4) ;

        while(!pq.empty())
        {
                cout<<pq.top()<<" " ;
                pq.pop() ;
        }
        cout<<endl<<"----------"<<endl ;

        priority_queue<int, vector<int>, greater<int>> pqq ;        // min_heap (increasing order)
        pqq.push(1) ;
        pqq.push(2) ;
        pqq.push(3) ;
        pqq.push(4) ;

        while(!pqq.empty())
        {
                cout<<pqq.top()<<" " ;
                pqq.pop() ;
        }
        cout<<endl ;



    return 0 ;
}
