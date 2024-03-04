#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <string>
#include "account.h"
#include "ParkingOperation.h"
#pragma once

class admin:public account,public ParkingOperation
{
public:
    admin();
    ~admin();
    void update_parking_fees(void);
private:

};

#endif