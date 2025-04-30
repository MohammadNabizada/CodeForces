#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int x,y,a;
        cin>>x>>y>>a;

        int d = a %(x+y);
        if(x <= d)
            cout << "Yes"<<endl;
        else
          cout << "NO"<<endl;
    }




    return 0;
}