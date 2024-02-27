#ifndef SPOTBOOK_H
#define SPOTBOOK_H
#include <iostream>
#include <string>
#pragma once

class SpotBook
{
public:
    SpotBook();
    virtual ~SpotBook();
    virtual bool IsSpotFree (void);
    virtual void BookSpot(void);
    virtual void FreeSpot(void);
private:
    
protected:
    static int counter_spot_booked;
};

#endif