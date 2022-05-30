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




bool isSafe(int** arr, int x, int y, int n)
{
    for(int row=0; row<x; row++)        // for each column
    {
        if(arr[row][y]==1)
            return false ;
    }

    int row = x ;
    int col = y ;
    while(row>=0 && col>=0)     // for left diagonal
    {
        if(arr[row][col]==1)
            return false ;

        row-- ;
        col-- ;
    }

    row = x ;
    col = y ;
    while(row>=0 && col<n)      // for right diagonal
    {
        if(arr[row][col]==1)
            return false ;

        row-- ;
        col++ ;
    }

    return true ;
}



bool nQueen(int** arr, int row, int n)
{
    if(row>=n)
        return true ;

    for(int col=0; col<n; col++)
    {
        if( isSafe(arr, row, col, n) )
        {
            arr[row][col] = 1 ;

            if( nQueen(arr, row+1, n) )
                return true ;

                arr[row][col] = 0 ;         //  backtracking
        }
    }

    return false ;
}



int main ()
{
    //FastRead ;

    int n ;
    cout<<"what's the dimension length? : " ;
    cin>>n ;


    int** arr = new int* [n+5] ;
    for(int i=0; i<n; i++)
    {
            arr[i] = new int[n+5] ;
            for(int j=0; j<n; j++)
            {
                    arr[i][j] = 0 ;
            }
    }


    if( nQueen(arr , 0, n) )
    {
            for(int i=0; i<n; i++)
            {
                    for(int j=0; j<n; j++)
                    {
                            cout<<arr[i][j]<<" " ;
                    }
                    cout<<endl ;
            }
    }


    return 0 ;
}
