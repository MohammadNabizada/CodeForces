#include <iostream>
using namespace std;


int main()
{
   long t;cin>>t;

   while(t--)
   {
    long a,b;cin>>a>>b;

    cout<<b-a + (a==b && a==1)<<endl;
   }



    return 0;
}