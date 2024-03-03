#ifndef ELECTRICSPOT_H
#define ELECTRICSPOT_H
#include <iostream>
#include <string>
#pragma once

class electricSpot
{
public:
    electricSpot();
    ~electricSpot();
    static bool IsSpotFree();
protected:
    static int electricSpotCount;
};

#endif