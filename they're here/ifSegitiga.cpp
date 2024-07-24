#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if (x + y > z && x + z > y && y + z > x) {
        cout << "Segitiga";
    } else {
        cout << "Bukan Segitiga";
    }
    return 0;
}