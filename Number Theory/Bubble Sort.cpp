#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int N ;
    cin>>N ;
    int DATA[N+4] ;
    for(int K =1; K<=N; K++)
            cin>>DATA[K] ;

    for(int K =1; K<N; K++)
    {
            int PTR = 1 ;
            while(PTR<=(N-K))
            {
                    if(DATA[PTR]>DATA[PTR+1])
                        swap(DATA[PTR], DATA[PTR+1]) ;
                    PTR++ ;
            }
    }
    for(int K =1; K<=N; K++)
            cout<<DATA[K]<<" " ;
}
