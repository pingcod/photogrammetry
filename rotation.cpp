#include"rotation.h"
#include"math.h"

rotation::rotation()
{

}

rotation::~rotation()
{

}

void rotation::getR(double phi, double omega, double kappa, double *R)
{
    R[0]=cos(phi)*cos(kappa)-sin(phi)*sin(omega)*sin(kappa);
    R[1]=-cos(phi)*sin(kappa)-sin(phi)*sin(omega)*cos(kappa);
    R[2]=-sin(phi)*cos(omega);
    R[3]=cos(omega)*sin(kappa);
    R[4]=cos(omega)*cos(kappa);
    R[5]=-sin(omega);
    R[6]=sin(phi)*cos(kappa)+cos(phi)*sin(omega)*sin(kappa);
    R[7]=-sin(phi)*sin(kappa)+cos(phi)*sin(omega)*cos(kappa);
    R[8]=cos(phi)*cos(omega);
}
