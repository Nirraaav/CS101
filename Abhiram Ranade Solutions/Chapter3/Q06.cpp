#include <simplecpp>

main_program{
	turtleSim();
	int i = 1;
	repeat(10){
		forward(i*100); right(90);
		forward(i*100); right(90);
		i = i + 1;
	}
	wait(10);
}