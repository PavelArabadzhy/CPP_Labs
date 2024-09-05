#include <iostream>
#include <cmath>

struct Point {
    double x, y;

    void input() {
        std::cout << "Enter coordinates (x y): ";
        std::cin >> x >> y;
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

struct Triangle {
    Point A, B, C;

    void input() {
        std::cout << "Enter coordinates for point A: ";
        A.input();
        std::cout << "Enter coordinates for point B: ";
        B.input();
        std::cout << "Enter coordinates for point C: ";
        C.input();
    }

    void printSides() const {
        auto distance = [](const Point& p1, const Point& p2) {
            return std::sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
        };

        double AB = distance(A, B);
        double BC = distance(B, C);
        double CA = distance(C, A);

        std::cout << "Side lengths: AB = " << AB << ", BC = " << BC << ", CA = " << CA << std::endl;
    }

    void print() const {
        std::cout << "Triangle vertices: A";
        A.print();
        std::cout << ", B";
        B.print();
        std::cout << ", C";
        C.print();
        std::cout << std::endl;
    }
};

int main() {
    Triangle tri;
    tri.input();
    tri.print();
    tri.printSides();

    return 0;
}


