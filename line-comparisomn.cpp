#include <iostream>
#include <cmath>
using namespace std;

class Line {
private:
    double x1, y1, x2, y2;

public:
    Line(double x1, double y1, double x2, double y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    double getLength() {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

    bool isEqual(Line other) {
        return this->getLength() == other.getLength();
    }

    int compareTo(Line other) {
        double len1 = this->getLength();
        double len2 = other.getLength();

        if (len1 > len2)
            return 1;
        else if (len1 < len2)
            return -1;
        else
            return 0;
    }
};

int main() {
    cout << "Welcome to Line Comparison Computation Program on Master Branch" << endl;
    
    double x1, y1, x2, y2;
    cout << "Enter coordinates for Line 1 (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    Line line1(x1, y1, x2, y2);

    cout << "Enter coordinates for Line 2 (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    Line line2(x1, y1, x2, y2);

    //UC1: Display Length
    cout<<"Length of Line 1: "<<line1.getLength()<<endl;
    cout<<"Length of Line 2: "<<line2.getLength()<<endl;

    // UC2: Check equality
    if (line1.isEqual(line2)) {
        cout << "Line 1 and Line 2 are equal in length." << endl;
    } else {
        cout << "Line 1 and Line 2 are not equal in length." << endl;
    }

    // UC3: Compare lines
    int comparison = line1.compareTo(line2);
    if (comparison == 1) {
        cout << "Line 1 is greater than Line 2." << endl;
    } else if (comparison == -1) {
        cout << "Line 1 is smaller than Line 2." << endl;
    } else {
        cout << "Line 1 and Line 2 are equal." << endl;
    }

    return 0;
}
