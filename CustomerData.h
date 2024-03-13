#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

#pragma once
#include <string>
#include <iostream>
#include "SpotBook.h"


class CustomerData//:public SpotBook
{
public:
    CustomerData();
    ~CustomerData();
    int GetSpotType();
    void ShowCustomerData(const CustomerData & customerobject);
    void EnterCustomerData();   
    time_t entered_time=0;
    static int customer_id;


private:
   // static int counter_spot_booked;
   
    int spot_type;  
    std::string name;
    long long id;
    long long mob;
    std::string liencesPlate;    
};

#endif