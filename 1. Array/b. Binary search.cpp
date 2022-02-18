#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int N, ITEM, K, LOC ;
    cin>>N>>ITEM ;
    
    int DATA[N+4] ;
    
    for(K=1; K<=N; K++)
       cin>>DATA[K] ;
    
   int BEG = 1, END = N, MID = (END+BEG)/2 ;
    
   while(BEG<=END && DATA[MID]!=ITEM)
   {
           if(ITEM<DATA[MID]) END = MID-1 ;
           else BEG = MID+1 ;
           MID = (BEG + END)/2 ;
   }
    
    
   if(DATA[MID]==ITEM)
        LOC = MID ;
    
   else LOC = NULL ;
    
   cout<<"Location : "<<LOC ;

}
