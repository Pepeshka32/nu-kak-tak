#include <iostream>
using namespace std;

class Point {
public:
    static int count;
    Point(int x, int y) : x(x), y(y) {
        count++;
    }
    static int getCount() {
        return count;
    }

private:
    int x, y;
};

int Point::count = 0;

int main() {
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3(5, 6);

    cout << "Point: " << Point::getCount() << endl;

    return 0;
}
