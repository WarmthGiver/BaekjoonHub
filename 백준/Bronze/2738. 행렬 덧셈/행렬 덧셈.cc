#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    cin.tie(0);

    int N, M, i, j, A[100][100], b;

    cin >> N >> M;

    for (i = N; i--;)
    {
        for (j = M; j--;)
        {
            cin >> A[i][j];
        }
    }

    for (i = N; i--;)
    {
        for (j = M; j--;)
        {
            cin >> b;

            cout << A[i][j] + b << ' ';
        }

        cout << '\n';
    }
}