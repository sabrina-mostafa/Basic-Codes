#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],b[100][100],c[100][100]= {0},row,col,i,j,row1,col1;

    cout << "Enter size of row and column of first matrix: ";
    cin >> row >> col;

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter size of row and column of second matrix: ";
    cin >> row1 >> col1;

    for(i=1; i<=row1; i++)
    {
        for(j=1; j<=col1; j++)
        {
            cin >> b[i][j];
        }
    }

    for(i=1; i<=row; i++) /// product of two matrices
    {
        for(j=1; j<=col1; j++)
        {
            c[i][j]=0;
            for(int x=1; x<=row; x++)
            {
                c[i][j] = c[i][j]+(a[i][x] * b[x][j]);
            }
        }

    }


    cout << "Product of first and second matrix: " << endl;

    for(i=1; i<=row; i++) /// printing matrix c
    {
        for(j=1; j<=col1; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}


/// result will have same number of rows as 1st matrix and same no. of column as 2nd matrix.
