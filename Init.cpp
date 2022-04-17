#include "Header.h"

/*Computes a recurring part of the isentropic flow relation expressions*/
double IseCon(double M){return 1. + (gam-1.)/2.*pow(M,2.);}

/*Takes Static Pressure, Mach Number, and Gives Stagnation Pressure*/
double Ps2P0(double P,double M){return P*pow(IseCon(M), gam/(gam-1.));}

/*Initializes Starting Variables*/
void Initialize(){
//Ratio of Specific Heats
gam = 1.2;
//Initial Static Pressure,  Static Temperature and Mach number
P1 = 1; T1 = 298; M1 = 2.5;
//Initial stagnation pressure
P01 = Ps2P0(P1, M1);
//Initial Starting Point of Ramp
xo = 1; yo = 2;
//Location of Cowl Lip
xcowl = 5; ycowl = 3;
//Number of Iterations and what each step length is
Iter = 500; dl = 0.01;}
