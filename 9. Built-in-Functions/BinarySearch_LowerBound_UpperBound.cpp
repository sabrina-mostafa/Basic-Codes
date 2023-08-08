///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


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



/*

NOTES :

Number ta sorted array/vector e place por(jodi na thake) 
lower bound = oi number ta shoho er choto joto gula number ache er shb index er last index pabo
                                                    or
              last joto index porjnto oi number ta thkte parbe (after orting)

upper bound = oi number tar chaite boro number jei index theke strt hbe
              (SAFER to USE in Problems. number ta exit kore ki kore na oi jhamela nai)


*/





int main ()
{
    int t, n, i, j, k, x, y, z, sum=0, r, f=0, flag=0, cnt=0, mx = -1000000000, mn = 1000000000 ;
    vector <int> v = {1, 3, 3, 3, 4, 5, 6, 6, 8, 9, 12} ;
    bool ans = binary_search(v.begin(), v.end(), 88) ;
    cout<<ans<<endl  ;
    int LB = lower_bound(v.begin(), v.end(), 6)- v.begin() ;  ///wil return the 1st index that is (gtr.eq.)>= 6
    cout<<LB<<endl ;
    int UP = upper_bound(v.begin(), v.end(), 6) - v.begin() ;  ///will return the 1st index that is (gtr)> 6
    cout<<UP<<endl ;
    
    /*
    for Set >>
    auto it = st.lower_bound(a[i]); 
    or 
    auto it = st.lower_bound(value);
        //  Returns the ADDRESS of immediate lower value of a[i] 
            so the value = *it
     prev(it) returns the previous address of *it
     prev(it) works same as like it--
    */
    
    
    return 0 ;
}
