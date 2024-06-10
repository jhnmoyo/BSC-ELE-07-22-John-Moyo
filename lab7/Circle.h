#pragma once
#include<string>
using namespace std;

namespace shapes {
    class Circle {
    private:
        double radius;
    public:
        Circle();
        Circle(double r);
        double getRadius() const;
        ~Circle();
    };
}

