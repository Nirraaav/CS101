#include <simplecpp>

void swap(long long int &a, long long int &b) {
    long double temp = a;
    a = b;
    b = temp;
}

void bubble_sort(long long int a[], long long int n){
    for(long long int i = 0; i < n; i++){
        for(long long int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
}

main_program{
    long long int a[10000];
    long long int n = 0;
    long long int x;
    while (cin >> x) {
        if(x == -1){
            break;
        }
        a[n] = x;
        n++;
    } 

    while (cin >> x) {
        if(x == -1){
            break;
        }
        a[n] = x;
        n++;
    } 

    bubble_sort(a, n);

    for(long long int i = 0; i < n; i++){
        if(i == 0){
            cout << a[i] << " ";
        }else if(a[i] != a[i-1]){
            cout << a[i] << " "; 
        }
    }
    cout << "\n";
}