
#include <bits/stdc++.h>
#include "ParkingOperation.h"
#include "account.h"
#include "admin.h"
#include "ParkingAttendent.h"
#include "SpotBook.h"
#include "CustomerData.h"
#include "HandicappedSpot.h"
#include "LargSpot.h"
#include "SmallSpot.h"
#include "ElectricSpot.h"
#include "Exit.h"
using namespace std;

int main (void)
{ 
    // Create a vector of pointer to objects    
    std::vector<CustomerData*> customers;
    int customer_id=0;
    int log;  
    char ans;  
    string password, username;
    account ACCOUNT;
    admin ADMIN;
    ParkingAttendent PARK_ATTENDENT;
    SpotBook BOOKSPOT;
    CustomerData CUSTOMER;
    CustomerData newCustomer;
    CustomerData *ptrCustomer;
    Exit custmer_exit;
    while(1){
    cout <<"wellocome to parking center"<<endl;
    cout << "\n*********************************** CAR PARKING MANAGEMENT ***********************************\n";
    cout << "1.Admin mode";
    cout << "\n2.Parking attendant mode";
    cout << "\n************************************ Choose your identity ************************************\n";
    cin >> log;
    switch (log)
    {
        case 1:
            system("clear");
            cout << "\n****************************************** Admin mode ******************************************\n";
            cout << "Enter admin login password : ";
            cin >> password; 
            if ((ADMIN.ret_admin_passwoed().compare(password)) == 0)
            {
                int choice;
                do
                {
                    cout << "1.Show all record\n";
                    cout << "2.show price list \n";
                    cout << "3.Display Empty Slots of all floors\n";
                    cout << "4.Update Price for slots \n";
                    cout << "5.Exit\n";
                    cin >> choice;
                        switch (choice)
                        {
                        case 1:
                            for(auto it: customers)
                                CUSTOMER.ShowCustomerData(*it);
                                cout<<"\n\n"<<endl;

                            break;
                        case 2:
                            ADMIN.show_price_list();
                            break;
                        case 3:
                            cout<<"number of empty spots "<< (ParkingOperation::number_free_spots - SpotBook::counter_spot_booked);
                            break;                            
                        case 4:
                            ADMIN.update_parking_fees();
                            break;
                        case 5:
                            exit(0);
                            break;
                        default:
                            cout << "Wrong value entered\n\n\n";
                        }
                        cout << "\nDo you want to continue(y:n)? ";
                        cin >> ans;
                } while (ans == 'y');
            }  
            else 
                    cout << "\n     incorrect password \n\n\n";
            break;
        case 2:
            cout << "Enter Park attendent login password : ";
            cin >> password;
            if ((PARK_ATTENDENT.ret_attendent_passwoed().compare(password)) == 0)
            {
                int choice;
                do
                {
                    system("clear");
                    cout << "\n************************************ Parking attendant mode ************************************\n";
                    cout << "1.Add customer record\n";
                    cout << "2.Display Empty Slots of all floors\n";
                    cout << "3.Display price list of different spots\n";
                    cout << "4.Display info of selected customer \n";
                    cout << "5.Exit from park and process payment \n";
                    cout << "6.Exit\n";
                  //  "\n**********************************************************************************************\n";
                    int c;
                    int spot_type;                     
                    cin >> c;
                    switch (c)
                    {
                        case 1:
                            ptrCustomer = new CustomerData; // Create a new CustomerData object
                            ptrCustomer->EnterCustomerData();
                            PARK_ATTENDENT.evaluate_ticket_time(*ptrCustomer);
                            customers.push_back(ptrCustomer);
                            BOOKSPOT.BookSpot(*ptrCustomer); 
                            cout<<"you id is "<<ptrCustomer->customer_id<<endl;
                            break;
                        case 2:
                              cout<<"number of empty spots "<< (ParkingOperation::number_free_spots - SpotBook::counter_spot_booked);
                              break;
                        case 3:
                            PARK_ATTENDENT.show_price_list();
                            break;
                        case 4:
                            int local_customer_id;
                            cout << "plz customer id to show  ";
                            cin >>local_customer_id;
                           if (customer_id >= 0 && customer_id < customers.size()) {                               
                            CUSTOMER.ShowCustomerData(*customers[local_customer_id-1]);
                            } else {
                            cout << "Invalid customer ID\n";
                            }
                            break;
                        case 5:
                            int customer_id;
                            cout <<"enter customer ID ";
                            cin >> customer_id;           
                           if (customer_id > 0 && customer_id <= customers.size()+1) {                 
                            custmer_exit.payment_operation(*customers[customer_id-1]);
                            delete customers[customer_id - 1];
                            customers.erase(customers.begin() + customer_id - 1);                        
                            } 
                            else {
                            cout << "Invalid customer ID\n";
                            }
                            break;
                        case 6:
                            exit(0);
                            break;
                        default:
                            cout << "Wrong value entered\n";
                    }
                    cout << "\nDo you wish to continue in Parking Attendant Mode(y:n)? ";
                    cin >> ans;
                } while (ans == 'y');
                }
            else
                cout << "\n     Incorrect password\n\n\n";
            break;                    
    }  
    }  
    return 0;
}

