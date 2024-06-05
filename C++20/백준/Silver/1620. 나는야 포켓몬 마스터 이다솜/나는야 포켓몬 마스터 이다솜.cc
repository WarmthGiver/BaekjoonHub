#include <iostream>

#include <unordered_map>

#include <string>

#include <vector>

using namespace std;

vector<string> pokemons;

unordered_map<string, int> pokedex;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, M, i{};

	cin >> N >> M;

	pokemons.reserve(N + 1);

	pokedex.reserve(N);

	string pokemon;

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