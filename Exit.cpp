#include "Exit.h"

Exit::Exit()
{

}

Exit::~Exit()
{

}
/*
void Exit::payment_operation(CustomerData)
{

  cost =CustomerData.GetSpotType();  
}
*/

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