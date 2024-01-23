#include <simplecpp>

main_program{
	turtleSim("A mythical creature from IITB");
	// penUp();
	// forward(-250);
	// right(90);
	// forward(250);
	// left(90);
	// penDown();
	// repeat(4){
	// 	forward(500);
	// 	left(90);
	// }
	// penUp();
	// left(90);
	// forward(500);
	// right(90);
	// forward(250);
	// left(90);
	// penDown();
	// Circle C = Circle(750, 300, 200);
	// C.paint();
	// left(90);
	// forward(125);
	// right(90);
	// penUp();
	// forward(100);
	// forward(150);
	// right(90);
	// forward(50);
	// penDown();
	// forward(50);
	// penUp();
	// forward(50);
	// penDown();
	// forward(50);
	// penUp();
	// right(90);
	// forward(100);
	// penDown();
	// forward(25);
	// right(90);
	// forward(150);
	// right(90);
	// forward(25);
	// wait(5);

	// Starfish

	left(72);
	forward(500);
	right(144);
	forward(500);
	right(144);
	forward(500);
	right(144);
	forward(500);
	right(144);
	forward(500);
	right(144);
	// wait(5);
	penUp();
	forward(250);
	right(72);
	forward(45);
	penDown();
	forward(25);
	penUp();
	forward(25);
	penDown();
	forward(25);

	penUp();
	right(90);
	forward(50);
	penDown();
	repeat(10000){
		forward((37.5*PI)/10000);
		right(180.0/10000);
	}
	wait(10);
}