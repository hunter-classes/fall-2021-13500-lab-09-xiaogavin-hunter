#include <iostream>
#include <cmath>
#include <string> 
#include "funcs.h"

// Task A
double length(Coord3D *p) {
    return round((sqrt((pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2)))) * 10000) / 10000;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    return length(p1) < length(p2) ? p2 : p1;
}

std::string move(Coord3D *ppos, Coord3D *pvel, double dt) { 
    /*
    x' = x + vel.x * dt;
    y' = y + vel.y * dt;
    z' = z + vel.z * dt;
    */
   Coord3D point = {0, 0, 0}; 

    // used for return values 
    point.x = ppos->x + pvel->x * dt; 
    point.y = ppos->y + pvel->y * dt;
    point.z = ppos->z + pvel->z * dt;

    return std::to_string((int)point.x) + " " + std::to_string((int)point.y) + " " + std::to_string((int)point.z);
}

Coord3D* createCoord3D(double x, double y, double z) { 
    Coord3D *points = new Coord3D;
    *points = {x, y, z};

    return points;
}

void deleteCoord3D(Coord3D *p) { 
    delete p;
}