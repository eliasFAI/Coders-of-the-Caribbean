#ifndef ENTITY
#define ENTITY

#include <string>
#include "Point.h"

using namespace std;

class Entity
{
    int id;
    string type;
    Point coordinate;

    public:
        Entity();
        Entity(int id, string type, Point coordinate);
};

#endif