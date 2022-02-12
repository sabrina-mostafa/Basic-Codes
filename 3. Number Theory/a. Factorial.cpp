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

int Fac(int n)
{
        if(n==0 || n==1) return n ;
        else {
                 return  n*Fac(n-1) ;
        }
}
int main ()
{
    int t, n, i, fac=1, j, k, x, y, z, sum=0, r, f=0, flag=0, cnt=0, mx = -1000000000, mn = 1000000000 ;
    cin>>n ;
    cout<<"in non-Recursive Way"<<endl ;
    for(i=1; i<=n; i++)
        fac*=i ;
    cout<<"Factorial = "<<fac<<endl ;

    cout<<"in Recursive Way"<<endl ;
    x = Fac(n) ;
    cout<<"Factorial = "<<x<<endl ;

    return 0 ;
}
