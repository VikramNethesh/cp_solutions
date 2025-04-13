#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> matrix[i][j];

        vector<int> numbers;
        int sum = 0;

        // First row
        for (int i = 0; i < n; ++i) {
            numbers.push_back(matrix[0][i]);
            sum += matrix[0][i];
        }

        for (int i = 1; i < n; ++i) {
            numbers.push_back(matrix[i][n - 1]);
            sum += matrix[i][n - 1];
        }

        int first_elem = (2 * n) * (2 * n + 1) / 2 - sum;

        cout << first_elem << ' ';
        for (int elem : numbers)
            cout << elem << ' ';
        cout << '\n';
    }

    return 0;
}
