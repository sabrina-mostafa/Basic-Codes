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




bool activityCompare(pair<int, int>p1 , pair<int, int>p2)
{
    return (p1.second < p2.second) ;
}


void MaxActivities(vector< pair<int, int> >v)
{
    sort(v.begin(), v.end() , activityCompare) ;

    cout << "Activities selected are:\n";
    int i = 0 ;
    cout << "(" << v[i].first<< ", " << v[i].second << ")\n";           // first one can be selected anyways

    int c = 1 ;
    for(int j=1 ; j<v.size() ; j++)
    {
        if (v[j].first >= v[i].second)          // if the current work's(j) strt time finishes before the previous works's(i) end time
        {
            c++ ;
            cout <<"(" << v[j].first << ", "<<v[j].second << ")\n";
            i=j ;
        }
    }

    cout<<"Maximum number of activities performed is "<<c ;
}



int main()
{
    int n, i, x, y ;

    cout<<"Number of activities : " ;
    cin>>n ;

   vector<pair<int, int>> v ;

   for(i=1; i<=n; i++)
   {
           cin>>x>>y ;
           v.push_back({x, y}) ;
   }

    MaxActivities(v) ;


    return 0;
}
