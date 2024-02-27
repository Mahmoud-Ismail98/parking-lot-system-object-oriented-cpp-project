#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

#pragma once
#include <string>
#include <iostream>
#include "SpotBook.h"


class CustomerData:public SpotBook
{
public:
    CustomerData();
    ~CustomerData();
    int GetSpotType();
    void ShowCustomerData();
    void EnterCustomerData();   

private:
    static int counter_spot_booked;
    int spot_type;  
    std::string name;
    long long id;
    long long mob;
    std::string liencesPlate;    
};

#endif