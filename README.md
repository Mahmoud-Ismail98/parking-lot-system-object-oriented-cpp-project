# Parking Lot Management System

This project implements a Parking Lot Management System in C++. The system allows for the efficient management of parking spaces for different types of vehicles, such as cars, motorcycles, trucks, and electric vehicles. It supports functionalities like adding customer records, displaying empty slots, managing parking fees, and processing payments.

## System Requirements

The parking lot system is designed to fulfill the following requirements:

1. **Multi-level Parking:** The parking lot consists of multiple floors, each with various types of parking spots, including spots for large vehicles, handicapped spots, and electric vehicle charging stations.

2. **Ticketing System:** Customers collect parking tickets from attendants upon entry and pay the attendant upon exit. 

3. **Slot Booking:** Parking spots are dynamically booked and freed as vehicles enter and exit the parking lot.

4. **Capacity Management:** The system ensures that the number of vehicles does not exceed the maximum capacity of the parking lot.

5. **Electric Vehicle Support:** Dedicated spots with electric panels allow customers to charge their electric vehicles.

6. **User Accounts:** There are separate accounts for administrators and parking attendants. Administrators have access to all customer information and can update parking fees.

7. **Payment Options:** Customers can pay for parking tickets using either cash or credit cards.

## Implementation Details

The system is implemented in C++ and utilizes object-oriented programming principles for efficient management of parking operations. 
### Class Diagram

Here's the class diagram for our project
![UML](https://github.com/Mahmoud-Ismail98/Modern-CPP-Level3-Moatasem-Elsayed/assets/63348980/0240231c-48b3-43ab-b0fe-88de14ab19ad)

### Main Components:

- **Account:** Manages user accounts and authentication.
- **Admin:** Handles administrative tasks such as viewing customer information and updating prices.
- **ParkingAttendent:** Handles parking attendant operations.
- **SpotBook:** Manages booking and freeing of parking spots.
- **CustomerData:** Stores and manages customer information.
- **ParkingOperation:** Provides overall parking lot operations.
- **Spot Types:** Includes HandicappedSpot, LargeSpot, SmallSpot, and ElectricSpot, each representing different types of parking spots.
- **Exit:** Handles the payment process and customer exit operations.

## Usage

1. Upon launching the program, users are prompted to choose their identity: either admin or parking attendant.
2. Admins can view customer records, update prices, and perform other administrative tasks.
3. Parking attendants can add customer records, display empty slots, and process payments.
4. Customers collect parking tickets upon entry and pay for their parking upon exit.
5. The system ensures efficient management of parking spots and provides a seamless experience for both administrators and customers.

## Getting Started

To run the program, compile the provided source files (`main.cpp`, `ParkingOperation.h`, `account.h`, etc.) using a C++ compiler. Once compiled, execute the generated executable file to start the Parking Lot Management System.
also you can use makefile to generate excutable directly using cmd 

```bash
     make run 
```
## Project Video

i have created a video demonstration showcasing the functionality and features of our parking lot management system. In the video, you'll see:

- A walkthrough of the user interface for both the admin and parking attendant modes.
- Examples of adding customer records, displaying empty parking slots, and processing payments.
- An overview of the system architecture and key functionalities.
- Insights into how the system handles various scenarios, such as full parking lots or different payment methods.

The video provides a comprehensive overview of our project and how it addresses the requirements outlined in the README.

https://github.com/Mahmoud-Ismail98/NTI-EMBEDDED-SYSTEM-4-MONTHS-INTERFACE-TASKS/assets/63348980/c1e1c9be-7744-4a26-863c-975f3334b004
