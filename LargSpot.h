#ifndef LARGSPOT_H
#define LARGSPOT_H
#include "SpotBook.h"
#include <iostream>
#include <string>

#pragma once

class LargSpot:public SpotBook
{
public:
    LargSpot();
    ~LargSpot() override;
    bool IsSpotFree (void) override;
    void BookSpot(void)   override;
    void FreeSpot(void)   override;

private:
    static int LargSpotCount;
};

#endif