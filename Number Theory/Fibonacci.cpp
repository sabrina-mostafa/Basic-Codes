///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///

#include<bits/stdc++.h>
using namespace std ;

#define  Fast      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ULL       unsigned long long
#define  LL         long long
#define ST          string
#define  F           first
#define  S           second
#define  PB        push_back
#define  MP       make_pair
#define  pi         acos(-1.0)

int Fib(int n)
{
    if(n==1)
        return 0 ;
    else if(n==2)
        return 1 ;
    return Fib(n-1)+ Fib(n-2) ;

}

int main ()
{
    int n, f, f1=0, f2=1 ;
    cin>>n ;

    cout<<"non-recursive way ~~~\n" ;
    if(n==1) cout<<0 ;
    else if(n==2) cout<<0<<" "<<1 ;
    else
    {
        cout<<0<<" "<<1<< " " ;
        for(int i=3; i<=n; i++)
        {
            f=f1+f2 ;
            cout<<f<<" ";
            f1=f2 ;
            f2=f ;
        }
        //cout<<"\nnth : "<<f<<endl ;
    }


    cout<<"\nRecursive way ~~~\n" ;
    for(int i =1; i<=n; i++)
    {
        int x = Fib(i) ;
        cout<<x<<" " ;
    }


    return 0 ;
}
