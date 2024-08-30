#include <iostream>

#include <map>

using namespace std;

double sum, average;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	map<string, double> ratings =
	{
		{ "A+", 4.5 },

		{ "A0", 4.0 },

		{ "B+", 3.5 },

		{ "B0", 3.0 },

		{ "C+", 2.5 },

		{ "C0", 2.0 },

		{ "D+", 1.5 },

		{ "D0", 1.0 },

		{ "F", 0.0 },
	};

	int n = 20;

	while (n--)
	{
		string name, grade;

		double credit;

		cin >> name >> credit >> grade;

		if (grade == "P") continue;

		sum += credit;

		average += credit * ratings[grade];
	}

	cout << average / sum;
}