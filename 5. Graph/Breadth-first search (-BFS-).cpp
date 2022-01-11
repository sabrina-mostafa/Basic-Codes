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

/// ---for Unordered map---
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
/// ---for Setprecision---
/* cout<< fixed << showpoint << setprecision(9) << */

int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;


///~~~~~~~~~~~~~~~~~~~ SSSP( Single Source Shortest Path ) ~~~~~~~~~~~~~~~~~~~~



#define mx 200
vector<int>graph[mx+3] ;
bool visited[mx+3] ;   //will mark a node as visited or not
int dist[mx+3] ;                //store the distance from source to each node
int parent[mx+3] ;



void BFS(int source)   // for unweighted or N weighted Graph to detect the minimum distance from Soure to Target
{
        queue<int> Q ;
        //   initialization
        Q.push(source) ;
        visited[source] = 1 ;   //  as pushed in Queue, so it's visited
        dist[source] = 0 ;   //  source's level or distance is always 0
        parent[source] = source ;

        while( !Q.empty() )
        {
                int WorkingNode = Q.front() ;   //  will work with the front element of Q
                Q.pop() ;       // when we are done selecting the workingNOde we have to pop it out from the Queue
                for(int i=0; i<graph[ WorkingNode ].size(); i++)  //  visiting all adjacent nodes of current WorkingNode
                {
                        int AdjacentNode = graph[ WorkingNode ][i] ;
                        if( visited[ AdjacentNode ] == 0)    //  iff it's not visited
                        {
                                Q.push( AdjacentNode ) ;
                                visited[ AdjacentNode ] = 1 ;   //  as pushed in Queue, so it's visited
                                dist[ AdjacentNode ] = dist[ WorkingNode ] + 1 ;  // for unweighted>>(+=1) and for N weighted>>(+=N)
                                parent[AdjacentNode ] = WorkingNode ;
                        }
                }
        }
}



int main ()
{
    int nodes, edges, source ;
    cin>>nodes>>edges ;   //  number of nodes and edges

    for(int i=1; i<=edges ; i++)
    {
            int u, v ;    //  nodes of each edges
            cin>>u>>v ;
            graph[u].PB(v) ;   //  as they are adjacent to each other
            graph[v].PB(u) ;   //  as they are adjacent to each other
    }
    cin>>source ;

    BFS(source) ;       //for BFS Queue data structure is used

    cout<<"From Source Node "<<source<<NL ;
    for(int i=1; i<=nodes; i++)
            cout<<"Distance of node  "<<i<<" is : "<<dist[i]<<NL ;
            cout<<NL ;
    for(int i=1; i<=nodes; i++)
            cout<<"Parent of  node "<<i<<" is : "<<parent[i]<<NL ;


    return 0 ;
}


/*
7 9
1 2
1 3
1 7
2 3
3 7
2 4
4 5
3 6
5 6
1
*/
