#include "Header.h"

/*Outputs X Coordinates of Ramp Geometry*/
std::ofstream XRmpOut;

/*Outputs Y Coordinates of Ramp Geometry*/
std::ofstream YRmpOut;

/*Parameter Printing*/
std::ofstream ParOut;

/*Prepare File Outputs*/
void SetupFiles(){
    XRmpOut.setf(std::ios_base::left, std::ios_base::adjustfield);
    XRmpOut.setf(std::ios_base::scientific, std::ios_base::floatfield);
    YRmpOut.setf(std::ios_base::left, std::ios_base::adjustfield);
    YRmpOut.setf(std::ios_base::scientific, std::ios_base::floatfield);
    XRmpOut.open(XFileName); YRmpOut.open(YFileName); ParOut.open(ParamName);}

/*Close Files*/
void CloseFiles(){XRmpOut.close(); YRmpOut.close(); ParOut.close();}

/*Prints Problem Parameters*/
void ParPrint(){ParOut << "#gamma, Number of Iterations, length dl, Initial Mach Number, xcowl, ycowl" << std::endl; ParOut << gam << " " << Iter << " " << dl << " " << M1 << " " << xcowl << " " << ycowl;}
