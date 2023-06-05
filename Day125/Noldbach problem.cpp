#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<bool> iprime(n + 1, true);
	vector<int> ans;
	for (int i = 2; i <= n; i++)
	{
		if (iprime[i])
		{
			ans.push_back(i);
			for (int j = i * i; j <= n; j = j + i)
			{
				iprime[j] = false;
			}
		}
	}
	std::vector<int>::iterator it;
	int c = 0;
	for (int i = 0; i < ans.size() - 1; i++)
	{
		int sum = ans[i] + ans[i + 1] + 1;
		it = std::find(ans.begin(), ans.end(), sum);
		if (it != ans.end())
			c++;
	}
	if (c >= k)
		cout << "YES"
			 << "\n";
	else
		cout << "NO"
			 << "\n";

	return 0;
}