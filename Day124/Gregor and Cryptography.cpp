#include <bits/stdc++.h>
using namespace std;
void fav(int n){
	cout<<n/2<<" "<<n<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
	cin >> t;
	while(t--){
		long long num;
		cin>>num;
		fav(--num);
	}
	return 0;
}