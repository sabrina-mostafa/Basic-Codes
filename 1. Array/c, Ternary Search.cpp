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


///Complexity = O(2 log3(n) )

void Ternary_Search(int a[], int n, int x)
{
        int left=0, right=n-1, f=0 ;
        while(left<=right)
        {
                int m1=(left+ (right-left)/3) ;
                int m2=(right- (right-left)/3) ;

                if(a[m1]==x || a[m2]==x)
                {
                        f=1 ;
                        break ;
                }

                else if(x<a[m1])
                        right = m1-1 ;

                else if(x>a[m2])
                        left = m2+1 ;

                else
                {
                        left = m1+1 ;
                        right = m2-1 ;
                }
        }
        if(f==1) cout<<"Found"<<endl ;
        else cout<<"Not Found\n" ;
}



int main ()
{
    int t, n, m, i, j, k, x, y, z ;

        cin>>n ;
        int a[n+5], b[n+5], c[n+5] ;
        for(i=0; i<n; i++)
        {
                cin>>a[i] ;
        }
        cin>>x ;

        Ternary_Search(a, n, x) ;



    return 0 ;
}
