#include<bits/stdc++.h>
using namespace std ;
#define mx 40000
int mark[40000] ;

int main()
{
    int n, i, j ;
    int primes[40000], x=1 ;
    cin>>n ;
    mark[0] =1 ;
    mark[1] = 1 ;
    for(i=4; i*i<=mx; i+=2)
        mark[i] = 1 ;

    for(i=3; i*i<=mx; i+=2)
    {
        if(mark[i]==0)
        {
            for(j=i*i; j<=mx; j+= 2*i )
            {
                mark[j] = 1 ;
            }
        }
    }

    /*
    for(i=0; i<=mx; i++)
     {
             if(mark[i]==0) primes[x++]=i ;
     }
     for(i=1; i<x; i++)
             cout<<primes[i]<<" " ;
             */

             if(mark[n]==0) cout<<"Prime number " ;
             else cout<<"Not a prime number " ;
}
