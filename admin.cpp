#include "admin.h"

admin::admin()
{

}

admin::~admin()
{

}

void admin::update_parking_fees(void)
{
    int select_input=0;
    int new_price=0;
    std::cout<<"1 fees of Handicapped_spot per hour is "<<Handicapped_spot_fees <<" egp"<<std::endl;
    std::cout<<"2 fees of electric_spot per hour is "<<electric_spot_fees  <<" egp"<<std::endl;
    std::cout<<"3 fees of larg_spot per hour is "<<larg_spot_fees  <<" egp"<<std::endl;
    std::cout<<"4 fees of small_spot per hour is "<<small_spot_fees  <<" egp"<<std::endl;
    std::cout<<"select any fees you want to update ";
    std::cin>>select_input;

        switch (select_input)
        {
        case 1:
            std::cout<<"updated the new fees per hour of Handicapped_spot  ";
            std::cin>>new_price;
            Handicapped_spot_fees=new_price;
            std::cout<<"\nthe new price is updated";
            break;
        case 2:
            std::cout<<"updated the new fees per hour of electric_spot  ";
            std::cin>>new_price;
            electric_spot_fees=new_price;
            std::cout<<"\nthe new price is updated";
            break;
        case 3:
            std::cout<<"updated the new fees per hour of larg_spot ";
            std::cin>>new_price;
            larg_spot_fees=new_price;
            std::cout<<"\nthe new price is updated";
            break;
        case 4:
            std::cout<<"updated the new fees per hour of small_spot  ";
            std::cin>>new_price;
            small_spot_fees=new_price;
            std::cout<<"\nthe new price is updated";
            break;        
        default:
            std::cout<<"unvalid_input"<<std::endl;
            break;
        }
}