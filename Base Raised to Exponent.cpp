#include <iostream>// for pow()

using namespace std;

int main() {
    double n, p, result;
     result = 1;
    cout << "Enter Base: ";
    cin >> n;

    cout << "Enter Exponent: ";
    cin >> p;
    for(int i=0;i<p;i++){
    result = result*n;
        
    }

    cout << n << " Raised to The Power " << p<< " is " << result << endl;

    return 0;
}
