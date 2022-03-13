//Geometry.cpp
#include "Header.h"

/*Takes 2 points and returns the angle between them*/
double Pnts2Ang(double x1, double y1, double x2, double y2){return atan((y2-y1)/(x2-x1));}

/*Takes an angle a line makes with the x-axis and returns the gradient of that line*/
double Ang2Grad(double angle){return tan(angle);}

/*Using a gradient to determine dx*/
double dxComp(double gradient){return dl/sqrt(1. + pow(gradient,2));}
