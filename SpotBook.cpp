
#include "SpotBook.h"
using namespace std;

int  SpotBook::counter_spot_booked=0;
SpotBook::SpotBook()
{

}
SpotBook::~SpotBook()
{

}

void SpotBook::BookSpot(CustomerData CUSTOMER)
{
    int spot_type=CUSTOMER.GetSpotType();
    if(spot_type == 1 && HandicappedSpot::IsSpotFree())
    {
        HandicappedSpot::HandicappedSpotCount++;
        counter_spot_booked++;
    }
    else if(spot_type == 2 && electricSpot::IsSpotFree())
    {       
        electricSpot::electricSpotCount++;
        counter_spot_booked++;
    }
    else if(spot_type == 3 && LargSpot::IsSpotFree())
    {        
        LargSpot::LargSpotCount++;
        counter_spot_booked++;
    }
    else if(spot_type == 4 && SmallSpot::IsSpotFree())
    {
        SmallSpot::SmallSpotCount++;
        counter_spot_booked++;
    }    
    else
    {
        cout<<"the is no free spot "<<endl;
    }
}

void SpotBook::FreeSpot(CustomerData CUSTOMER)
{
    int spot_type=CUSTOMER.GetSpotType();
    if(spot_type == 1)
    {
        HandicappedSpot::HandicappedSpotCount--;
        counter_spot_booked--;
    }
    else if(spot_type == 2)
    {
        electricSpot::electricSpotCount--;
        counter_spot_booked--;
    }
    else if(spot_type == 3)
    {
      //  LargeSpot::LargSpotCount--;
        counter_spot_booked--;
    }
    else if(spot_type == 4)
    {
        SmallSpot::SmallSpotCount--;
        counter_spot_booked--;
    }      
}

