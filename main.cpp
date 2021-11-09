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
    Coord3D *pvel = createCoord3D(x - 5, y + 21, z - 45);

    std::cout << "Coordinates after 10 seconds: " << move(ppos, pvel, 10.0) << std::endl;

    std::cout << std::setw(21) << "Address of ppos: " << ppos << std::endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);

    Coord3D *ppos_new = createCoord3D(x,y,z);
    std::cout << "Address of ppos_new: " << ppos_new << std::endl;
    deleteCoord3D(ppos_new); // release memory
}
