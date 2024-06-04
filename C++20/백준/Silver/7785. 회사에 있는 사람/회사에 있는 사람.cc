#include<iostream>

#include<map>

using namespace std;

int main()
{
    std::cin.tie(0)->sync_with_stdio(0);
    
	int n;

	cin >> n;

	string user, status;

	map<string, string, greater<string>> accessLogs;

	while (n--)
	{
		cin >> user >> status;

		accessLogs[user] = status;
	}

	for (auto accessLog : accessLogs)
	{
		if (accessLog.second == "enter")
		{
			cout << accessLog.first << '\n';
		}
	}
}