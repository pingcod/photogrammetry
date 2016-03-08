#include"matrixcal.h"
MatrixCal::MatrixCal()
{

}

MatrixCal::~MatrixCal()
{

}

void MatrixCal::mtxMultiply( const double* mtx1,const double* mtx2,double* result,int i,int j,int k )
{
    for (int m=0;m<i;m++)                      //生成的矩阵的行数
        {
            for (int n=0;n<k;n++)                  //生成矩阵的列数
            {
                result[m*k+n]=0;
                for (int s=0;s<j;s++)
                {
                    result[m*k+n]+=mtx1[m*j+s]*mtx2[s*k+n];
                }
            }
        }
}

void MatrixCal::mtxTranver( const double* origin,double* result,int m,int n )
{
    for (int i = 0 ; i < m ; i++)
            {
                for ( int j = 0 ; j < n ; j++ )
                {
                    result[ j * m + i ] = origin[ i * n + j ];
                }
            }
}

void MatrixCal::mtxInvers( double* a,int n)
{
    int i,j,k;
        for(k=0;k<n;k++)
        {
            for(i=0;i<n;i++)
            {
                if(i!=k)   *(a+i*n+k) = -*(a+i*n+k)/(*(a+k*n+k));
            }
            *(a+k*n+k)=1/(*(a+k*n+k));
            for(i=0;i<n;i++)
            {
                if(i!=k)
                {
                    for(j=0;j<n;j++)
                    {
                        if(j!=k)  *(a+i*n+j) += *(a+k*n+j)* *(a+i*n+k);
                    }
                }
            }
            for(j=0;j<n;j++)
            {
                if(j!=k)  *(a+k*n+j)*=*(a+k*n+k);
            }
        }
}
