#ifndef EXIT_H
#define EXIT_H

#pragma once
#include <iostream>
#include <string>

#include "SpotBook.h"
#include <ctime>
#include "CustomerData.h"
#include "ParkingOperation.h"
using namespace std;

class Exit:public ParkingOperation ,public SpotBook
{
public:
    Exit();
    ~Exit();
    void payment_operation( CustomerData & customer_object);
    void delete_custoemr( CustomerData & customer_object);
    void payment_option();
    void print_fees();
private:
    int cost;
};

#endif