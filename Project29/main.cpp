#include <iostream>

using namespace std;

class Plane {
public:
	string name;
	int speed;
	double length;
	double height;
	int count;
};

int main() {
	const int size = 5;

	int n;
	n = 10;


	Plane plane1, plane2, plane3;
	Plane planes[size];

	planes[0].name = "Airbus";
	planes[0].speed = 1100;
	//...
	
	plane1.name = "Boeing 747-400";
	plane1.speed = 950;
	plane1.speed = 700;
	plane1.height = 19.41;
	plane1.length = 70.66;
}