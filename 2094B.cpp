#include <iostream>
using namespace std;


int main()
{
    long t;cin>>t;

    while(t--)
    {
        long n,m,l,r;cin>>n>>m>>l>>r;

        int left = (l > -m) ? l : -m;
        int right = left + m;

        cout<<left<<" "<<right<<endl;
    }




    return 0;
}