#include <iostream>
#include <string>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision
#include "utility.h"
#include <cmath> //for sqrt
using namespace std;


#include "shapes.h"
#include "shapeFuncs.h"
#include "utility.h"

// Compute distance between two points

double distanceBetween(Point p, Point q) {
	double distance;
	distance = sqrt(pow((p.x - q.x),2) + (pow((p.y - q.y),2)));
	return distance;
}
 
//Precondition: Point *p is the location of a Point that has been initialized, xVal is a double that represents
//what x in the Point will be, yVal is a double that represents what y in the Point will be.
//Postcondition: The point at the location specified in *p will have its x property initialized to xVal and y
//property initialized to yVal.

void initPoint(struct Point *p, double xVal, double yVal) {
	p->x = xVal;
	p->y = yVal;
}


string pointToString(Point p, int precision) {
  ostringstream oss;
  oss << setprecision(precision); // set precision to 3 decimal places
  oss << "(" << p.x << "," << p.y << ")";
  return oss.str();
}

string boxToString(Box b, int precision) {
  ostringstream oss;
  oss << setprecision(precision);
  oss << "ul=(" << b.ul.x << "," << b.ul.y << "),w=" << b.width << ",h=" << b.height;
  return oss.str();
}
 


bool pointsApproxEqual(Point p1, 
		       Point p2, 
		       double tolerance) {
  // Two points are approximately equal if the distance between them
  // is less than our tolerance.  (If we want to test for 
  // exact equality, we can pass in a value of zero.)

  return distanceBetween(p1,p2) < tolerance;

}

bool boxesApproxEqual(Box b1, Box b2, double tolerance) {
	bool approxEqual = true;
	if(fabs(b1.ul.x - b2.ul.x) > tolerance){
		approxEqual = false;
	}
	if(fabs(b1.ul.y - b2.ul.y) > tolerance){
		approxEqual = false;
	}
	if(fabs(b1.width - b2.width) > tolerance){
		approxEqual = false;
	}
	if(fabs(b1.height - b2.height) > tolerance){
		approxEqual = false;
	}
	return approxEqual;
}


// Now write a function to initialize a box.
// You'll need to initialize the upper left x and y,
// the width and the height.
// Note: there is a struct Point inside the struct Box.
// So here's a clue: For the x value, use (*b).ul.x or (b->ul).x 
//  The y value is similar.
// There is also a way to "reuse" initPoint, if you are feeling 
//  confident in your understanding of pointers and structs.

void initBox(struct Box *b, double ulx, double uly, double w, double h)
{
	(b->ul).x = ulx;
	(b->ul).y = uly;
	b->width = w;
	b->height = h;
	return;
}


double areaOfBox(Box b) {
	return b.width * b.height;
}
