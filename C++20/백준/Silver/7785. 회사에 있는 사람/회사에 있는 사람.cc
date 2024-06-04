#include<iostream>

#include<map>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    
	int n;

	cin >> n;

	string userName, userStatus;

	map<string, bool, greater<string>> accessUsers;

	while (n--)
	{
		cin >> userName >> userStatus;

		accessUsers[userName] = userStatus[0] == 'e';
	}

	for (auto accessUser : accessUsers)
	{
		if (accessUser.second)
		{
			cout << accessUser.first << '\n';
		}
	}
}