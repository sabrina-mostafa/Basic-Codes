
#include<bits/stdc++.h>
using namespace std ;


#define mx 200
#define inf INT_MAX
vector<int>dist(mx+3, inf) ;
vector< vector<pair<int, int>> >graph(mx+3) ;



int main ()
{
    int nodes, edges, weight, source ;
    cin>>nodes>>edges ;

    for(int i=1; i<=edges ; i++)
    {
            int u, v, w ;
            cin>>u>>v>>w ;
            graph[u].push_back( {v, w} ) ;
            graph[v].push_back( {u, w} )  ;
    }

    cin>>source ;
    dist[source] = 0 ;
    set<pair<int, int>> st ;
    st.insert( {0, source} ) ;          //  {wt, vertex}

    while( !st.empty())
    {
            auto x = *(st.begin()) ;
            st.erase(x) ;

            for(auto it : graph[x.second])
            {
                    if(dist[it.first] > dist[x.second] + it.second)
                    {
                            st.erase( {dist[it.first] , it.first} ) ;
                            dist[it.first] = dist[x.second] + it.second ;
                            st.insert( {dist[it.first] , it.first} ) ;
                    }
            }
    }

    for(int i=1; i<=nodes; i++)
    {
            if(dist[i]<inf)
            {
                    cout<<dist[i]<<" " ;
            }
            else cout<<-1<<" " ;
    }


    return 0 ;
}


/*
4 4
1 2 24
1 4 20
3 1 3
4 3 12
1
*/
