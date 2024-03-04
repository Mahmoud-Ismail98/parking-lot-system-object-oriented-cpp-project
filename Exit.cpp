#include "Exit.h"

Exit::Exit()
{

}

Exit::~Exit()
{

}

void Exit::payment_operation( CustomerData & customer_object)
{
        int spot_fees;
        cout<<"*********************************************"<<endl;
        time_t now = time(0);
        double diffSeconds = difftime(now, customer_object.entered_time);
        int hours = (diffSeconds / 3600)+1;
        cout<<"Total time : "<<hours<<" hour"<<endl;
        int spot_type=customer_object.GetSpotType();
        switch (spot_type)
        {
        case 1:
            spot_fees=ParkingOperation::Handicapped_spot_fees;
            break;
        case 2:
            spot_fees=ParkingOperation::electric_spot_fees;
            break;        
        case 3:
            spot_fees=ParkingOperation::larg_spot_fees;
            break;
        case 4:
            spot_fees=ParkingOperation::small_spot_fees;
            break;                    
        default:
            break;
        }
        int Total_cost=spot_fees*hours;
        cout<<"Total cost : "<<Total_cost<<endl;
        cout<<"**********************************************"<<endl;
        cout<<"Thank you for coming"<<endl;      
}

void Exit::delete_custoemr(CustomerData & customer_object)
{
    
}

void Exit::print_fees()
{
    
}
void Exit::payment_option()
    {
        int type_of_payment;
        int card_number;
        int pin;
        std::cout << "Pay through : \n 1)Cash\n 2)Card" << std::endl;
        std::cin >> type_of_payment;
        if (type_of_payment == 1)
        {
            std::cout << "Payment through cash is successful" << std::endl;
        }
        else
        {
            std::cout << "Enter card number :";
            std::cin >> card_number;
            std::cout << std::endl;
            std::cout << "Enter PIN : ";
            std::cin >> pin;
            std::cout << "Payment through card is successful" << std::endl;
        }
    }