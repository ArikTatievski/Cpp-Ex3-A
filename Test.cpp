#include <iostream>
#include "doctest.h"
#include "Matrix.hpp"
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;
using namespace zich;
TEST_CASE("Good Input Testing") {
    vector<double> iden = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    vector<double> iden8 = {8, 0, 0, 0, 8, 0, 0, 0, 8};
    vector<double> iden7 = {7, 0, 0, 0, 7, 0, 0, 0, 7};
    vector<double> ris = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<double> adds = {2, 2, 3, 5, 5, 6, 8, 8, 9};
    vector<double> mults = {31, 38, 45, 67, 83, 99, 103, 128, 153};
    Matrix identity (iden, 3 , 3);
    Matrix identity8 (iden8, 3 , 3);
    Matrix identity7 (iden7, 3 , 3);
    Matrix rising (ris, 3 , 3);
    Matrix addsum (adds, 3 , 3);
    Matrix mult (mults, 3 , 3);
    CHECK(!(identity == rising));
    CHECK((identity != rising));
    CHECK(!(identity > rising));
    CHECK(!(identity >= rising));
    CHECK((identity < rising));
    CHECK((identity <= rising));
    Matrix add = identity+rising;
    CHECK((add == addsum));
    add = add - rising;
    CHECK((add == identity));
    add += rising;
    CHECK((add == addsum));
    add-=rising;
    CHECK((add == identity));
    Matrix multtest=rising*addsum;
    CHECK((multtest == mult));
    CHECK((identity*7 == identity7));
    ++identity;
    CHECK((identity == identity8));
    --identity;
    CHECK((identity == identity7));
}
TEST_CASE("Throwing Exception Tests"){
    vector<double> idenvec3D = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    vector<double> idenvec4D ={1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
    CHECK_THROWS(Matrix identity (idenvec3D, 4 , 3));
    Matrix iden3D (idenvec3D, 3 , 3);
    Matrix iden4D (idenvec4D, 4 , 4);
    CHECK_THROWS(iden3D+iden4D);
    CHECK_THROWS(iden3D-iden4D);
    CHECK_THROWS(iden3D*iden4D);
    CHECK_THROWS(bool a = iden3D==iden4D);
    CHECK_THROWS(bool a = iden3D>iden4D);
}