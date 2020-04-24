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

void largerTriangle(Triangle t1, Triangle t2) {
    t1.computeArea();
    t2.computeArea();
    if (t1.getArea() > t2.getArea()) {
        cout << "The Area " << t1.getArea() << " of Triangle 1 is larger than area " << t2.getArea()
             << " of Triangle 2.\n";
    } else if (t1.getArea() < t2.getArea()) {
        cout << "The Area " << t2.getArea() << " of Triangle 2 is larger than area " << t1.getArea()
             << " of Triangle 1.\n";
    } else {
        cout << "The areas of the two triangle are identical.\n";
    }
}

int main() {
    Triangle t1, t2;
    int a, b, c;
    cout << "Enter New Sides for Triangle 1:\n";
    cin >> a >> b >> c;
    t1.setSides(a, b, c);
    cout << "Enter New Sides for Triangle 2:\n";
    cin >> a >> b >> c;
    t2.setSides(a, b, c);
    largerTriangle(t1, t2);
    return 0;
}