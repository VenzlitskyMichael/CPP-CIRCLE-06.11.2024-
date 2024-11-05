#include <iostream>
using namespace std;

class Circle
{
private:
    double rad; 
public:
    Circle(double r = 1.0) : rad(r) {}
    ~Circle() {}
    bool operator==(const Circle& other) const {
        return rad == other.rad;
    }
    bool operator>(const Circle& other) const {
        return this->getCircumference() > other.getCircumference();
    }
    Circle& operator+=(double value) {
        rad += value;
        return *this;
    }
    Circle& operator-=(double value) {
        rad -= value;
        return *this;
    }
    double getCircumference() const {
        return 2 * 3.14 * rad;
    }
    double getRadius() const {
        return rad;
    }
};

int main() {
    Circle c1(5.0);
    Circle c2(10.0);
    if (c1 == c2) {
        cout << "Rad ==" << endl;
    }
    else {
        cout << "rad !=" << endl;
    }
    if (c1 > c2) {
        cout << "lonh c1 > long c2" << endl;
    }
    else {
        cout << "long c2 > long c1" << endl;
    }
    c1 += 3.0;
    cout << "new rad c1: " << c1.getRadius() << endl;
    c2 -= 2.0;
    cout << "new rad c2: " << c2.getRadius() << endl;
    return 0;
}


/*
	Создайте класс Circle
	Реализуйте через перегруженные операторы 
	проверка на равенство радусов друх окружностей ( ==)
	Сравнения длин двух окружностей (>)
	Пропроциональные изменение размеров окружности путем
	изменения ее радуса (+= и -=)

*/
