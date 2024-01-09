#include<simplecpp>
main_program{
	int NumberOfSides, length;
	cout << "Enter the number of Sides : ";
	cin >> NumberOfSides;
	cout << "\nEnter Side Length : ";
	cin >> length;
	turtleSim();
	wait(3);
	repeat(NumberOfSides){
		forward(length); left(360.0/NumberOfSides); wait(0.25);
	}
	wait(10);
}
