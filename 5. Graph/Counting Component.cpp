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

int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;


#define lim 100000+5
vector<int>graph[lim] ;
int visited[lim] ;



void DFS(int src)
{
    visited[src]=1 ;

    for(int i=0; i<graph[src].size(); i++)
    {
        if(visited[  graph[src][i]  ] == 0)
        {
            DFS( graph[src][i] ) ;
        }
    }
}



int main()
{
    int  nodes, edges, cnt=0 ;
    cin>>nodes>>edges ;

    for(int i=1; i<=edges; i++)
    {
        int u, v ;
        cin>>u>>v ;
        graph[u].push_back(v) ;
        graph[v].PB(u) ;
    }

    for(int i=1; i<=nodes; i++)
    {
        if( visited[i]==0 )
        {
                DFS(i) ;
                cnt++ ;         // each DFS call dtermines a single component
        }
    }

    cout<<"Number of Component : "<<cnt<<endl ;

    return 0 ;
}
