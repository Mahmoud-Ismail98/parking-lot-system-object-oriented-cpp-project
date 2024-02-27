#ifndef ACCOUNT_H
#define ACCOUNT_H

#pragma once
#include <string>
#include <iostream>

class account
{
public:
    std::string ret_admin_passwoed(void);
    std::string ret_attendent_passwoed(void);
    account();
    ~account();

private:
    std::string admin_password="1234";
    std::string attendent_passwoed="5678";
};

#endif