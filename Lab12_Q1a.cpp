#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    int side1, side2, side3;
    double area;

public:
    Triangle();

    Triangle(int, int, int);

    void setSides(int, int, int);

    void computeArea();

    double getArea();
};

Triangle::Triangle() {
    side1 = 0;
    side2 = 0;
    side3 = 0;
    area = 0;
}

Triangle::Triangle(int a, int b, int c) {
    side1 = a;
    side2 = b;
    side3 = c;
    area = 0;
}

void Triangle::setSides(int a, int b, int c) {
    side1 = a;
    side2 = b;
    side3 = c;
}

void Triangle::computeArea() {
    double s = double(side1 + side2 + side3) / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

double Triangle::getArea() {
    return area;
}

int main() {
    Triangle triangle1;
    triangle1.computeArea();
    cout << "Area of Triangle (i.e. triangle1): " << triangle1.getArea() << endl;
    Triangle triangle2(3, 4, 5);
    triangle2.computeArea();
    cout << "Area of Triangle (i.e. triangle2 with sides 3, 4 and 5): " << triangle2.getArea() << endl;
    int m, n, p;
    cout << "Enter New Sides for Triangle:\n";
    cin >> m >> n >> p;
    triangle1.setSides(m, n, p);
    triangle1.computeArea();
    cout << "Area of Triangle: " << triangle1.getArea() << endl;
    return 0;
}