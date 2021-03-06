//Header.h
//Include Guards
#ifndef Comp_Ramp
#define Comp_Ramp

//Library Includes
#include <iostream>
//Header.h
#include <fstream>
#include <cmath>

//File Naming
#define XFileName "XRamp.txt"
#define YFileName "YRamp.txt"
#define ParamName "Parameter.txt"
#define StaticPressName "StaticPressure.txt"
#define StagPressName "StagnationPressure.txt"
#define TempName "Temperature.txt"

//Variable Prototypes
extern std::ofstream XRmpOut;
extern std::ofstream YRmpOut;
extern std::ofstream SttcPress;
extern std::ofstream StagPress;
extern std::ofstream TempOut;
extern double gam;
extern double xo; 
extern double yo;
extern double xcowl; 
extern double ycowl;
extern int Iter; 
extern double dl;
extern double dx;
extern double xc; 
extern double yc;
extern double AngCowl;
extern double Oalp; 
extern double Nalp;
extern double RmpGrad;
extern double theta;
extern double M1;
extern double Mn1;
extern double M2;
extern double Mn2;
extern double P1;
extern double T1;
extern double P01;

//Function Prototypes

//Init.cpp
void Initialize();

//IO.cpp
void SetupFiles();
void CloseFiles();
void ParPrint();

//Geometry.cpp
double Pnts2Ang(double, double, double, double);
double Ang2Grad(double);
double dxComp(double);

//Gen_Rmp_Geo.cpp
void XMarch();
void GenRamp();

//Shock.cpp
double MachNormal(double, double);
double ShockMach(double);
double beta2theta(double, double);
double MachTrue(double, double, double);
double ShoCon1(double);
double ShoCon2(double);
double PAftNShock(double, double);
double TAftNShock(double, double);
double P0AftNShock(double, double);

#endif
