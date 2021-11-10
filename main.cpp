#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include "funcs.h"

int main() {
    double x = 10;
    double y = 20;
    double z = 30;

    Coord3D *ppos = createCoord3D(x, y, z);
    Coord3D *pvel = createCoord3D(5, 6, 7);

    std::cout << "Coordinates after 10 seconds: " << move(ppos, pvel, 2) << std::endl;

    std::cout << std::setw(21) << "Address of ppos: " << ppos << std::endl;

    deleteCoord3D(pvel);
    deleteCoord3D(ppos); // release memory

    Coord3D *ppos_new = createCoord3D(x,y,z);
    std::cout << "Address of ppos_new: " << ppos_new << std::endl;
    deleteCoord3D(ppos_new); // release memory
}
