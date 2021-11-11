#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include "funcs.h"

int main() {
    std::cout << "Task A:" << std::endl;
    Coord3D pointP = {10, 20, 30};
    std::cout << "x: " << pointP.x << " y: " << pointP.y << " z: " << pointP.z << std::endl;
    std::cout << "sqrt(x^2 + y^2 + z^2): " << length(&pointP) << std::endl; // would print 37.4166

    std::cout << "\n-------------------------" << std::endl; // Line break 
    std::cout << "Task B:" << std::endl;
    Coord3D pointQ = {-20, 21, -22};

    std::cout << "Address of P: " << &pointP << std::endl;
    std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
    std::cout << "ans = " << ans << std::endl; // So which point is farther?

    std::cout << "\n-------------------------" << std::endl; // Line break
    std::cout << "Task C:" << std::endl;
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
    // prints: 2 -10 100.4

    std::cout << "\n-------------------------" << std::endl; // Line break
    std::cout << "Task E:" << std::endl; 

    Coord3D *ppos = createCoord3D(1, 4, 5);
    Coord3D *pvel = createCoord3D(6 , -1, 25);

    move(ppos, pvel, 10.0);

    std::cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}
