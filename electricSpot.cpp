#include "electricSpot.h"

int electricSpot::electricSpotCount=0;
electricSpot::electricSpot()
{
}
electricSpot::~electricSpot()
{

}
bool electricSpot::IsSpotFree(void)
{
    if (electricSpotCount>=10)
    {
        return false;
    }    
    else return true;
}
