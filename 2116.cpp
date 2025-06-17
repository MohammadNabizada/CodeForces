#include <iostream>
using namespace std;

int main()
{
      long t;cin>>t;

      while(t--){
        long a,b,c,d;cin>>a>>b>>c>>d;
        long x = (a < c ? a : c);
        long y = (b < d ? b : d);
        cout << (x >= y ? "Gellyfish":"Flower")<<endl;
      }



    return 0;
}