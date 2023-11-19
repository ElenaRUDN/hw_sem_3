#include <iostream>
#include <cmath>
double posled_iter(int y2);
double grafic(int E);
float e = 0.0068;
float M = 0.87;

int main()
{
    for (int E = 0; E < 1000; E++) {
        grafic(E);
        posled_iter(E);
        
    }
    std::cout << posled_iter(999) << std::endl;

    return 0;
}

double grafic(int E) {
    float y1;
    y1 = E;
    return y1;
}
double posled_iter(int y2) {
    if (y2 > M) {
        return e * sin(posled_iter(y2 - (pow(10, (-6))))) + M;
    }
    return M;
}