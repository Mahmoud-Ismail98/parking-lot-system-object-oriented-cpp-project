#ifndef PARKINGOPERATION_H
#define PARKINGOPERATION_H

#pragma once

class ParkingOperation
{
private:

public:

    ParkingOperation();
    ~ParkingOperation();
    void show_price_list(void);

//protected:
    //static because the following is shared between all classes
    static int number_free_spots;
    //fees per hour
    static int Handicapped_spot_fees;
    static int electric_spot_fees;
    static int larg_spot_fees; 
    static int small_spot_fees;    
};

#endif