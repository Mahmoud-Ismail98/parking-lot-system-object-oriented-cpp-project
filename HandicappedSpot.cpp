#include "HandicappedSpot.h"

int  HandicappedSpot::HandicappedSpotCount=0;
HandicappedSpot::HandicappedSpot()
{

}

HandicappedSpot::~HandicappedSpot()
{

}

bool HandicappedSpot::IsSpotFree(void)
{
    if (HandicappedSpotCount>8)
    {
        return false;
    }    
    else return true;
}
