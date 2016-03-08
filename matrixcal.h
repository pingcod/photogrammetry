#ifndef MATRIXCAL
#define MATRIXCAL
class MatrixCal
{
public:
    MatrixCal();
    ~MatrixCal();

    void mtxMultiply(const double* mtx1,const double* mtx2,double* result,int i,int j,int k);
    void mtxTranver(const double* origin,double* result,int m,int n);
    void mtxInvers( double* a,int n);
};
#endif // MATRIXCAL

