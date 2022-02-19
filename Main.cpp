#include "Header.h"

/*Takes 2 points and returns the angle between them*/
double Pnts2Ang(double x1, double y1, double x2, double y2){return atan((y2-y1)/(x2-x1));}

/*Takes an angle a line makes with the x-axis and returns the gradient of that line*/
double Ang2Grad(double angle){return tan(angle);}

/*Using a gradient to determine dx*/
double dxComp(double gradient){return dl/sqrt(1. + pow(gradient,2));}

/*Overwrites last position variables with new position*/
void XMarch(){M1 = M2; Oalp = Nalp;}

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

/*Generates Ramp Geometry*/
void GenRamp(){for(int i=0; i<Iter; i++){
    std::cout<<"M1: "<<M1<<std::endl;
    AngCowl = Pnts2Ang(xc,yc,xcowl,ycowl);
    std::cout<<"AngCowl: "<<AngCowl<<std::endl;
    Mn1 = MachNormal(M1, AngCowl);
    std::cout<<"Mn1: "<<Mn1<<std::endl;
    Mn2 = ShockMach(Mn1);
    std::cout<<"Mn2: "<<Mn2<<std::endl;
    theta = beta2theta(M1,AngCowl);
    M2 = MachTrue(Mn2,AngCowl,theta);
    Nalp = Oalp + theta;
    RmpGrad = Ang2Grad(Nalp);
    dx = dxComp(RmpGrad);
    xc = xc+dx; yc = yc+RmpGrad*dx;
    XRmpOut << xc; YRmpOut << yc;
    XMarch();
}}

//Entry and Exit of Program
int main(void){Initialize(); SetupFiles(); GenRamp(); CloseFiles(); return 0;}
