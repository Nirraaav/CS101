#include <simplecpp>

main_program {
    long long int n;
    cin >> n;
    long long int a[n][n];
    for (long long int i = 0; i < n; i++) {
        for (long long int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    long long int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        for (long long int j = left; j <= right; j++) {
            cout << a[top][j] << " ";
        }
        top++;

        for (long long int i = top; i <= bottom; i++) {
            cout << a[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (long long int j = right; j >= left; j--) {
                cout << a[bottom][j] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (long long int i = bottom; i >= top; i--) {
                cout << a[i][left] << " ";
            }
            left++;
        }
    }
    cout << "\n";
}
