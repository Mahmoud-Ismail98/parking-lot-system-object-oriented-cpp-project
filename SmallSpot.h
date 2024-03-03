#ifndef SMALLSPOT_H
#define SMALLSPOT_H
#include <iostream>
#include <string>
#pragma once

class SmallSpot
{
public:
    SmallSpot();
    ~SmallSpot();
    static bool IsSpotFree (void);
protected:
    static int SmallSpotCount;
};

#endif