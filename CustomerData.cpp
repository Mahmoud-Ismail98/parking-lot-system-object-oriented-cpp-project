#include "CustomerData.h"


int CustomerData::counter_spot_booked=0;

CustomerData::CustomerData()
{

}

CustomerData::~CustomerData()
{

}

int CustomerData::GetSpotType()
{
    return this->spot_type;
}

void CustomerData::ShowCustomerData()
{
        std::cout << "\nName :" << name;
        std::cout << "\nMobile no. :" << mob;
        std::cout << "\nVehicle license plate :" << liencesPlate;
        std::cout << "\nVehicle type :" << spot_type;
        std::cout << "\n";
}

void CustomerData::EnterCustomerData()
{
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter mobile number: ";
        std::cin >> mob;
        std::cout << "Enter car number plate: ";
        std::cin >> liencesPlate;
        std::cout << "Enter type of spot ->\n1:Handicapped_spot \n2:electric_spot\n3:larg_spot \n4.small_spot \n";        
        std::cin >> spot_type;
  /*    if (SpotBook::IsSpotFree(this))
        {
          SpotBook::BookSpot(this); 
          counter_spot_booked++; 
        }
        else 
        std::cout << "there is no free spot ";  */      
} 
