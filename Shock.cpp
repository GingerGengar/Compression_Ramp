//Shock.cpp
#include "Header.h"

/*Computes the Normal Component of Mach number on an Oblique Shock*/
double MachNormal(double Mach, double beta){return Mach*sin(beta);}

/*Computes Mach Number after Normal Shock*/
double ShockMach(double Mach){
    return sqrt((1.+(gam-1.)/2.*pow(Mach,2))/(gam*pow(Mach,2)-(gam-1.)/2.));}

/*Computes turn angle theta from shock angle beta*/
double beta2theta(double Mach, double beta){
    return atan(2./tan(beta)*(pow(Mach,2)*pow(sin(beta),2)-1.)/(pow(Mach,2)*(gam+cos(2*beta))+2.));}

/*Computes the True Mach Number from Normal Mach number, shock angle and turn angle*/
double MachTrue(double NMach, double beta, double theta){
    return NMach/sin(beta-theta);}
