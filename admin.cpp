#include "admin.h"

admin::admin()
{

}

admin::~admin()
{

}


void admin::show_park_status(void)
{
    int input_state;
    std::cout<<"1:show price list \n 2:show free spot" <<std::endl;
    //std::cin>> input_state >>std::endl;
    if (input_state == 1 )
    {
        show_price_list();
    }
    else
    {
      //  std::cout<< number_free_spots<<std::endl;
    }
    
    
}
void admin::update_parking_fees(void)
{
    int select_input=0;
    int new_price=0;
    std::cout<<"select any fees you want to update "<<std::endl;
    std::cout<<"1 fees of Handicapped_spot per hour is "<<Handicapped_spot_fees <<"egp"<<std::endl;
    std::cout<<"2 fees of electric_spot per hour is "<<electric_spot_fees  <<"egp"<<std::endl;
    std::cout<<"3 fees of larg_spot per hour is "<<larg_spot_fees  <<"egp"<<std::endl;
    std::cout<<"4 fees of small_spot per hour is "<<small_spot_fees  <<"egp"<<std::endl;
    std::cin>>select_input;

        switch (select_input)
        {
        case 1:
            std::cout<<"updated the new fees per hour "<<std::endl;
            std::cin>>new_price;
          //  Handicapped_spot_fees=new_price;
            break;
        case 2:
            std::cout<<"updated the new fees per hour "<<std::endl;
            std::cin>>new_price;
           // electric_spot_fees=new_price;
            break;
        case 3:
            std::cout<<"updated the new fees per hour "<<std::endl;
            std::cin>>new_price;
          //  larg_spot_fees=new_price;
            break;
        case 4:
            std::cout<<"updated the new fees per hour "<<std::endl;
            std::cin>>new_price;
         //   small_spot_fees=new_price;
            break;        
        default:
            std::cout<<"unvalid_input"<<std::endl;
            break;
        }
    

}