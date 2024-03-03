#ifndef PARKINGATTENDENT_H
#define PARKINGATTENDENT_H
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "account.h"
#include "ParkingOperation.h"

#pragma once

class ParkingAttendent:public account ,public ParkingOperation
{
public:
    ParkingAttendent();
    ~ParkingAttendent();
   // void show_price_list(void);

private:

};

#endif