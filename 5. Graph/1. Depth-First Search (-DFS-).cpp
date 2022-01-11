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



///  DFS is used to traverse a graph ( based on STACK Data Structure )


#define lim 5
vector<int> graph [lim+2] ;       //  adjacency list to represent a graph
bool visited[lim+2] ;


void DFS(int src)
{
    visited[src] = 1 ;      // current node marked as visited

    for(int i=0; i<graph[src].size(); i++)
    {
        int node = graph[src][i]   ;

        if( visited[node]  == 0)
        {
            DFS(node) ;         // do the same for this new unvisited node
        }
    }
}



int main ()
{
    int edges, nodes, u, v, source ;
    cout<<"Enter the number of nodes and edges : " ;
    cin>>nodes>>edges ;

    for(int i=1; i<=edges; i++)
    {
        cout<<"enter a edge : " ;
        cin>>u>>v ;

        graph[u].push_back(v) ;
        graph[v].PB(u) ;
    }
    
    cout<<"Enter the source : " ;
    cin>>source ;

    DFS(source) ;
    
    for(int i=1; i<=lim; i++)           //  cheking if all nodes are visited or not
        cout<<visited[i]<<" " ;


    return 0 ;
}
