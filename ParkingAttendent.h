#ifndef PARKINGATTENDENT_H
#define PARKINGATTENDENT_H
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "account.h"
#include "ParkingOperation.h"
#include <ctime>
#include "CustomerData.h"
using namespace std;
#pragma once

class ParkingAttendent:public account ,public ParkingOperation
{
public:
    ParkingAttendent();
    ~ParkingAttendent();
    void evaluate_ticket_time(CustomerData & customer_object);
private:

};

#endif