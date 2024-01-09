#include<simplecpp>

main_program{
	float a;
	cout << "Enter the first number : ";
	cin >> a;
	char op;
	cout << "Enter the desired operation : ";
	cin >> op;
	while(op != '+' && op != '-' && op != '*' && op != '/'){
		cout << "Please enter correct operation : ";
		cin >> op;
	}
	float b;
	cout << "Enter the second number : ";
	cin >> b;
	switch(op){
		case '+':
			cout << "Output is " << a+b << '\n';
			break;
		case '-':
			cout << "Output is " << a-b << '\n';
			break;
		case '*':
			cout << "Output is " << a*b << '\n';
			break;
		case '/':
			if(b == 0){
				cout << "Division Undefined";
				return 0;
			}
			cout << "Output is " << (a/b) << '\n';
			break;
		default:
			cout << "Incorrect!" << '\n';
			return 0;
	}	
}