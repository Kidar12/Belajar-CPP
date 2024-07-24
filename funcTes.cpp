#include <iostream>
using namespace std;

float funcTes(float a, float b) {
    return a * b;
}

int main(){
    float x, y;
    cin >> x >> y;
    cout << funcTes(x, y);
    return 0;
}