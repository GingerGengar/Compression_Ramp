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

#if False
/*Prints Problem Parameters*/
void ParPrint(){
    ParOut << "#Domain Lower Bound, Domain Upper Bound, Number of Domain Partition, dx, Time Lower Bound, Time Upper Bound, Number of Time Partition, dt" << std::endl;
    ParOut << domLB << " " << domUB << " " << sdom << " " << dx << " " << tLB << " " << tUB << " " << stime << " " << dt;}
#endif
