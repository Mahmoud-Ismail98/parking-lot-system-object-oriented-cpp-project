#include "SmallSpot.h"
int SmallSpot::SmallSpotCount=0;
SmallSpot::SmallSpot()
{
}
SmallSpot::~SmallSpot()
{

}
bool SmallSpot::IsSpotFree(void)
{
    if (SmallSpotCount>=10)
    {
        return false;
    }    
    else return true;
}
