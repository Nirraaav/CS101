#include <simplecpp>

main_program{
	turtleSim();

	float radius = 300;
	float vr = 5;
	float w = 0.1*PI;
	float dt = 0.01;

	penUp();
	forward(radius);
	right(90);
	penDown();

	float reps = radius / (vr * dt);
	
	repeat(reps) {
		float velocity = sqrt(vr * vr + (radius * w) * (radius * w));
		right(w*dt*180/PI);
		forward(velocity*dt);
		radius -= vr*dt;
	}
	
	wait(10);
}
