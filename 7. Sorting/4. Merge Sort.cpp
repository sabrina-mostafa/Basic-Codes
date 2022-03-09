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



/*

Complexity :
Best Case : n Log(n)
Worst Case : n Log(n)

*/



void Merge(int a[], int LB, int mid, int UB)
{
    int i=LB, j=mid+1, k=LB, b[UB+5] ;

    while(i<=mid && j<=UB)              //  execute till the length of smaller sorted list
    {
        if(a[i]<a[j])
        {
            b[k++] = a[i] ;
            i++ ;
        }
        else
        {
            b[k++] = a[j] ;
            j++ ;
        }
    }


    // copying the leftover elements of the bigger sorted list
    if(i>mid)
    {
        while(j<=UB)
        {
            b[k++] = a[j] ;
            j++ ;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k++] = a[i] ;
            i++ ;
        }
    }


    //  replacing the values in the main array for this range only (LB to UB)
    for(i=LB; i<=UB; i++)
    {
            a[i] = b[i] ;
    }
}


void MergeSort(int a[], int LB, int UB)
{
    if(LB<UB)          //  That means there's more than 1 element, So we will divide the arr
    {
        int mid = (LB+UB)/2 ;

        MergeSort(a, LB, mid) ;                //  For 1st devided part
        MergeSort(a, mid+1, UB) ;                //  For 2nd devided part

        Merge(a, LB, mid, UB) ;         //  will merge two divided sorted list
    }
}



int main ()
{
    int i, j, n ;
    cout<<"Enter the number of elements : " ;
    cin>>n ;

    int a[n+5] ;
    cout<<"Enter "<<n<<" numbers : " ;

    for(i=0; i<n; i++)
        cin>>a[i] ;


    MergeSort(a, 0, n-1) ;


    cout<<"\nSorted List : " ;

    for(i=0; i<n; i++)
        cout<<a[i]<<" " ;

    cout<<endl ;


    return 0 ;

}
