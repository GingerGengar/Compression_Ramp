#ifndef Comp_Ramp
#define Comp_Ramp

//Library Includes
#include <iostream>
#include <fstream>
#include <cmath>

//File Naming
#define XFileName "XRamp.txt"
#define YFileName "YRamp.txt"
#define ParamName "Parameter.txt"


//Variable Prototypes
extern std::ofstream XRmpOut;
extern std::ofstream YRmpOut;
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


//Function Prototypes

//Init.cpp
void Initialize();

//IO.cpp
void SetupFiles();
void CloseFiles();


#endif
