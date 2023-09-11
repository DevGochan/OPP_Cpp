#include <iostream>

class Circle {
    private:  // 키워드 다음 콜론 붙여주어야 함
        double radius_;
        const double kPi = 3.14;

    public:
        double get_radius() const;
        double get_area() const;
        double get_perimeter() const;
        void set_radius(double radius);
};

double Circle::get_radius() const { return radius_; }
double Circle::get_area() const { return radius_ * radius_ * kPi; }
double Circle::get_perimeter() const { return radius_ * 2 * kPi; }
void Circle::set_radius(double radius) { radius_ = radius; }

int main() {
    Circle circle;
    circle.set_radius(10);
    std::cout << "Radius: " << circle.get_radius() << std::endl;
    std::cout << "Area: " << circle.get_area() << std:: endl;
    std::cout << "Perimeter: " << circle.get_perimeter() << std:: endl;
    // circle.radius_ = 10;
    return 0;
}

