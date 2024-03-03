#include "LargSpot.h"
int LargSpot::LargSpotCount=0;
LargSpot::LargSpot()
{

}
LargSpot::~LargSpot()
{

}
bool LargSpot::IsSpotFree(void)
{
    if (LargSpotCount>=10)
    {
        return false;
    }    
    else return true;
}
