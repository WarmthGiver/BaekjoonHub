#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);

	std::cin.tie(0);

	std::string A, B;

	std::cin >> A >> B;

	for (int i = 3; i--;)
	{
		if (A[i] > B[i])
		{
			std::reverse(A.begin(), A.end());

			std::cout << A;
			
			break;
		}

		if (A[i] < B[i])
		{
			std::reverse(B.begin(), B.end());

			std::cout << B;

			break;
		}
	}
}