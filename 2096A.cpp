#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
     long t;
     cin>>t;

     while(t--)
     {
         long n;cin>>n;
         string str;cin>>str;
         
         long mn = 1;
         long mx = n;
         vector<long> ve(n);
         for(int i = str.length()-1;i>=0;i--)
         {
              ve[i+1]= (str[i] == '<') ? (mn++) : (mx--);
         }

         ve[0] = mx;

         for(int i=0;i<ve.size();i++)
            cout<<ve[i]<<" ";
         cout<<endl;
  
     }






    return 0;
}