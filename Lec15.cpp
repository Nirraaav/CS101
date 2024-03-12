#include <simplecpp>

int max_idx(double a[], int n) {
  int idx = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] > a[idx]) {
      idx = i;
    }
  }
  return idx;
}

void swap(double &a, double &b) {
  double temp = a;
  a = b;
  b = temp;
}

void selection_sort(double a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int idx = max_idx(a, n - i);
    swap(a[n - 1 - i], a[idx]);
  }
}

void print(double a[], int n, char delim) {
  for (int i = 0; i < n - 1; i++) {
    cout << a[i] << delim;
  }
  cout << a[n - 1] << "\n";
}

main_program {
  double a[10000];
  int n = 0;
  double x;

  while (cin >> x) {
    a[n] = x;
    n++;
  }

  print(a, n, ' ');

  selection_sort(a, n);

  print(a, n, ' ');
}
