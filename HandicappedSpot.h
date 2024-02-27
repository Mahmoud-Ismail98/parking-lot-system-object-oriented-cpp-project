#ifndef HANDICAPPEDSPOT_H
#define HANDICAPPEDSPOT_H
#include <iostream>
#include <string>
#include "SpotBook.h"
#pragma once

class HandicappedSpot:public SpotBook
{
public:
    HandicappedSpot();
    ~HandicappedSpot() override;
    bool IsSpotFree (void) override;
    void BookSpot(void)   override;
    void FreeSpot(void)   override;


private:
    static int HandicappedSpotCount;

};

#endif