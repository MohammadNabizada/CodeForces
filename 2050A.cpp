#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	long t; cin >> t;
	while (t--)
	{

		int n, m; cin >> n >> m;
		vector<string> words(n);
		int res = 0;
		int j = 1;
		for (int i = 0; i < n; i++) {
			cin >> words[i];
			if (m - words[i].size() > 0)
			{
				
				m -= words[i].size();
				res++;
			}

		}
		cout << res << endl;


	}




	return 0;
}



#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        long x(0);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            if(s.size() <= m){x = p + 1; m -= s.size();}
            else{m = 0;}
        }

        std::cout << x << std::endl;
    }

}