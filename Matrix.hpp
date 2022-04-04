#include <string>
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace zich
{
    class Matrix
    {
    public:
        int row;
        int col;
        vector<double> mat;

        Matrix(vector<double> m, int row, int col);
        ~Matrix();

        friend Matrix operator+ (const Matrix& m1,const Matrix& m2);
        friend void operator+= (Matrix& m1,const Matrix& m2);
        friend Matrix operator+ (const Matrix& m);

        friend Matrix operator- (const Matrix& m1,const Matrix& m2);
        friend void operator-= (Matrix& m1,const Matrix& m2);
        friend Matrix operator- (const Matrix& m);

        friend bool operator< (const Matrix& m1,const Matrix& m2);
        friend bool operator<= (const Matrix& m1,const Matrix& m2);
        friend bool operator> (const Matrix& m1,const Matrix& m2);
        friend bool operator>= (const Matrix& m1,const Matrix& m2);
        friend bool operator== (const Matrix& m1,const Matrix& m2);
        friend bool operator!= (const Matrix& m1,const Matrix& m2);

        friend void operator++ (const Matrix& m);
        friend void operator-- (const Matrix& m);

        friend Matrix operator* (const Matrix& m1, const Matrix& m2);
        friend Matrix operator* (Matrix& m, double c);
        friend Matrix operator* (double c, Matrix& m);

        friend Matrix operator*= (Matrix& m,double c);
        friend Matrix operator*= (double c,Matrix& m);

        friend std::ostream& operator<<(std::ostream& os, const Matrix& m);
//        friend std::istream& operator>>(std::istream& is, const Matrix& m);
    };
}
