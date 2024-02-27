#include "ParkingOperation.h"
#include <iostream>

 

int ParkingOperation::number_free_spots = 40;
int ParkingOperation::Handicapped_spot_fees = 8;
int ParkingOperation::electric_spot_fees = 7;
int ParkingOperation::larg_spot_fees = 10;
int ParkingOperation::small_spot_fees = 15; // Define small_spot_fees only once


ParkingOperation::ParkingOperation()
{ 

}
ParkingOperation::~ParkingOperation()
{

}

void ParkingOperation::show_price_list(void)
{    
   /* std::cout<<"fees of Handicapped_spot per hour is "<<Handicapped_spot_fees <<"egp"<<std::endl;

    std::cout<<"fees of electric_spot per hour is "<<electric_spot_fees <<"egp"<<std::endl;

    std::cout<<"fees of larg_spot per hour is "<<larg_spot_fees <<"egp"<<std::endl;

    std::cout<<"fees of small_spot per hour is "<<small_spot_fees <<"egp"<<std::endl;*/

//    std::cout<<"fees of per hour is "<< <<"egp"<<std::endl;

}