#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

struct Member
{
	int age;

	string name;

	bool operator<(const Member& right) const
	{
		return age < right.age;
	}
};

vector<Member> members;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(NULL);

	cout.tie(NULL);

	int n;

	cin >> n;

	while (n--)
	{
		Member member;

		cin >> member.age >> member.name;

		members.push_back(member);
	}

	stable_sort(members.begin(), members.end());

	for (auto member : members)
	{
		cout << member.age << ' ' << member.name << '\n';
	}
}