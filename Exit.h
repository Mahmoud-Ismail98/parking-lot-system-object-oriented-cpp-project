#ifndef EXIT_H
#define EXIT_H

#pragma once
#include <iostream>
#include <string>
#include "SpotBook.h"

class Exit:public SpotBook
{
public:
    Exit();
    ~Exit();
    void payment_operation();
    void payment_option();
    void print_fees();
private:
    int cost;
};

#endif