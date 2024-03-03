#ifndef SPOTBOOK_H
#define SPOTBOOK_H
#include <iostream>
#include <string>
#pragma once

#include <bits/stdc++.h>

#include "HandicappedSpot.h"
#include "electricSpot.h"
#include "LargSpot.h"
#include "SmallSpot.h"

#include "CustomerData.h"

class CustomerData; // Forward declaration

class SpotBook : public HandicappedSpot, public electricSpot, public SmallSpot ,public LargSpot{
public:
    SpotBook();
    ~SpotBook();
    void BookSpot(CustomerData CUSTOMER);
    void FreeSpot(CustomerData CUSTOMER);
    static int counter_spot_booked;
};

#endif // SPOTBOOK_H
