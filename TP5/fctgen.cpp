//
// Created by mohamedElHaddadi on 3/30/2022.
//

#include <iostream>
#include "rectangle1.h"

using namespace std;

template <class T>
T minimum(T x, T y) {
    return x < y ? x : y;
}

int main() {
    Rectangle r1(4, 5), r2(4, 3);
    cout << minimum<Rectangle>(r2, r1);

    return 0;
}