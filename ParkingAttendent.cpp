#include "ParkingAttendent.h"

ParkingAttendent::ParkingAttendent()
{

}

ParkingAttendent::~ParkingAttendent()
{

}

void ParkingAttendent::evaluate_ticket_time(CustomerData & customer_object)
{
    time_t now = time(0);
    customer_object.entered_time=time(0);
    cout << "The local date and time is: "<<ctime(&now)<< endl;
}