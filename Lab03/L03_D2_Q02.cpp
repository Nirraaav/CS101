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

	// left(72);
	// forward(500.0/3);
	// penUp();
	// forward(500.0/3);
	// penDown();
	// forward(500.0/3);
	// right(144);
	// forward(500.0/3);
	// penUp();
	// forward(500.0/3);
	// penDown();
	// forward(500.0/3);
	// right(144);
	// forward(500.0/3);
	// penUp();
	// forward(500.0/3);
	// penDown();
	// forward(500.0/3);
	// right(144);
	// forward(500.0/3);
	// penUp();
	// forward(500.0/3);
	// penDown();
	// forward(500.0/3);
	// right(144);
	// forward(500.0/3);
	// penUp();
	// forward(500.0/3);
	// penDown();
	// forward(500.0/3);
	// right(144);
	// // wait(5);
	// penUp();
	// forward(250);
	// right(72);
	// forward(45);
	// penDown();
	// forward(25);
	// penUp();
	// forward(25);
	// penDown();
	// forward(25);

	// penUp();
	// right(90);
	// forward(50);
	// penDown();
	// repeat(10000){
	// 	forward((37.5*PI)/10000);
	// 	right(180.0/10000);
	// }
	// wait(10);

	// Mickey Mouse hehehehe

	Circle Face = Circle(750, 750, 200);
	Face.paint();
	Circle Ear1 = Circle(750+125*sqrt(2), 750-125*sqrt(2), 50);
	Ear1.paint();
	Circle Ear2 = Circle(750-125*sqrt(2), 750-125*sqrt(2), 50);
	Ear2.paint();
	Circle Eye1 = Circle(750+50*sqrt(2), 750-50*sqrt(2), 25);
	Eye1.paint();
	Circle Eye2 = Circle(750-50*sqrt(2), 750-50*sqrt(2), 25);
	Eye2.paint();

	penUp();
	forward(65);
	right(90);
	forward(75);
	right(30);
	penDown();
	repeat(1000){
		forward((50*PI)/1000);
		right(120.0/1000);
	}
	wait(5);
}