class Triangle
{
private:
    float XA;
    float YA;
    float XB;
    float YB;
    float XC;
    float YC;

public:
    Triangle();
    Triangle(float, float, float, float, float, float);

    void SetXA(float);
    void SetXB(float);
    void SetXC(float);
    void SetYA(float);
    void SetYB(float);
    void SetYC(float);

    float getXA();
    float getXB();
    float getXC();
    float getYA();
    float getYB();
    float getYC();

    double getAB();
    double getAC();
    double getBC();

    double getA();
    double getB();
    double getC();

    bool isIsopleurous();
    bool isIsosceles();
    bool isScalino();

    bool isOrthogonio();
    bool isAmvligonio();
    bool isOxygonio();

    double getHeight();
    double getBase();
    double getArea();
};
