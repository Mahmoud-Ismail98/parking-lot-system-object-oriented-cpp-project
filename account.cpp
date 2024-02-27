#include "account.h"

account::account()
{

}

account::~account()
{

}


std::string account::ret_admin_passwoed(void)
{
    return this->admin_password;   
}

std::string account::ret_attendent_passwoed(void)
{
    return this->attendent_passwoed;
}
