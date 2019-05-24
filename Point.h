//
// Created by a27stude on 16.04.19.
//

#ifndef DOJO5_POINT_H
#define DOJO5_POINT_H
struct  Point{
    int x,y;

    bool operator == (const Point& other) const {
        return this->x == other.x && this->y == other.y;
    }
};
#endif //DOJO5_POINT_H
