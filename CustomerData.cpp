#include "CustomerData.h"


int CustomerData::counter_customer=0;

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

void CustomerData::ShowCustomerData(const CustomerData & customerobject)
{
        std::cout << "\ncustomer_id :" << customerobject.customer_id;
        std::cout << "\nName :" << customerobject.name;
        std::cout << "\nMobile no. :" << customerobject.mob;
        std::cout << "\nVehicle license plate :" << customerobject.liencesPlate;
        std::cout << "\nVehicle type :" ;
        if (customerobject.spot_type==1)
        std::cout <<"Handicapped_spot ";        
        else if (customerobject.spot_type==2)
        std::cout <<"electric_spot ";        
        else if (customerobject.spot_type==3)
        std::cout <<"larg_spot ";        
        else if (customerobject.spot_type==4)
        std::cout <<"small_spot ";        
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
        counter_customer++;
        customer_id=counter_customer;
} 
