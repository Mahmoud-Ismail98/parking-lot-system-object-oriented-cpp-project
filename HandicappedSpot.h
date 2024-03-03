#ifndef HANDICAPPEDSPOT_H
#define HANDICAPPEDSPOT_H
#include <iostream>
#include <string>
#pragma once

class HandicappedSpot
{
public:
    HandicappedSpot();
    ~HandicappedSpot();
    static bool IsSpotFree (void) ;
 
protected:
    static int HandicappedSpotCount;

};

#endif