#include <iostream>
using namespace std;

struct Phone {
    int x, y, g;
};

int main() {
    Phone p1, p2;

    p1.x = 415;
    p1.y = 555;
    p1.g = 1212;

    cout << "Enter Your area code, exchange, and number: " << p1.x<<" " <<p1.y<<" "<<p1.g<< " " ;
    cin >> p2.x >> p2.y >> p2.g;

    cout << "My Number is: (" << p1.x << ") " << p1.y << "-" << p1.g <<endl;
    cout << "Your Number is: (" << p2.x << ") " << p2.y << "-" << p2.g<<endl;
    return 0;
}
