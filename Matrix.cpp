#include "Matrix.hpp"
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;
namespace zich{
    Matrix::Matrix(vector<double> m,int row, int col){}
    Matrix::~Matrix(){}
    Matrix operator+ (const Matrix& m1,const Matrix& m2){
        return m1;
    }
    void operator+= (Matrix& m1,const Matrix& m2){}
    Matrix operator+ (const Matrix& m){
        return m;
    }

    Matrix operator- (const Matrix& m1,const Matrix& m2){
        return m1;
    }
    void operator-= (Matrix& m1,const Matrix& m2){}
    Matrix operator- (const Matrix& m){
        return m;
    }

    bool operator< (const Matrix& m1,const Matrix& m2){
        return true;
    }
    bool operator<= (const Matrix& m1,const Matrix& m2){
        return true;
    }
    bool operator> (const Matrix& m1,const Matrix& m2){
        return true;
    }
    bool operator>= (const Matrix& m1,const Matrix& m2){
        return true;
    }
    bool operator== (const Matrix& m1,const Matrix& m2){
        return true;
    }
    bool operator!= (const Matrix& m1,const Matrix& m2){
        return true;
    }

    void operator++ (const Matrix& m){}
    void operator-- (const Matrix& m){}

    Matrix operator* (const Matrix& m1, const Matrix& m2){
        return m1;
    }
    Matrix operator* (Matrix& m, double c){
        return m;
    }
    Matrix operator* (double c, Matrix& m){
        return m;
    }

    Matrix operator*= (Matrix& m,double c){
        return m;
    }
    Matrix operator*= (double c,Matrix& m){
        return m;
    }

    std::ostream& operator<<(std::ostream& os, const Matrix& m){
        return os;
    }
}