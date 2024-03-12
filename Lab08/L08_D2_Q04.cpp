#include <simplecpp>

main_program{
	long long int a[999];
    long long int n = 0;
    long long int x;
    while (cin >> x) {
        if(x == -1){
            break;
        }
        a[n] = x;
        n++;
    } 

    long long int maxi = a[0];
    long long int mini = a[0];
    long double sum = a[0];
    long long int max10 = 0;
    long long int max20 = 0;
    long long int max30 = 0;
    long long int max40 = 0;
    long long int max50 = 0;
    long long int max60 = 0;
    long long int max70 = 0;
    long long int max80 = 0;
    long long int max90 = 0;
    long long int max100 = 0;

    for(long long int i = 1; i < n; i++){
    	maxi = max(a[i], maxi);
    	mini = min(a[i], mini);
    	sum += a[i];
    }

    for(long long int i = 0; i < n; i++){
    	if(a[i] >= 1 && a[i] <= 10){
    		max10++;
    	}else if(a[i] >= 11 && a[i] <= 20){
    		max20++;
    	}else if(a[i] >= 21 && a[i] <= 30){
    		max30++;
    	}else if(a[i] >= 31 && a[i] <= 40){
    		max40++;
    	}else if(a[i] >= 41 && a[i] <= 50){
    		max50++;
    	}else if(a[i] >= 51 && a[i] <= 60){
    		max60++;
    	}else if(a[i] >= 61 && a[i] <= 70){
    		max70++;
    	}else if(a[i] >= 71 && a[i] <= 80){
    		max80++;
    	}else if(a[i] >= 81 && a[i] <= 90){
    		max90++;
    	}else if(a[i] >= 91 && a[i] <= 100){
    		max100++;
    	}
    }

    cout << "Maximum: " << maxi << "\n";
    cout << "Minimum: " << mini << "\n";
    cout << "Average: " << sum/n << "\n";
    cout << "Number of students scoring marks in the range:\n";
    cout << "1 to 10: " << max10 << "\n";
    cout << "11 to 20: " << max20 << "\n";
    cout << "21 to 30: " << max30 << "\n";
    cout << "31 to 40: " << max40 << "\n";
    cout << "41 to 50: " << max50 << "\n";
    cout << "51 to 60: " << max60 << "\n";
    cout << "61 to 70: " << max70 << "\n";
    cout << "71 to 80: " << max80 << "\n";
    cout << "81 to 90: " << max90 << "\n";
    cout << "91 to 100: " << max100 << "\n";
}