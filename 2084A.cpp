#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
      int n;
      cin >> n;

      if(n % 2 == 0){
        cout << "-1"<<"\n";
        continue;
      }
      cout << n <<" ";

      for(int i = 1; i < n;i++)
      {
        cout << i <<" ";
      }



    }



    return 0;
}