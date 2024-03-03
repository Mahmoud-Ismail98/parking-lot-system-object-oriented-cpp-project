#ifndef LARGSPOT_H
#define LARGSPOT_H
#include <iostream>
#include <string>

#pragma once

class LargSpot
{
public:
    LargSpot();
    ~LargSpot();
    static bool IsSpotFree (void);
protected:
    static int LargSpotCount;
};

#endif