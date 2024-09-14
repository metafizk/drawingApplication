#include <iostream>
#include <cmath>

using namespace std;


// describe the PI
const double PI = 3.141592653589793;

// circle class
class circle {
private:
	double radius;

public:
	circle(double r) : radius(r) {}

	//the circle AREA
	double area() {
		return PI * radius * radius;

	}

	// the function that print information of circle on the screen
	void  draw() {
		cout << "radius :  " << radius << endl;
		cout << "Area: " << area() << endl;
	}
};

// rectangle class

class rectangle {
private:
	double height, width;

public:
	rectangle(double w, double h) : height(h), width(w){}

	//this function that calculate of circle area
	double area() {
		return width * height;
	}

	// the function that print information of rectangle on the screen
	void  draw() {
		cout << "print height: " << height << "  print width: " << width << endl;
		cout <<"area: " << area() << endl;
	}

};

int main() {

	// create circle and draw
	circle Circle1(3.0);
	Circle1.draw();


	// create rectangle and draw it
	rectangle Rectangle1(3, 5);
	Rectangle1.draw();
}