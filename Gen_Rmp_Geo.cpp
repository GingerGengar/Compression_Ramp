//Gen_Rmp_Geo.cpp
#include "Header.h"

/*Overwrites last position variables with new position*/
void XMarch(){M1 = M2; Oalp = Nalp;}

/*Generates Ramp Geometry*/
void GenRamp(){for(int i=0; i<Iter; i++){
    AngCowl = Pnts2Ang(xc,yc,xcowl,ycowl);
    Mn1 = MachNormal(M1, AngCowl);
    Mn2 = ShockMach(Mn1);
    theta = beta2theta(M1,AngCowl);
    M2 = MachTrue(Mn2,AngCowl,theta);
    Nalp = Oalp + theta;
    RmpGrad = Ang2Grad(Nalp);
    dx = dxComp(RmpGrad);
    xc = xc+dx; yc = yc+RmpGrad*dx;
    XRmpOut << xc << " "; YRmpOut << yc << " ";
    XMarch();}}
