#include <cmath>
#include <iomanip>
#include "Triangle.h"

#define e 0.0001
#define PI 3.14159265

Triangle::Triangle()
{
    XA=0;
    YA=0;
    XB=0;
    YB=0;
    XC=0;
    YC=0;
}

Triangle::Triangle(float xa,float ya,float xb,float yb,float xc,float yc)
{
    XA=xa;
    YA=ya;
    XB=xb;
    YB=yb;
    XC=xc;
    YC=yc;
}

void Triangle::SetXA(float a)
{
    XA=a;
}

void Triangle::SetXB(float a)
{
    XB=a;
}

void Triangle::SetXC(float a)
{
    XC=a;
}

void Triangle::SetYA(float a)
{
    YA=a;
}

void Triangle::SetYB(float a)
{
    YB=a;
}

void Triangle::SetYC(float a)
{
    YC=a;
}

float Triangle::getXA()
{
    return XA;
}

float Triangle::getXB()
{
    return XB;
}

float Triangle::getXC()
{
    return XC;
}

float Triangle::getYA()
{
    return YA;
}

float Triangle::getYB()
{
    return YB;
}

float Triangle::getYC()
{
    return YC;
}

double Triangle::getAB()
{
    return sqrt(pow(XA-XB,2)+pow(YA-YB,2));
}

double Triangle::getAC()
{
    return sqrt(pow(XA-XC,2)+pow(YA-YC,2));
}

double Triangle::getBC()
{
    return sqrt(pow(XB-XC,2)+pow(YB-YC,2));
}

double Triangle::getA()
{
    double x;
    x = (pow(getAC(),2)+pow(getAB(),2)-pow(getBC(),2))/(2*getAC()*getAB());
    return acos(x);
}

double Triangle::getB()
{
    double x;
    x = (pow(getAB(),2)+pow(getBC(),2)-pow(getAC(),2))/(2*getAB()*getBC());
    return acos(x);
}

double Triangle::getC()
{
    double x;
    x = (pow(getBC(),2)+pow(getAC(),2)-pow(getAB(),2))/(2*getBC()*getAC());
    return acos(x);
}

bool Triangle::isIsopleurous()
{
    return (fabs(getAB()-getAC())<e && fabs(getAB()-getBC())<e && fabs(getBC()-getAC())<e);
}

bool Triangle::isScalino()
{
    return ((getAB()!=getAC() && (getAB()!=getBC()) && (getAC()!=getBC())));
}

bool Triangle::isIsosceles()
{
    return (!isIsopleurous() && ( fabs(getAB()-getAC())<e || fabs(getAB()-getBC())<e || fabs(getBC()-getAC())<e ) );
}

bool Triangle::isOrthogonio()
{
    return (fabs(getA()*180/PI-90)<e || fabs(getB()*180/PI-90)<e || fabs(getC()*180/PI-90)<e);
}

bool Triangle::isOxygonio()
{
    return (getA()*180/PI<90 && getB()*180/PI<90 && getC()*180/PI<90);
}

bool Triangle::isAmvligonio()
{
    return (getA()*180/PI>90 || getB()*180/PI>90 || getC()*180/PI>90);
}

double Triangle::getBase()
{
    return getAB();
}

double Triangle::getHeight()
{
    return (sin(getA())*getAC());
}

double Triangle::getArea()
{
    return (getBase()*getHeight())/2;
}