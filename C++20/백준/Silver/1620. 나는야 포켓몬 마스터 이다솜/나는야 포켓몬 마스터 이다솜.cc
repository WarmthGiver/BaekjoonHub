#include <iostream>

#include <string>

#include <unordered_map>

#include <vector>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, M, i{};

	cin >> N >> M;

	string pokemon;

	vector<string> pokemons(N + 1);

	unordered_map<string, int> pokedex;

	while (i++ < N)
	{
		cin >> pokemon;

		pokemons[i] = pokemon;

		pokedex[pokemon] = i;
	}

	while (M--)
	{
		cin >> pokemon;

		if (pokemon[0] <= '9')
		{
			cout << pokemons[stoi(pokemon)] << '\n';
		}

		else
		{
			cout << pokedex[pokemon] << '\n';
		}
	}
}