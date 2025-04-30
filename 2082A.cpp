#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main()
{


    int t;
    cin >> t;

    while(t--)
    {
     long n, m;

     cin>>n>>m;

     vector<string> matrix(n);

     for(long row = 0; row < n;row++)
     {
        cin>>matrix[row];
     }

     int odd_row = 0;
     for(auto row : matrix)
     {
       long count = 0;
       for(char ch : row)
       {
        count += ch - '0';
       }
       odd_row += (count % 2);
     }

     int odd_col = 0;
     for(long col = 0; col < m;col++)
     {
        int count_col = 0;

        for(int row = 0;row < n;row++)
        {
            count_col += (matrix[m][n] - '0');
        }
        odd_col += count_col % 2;
     }

       cout << max(odd_row,odd_col);
    }




    return 0;
}