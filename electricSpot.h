#ifndef ELECTRICSPOT_H
#define ELECTRICSPOT_H
#include "SpotBook.h"
#include <iostream>
#include <string>
#pragma once

class electricSpot:public SpotBook
{
public:
    electricSpot();
    ~electricSpot() override;
    bool IsSpotFree (void) override;
    void BookSpot(void)   override;
    void FreeSpot(void)   override;

private:
    static int electricSpotCount;
};

#endif