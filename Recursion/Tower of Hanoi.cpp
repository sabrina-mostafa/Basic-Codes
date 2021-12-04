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
/*
Large primes : 479001599 , 1979339339 , 1000163491 , 1000173893 , 1423165193 , 1423172537 , 2513475829
Small primes : 2 , 3 , 5 , 7, 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47 , 53 , 59 , 61 , 67 , 71 , 73 , 79 , 83 , 89 , 97 , 101
*/

int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;


/*
        Complexity = O(2^n - 1)


If u hv only one disk simply move it from A to C.

Otherwise :
        i)  move n-1 disks from A to B and leftover 1 disk from A to C.
       ii)  then move the n-1 disks from B to C.

*/

void TOH(int n, char BEG, char AUX, char END)
{
    if(n==1)
    {
        cout<<"Move disk no. "<<n<<"    from "<<BEG<<" to "<<END<<endl ;         // if there's only 1 disk on Source then move it directly to Destination
        return ;
    }
    TOH(n-1, BEG, END, AUX) ;      // .  .  .  .  .  .  . (i)
    cout<<"Move disk no. "<<n<<"    from "<<BEG<<" to "<<END<<endl ;
    TOH(n-1, AUX, BEG,END) ;     // .  .  .  .  .  . (ii)
}

int main ()
{
    int disks, Begin='A', Auxilary='B', End='C' ;
    cout<<"Number of Disks : " ;
    cin>>disks ;
    TOH(disks, Begin, Auxilary, End) ;

    return 0 ;
}
