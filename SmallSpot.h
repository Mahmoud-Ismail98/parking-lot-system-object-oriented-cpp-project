#ifndef SMALLSPOT_H
#define SMALLSPOT_H
#include "SpotBook.h"
#include <iostream>
#include <string>
#pragma once

class SmallSpot:public SpotBook
{
public:
    SmallSpot();
    ~SmallSpot() override;
    bool IsSpotFree (void) override;
    void BookSpot(void) override;
    void FreeSpot(void) override;

private:
    static int SmallSpotCount;

};

#endif