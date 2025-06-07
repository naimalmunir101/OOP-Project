# OOP-Project

# Auto Workshop Management System
This system helps manage everything that goes on inside an auto repair workshop. From handling customers and their vehicles to keeping track of repairs and garage activity — it covers it all. It's built using C++, serving as the backend for a smart automobile maintenance platform.

## What It Does?
**-User Roles**

Admin is the main controller of the system.
Can add new customers, register their vehicles, track garage status, and view repair records.
Uses a Singleton pattern — meaning only one Admin can exist in the system at any time.

**-Customers & Their Vehicles**

A Customer can own one or more Vehicles.
They can report issues with their vehicles and view their own details.

**-Vehicle Types**

Every vehicle includes details like the number of doors, engine capacity, model, type, and any reported faults.
Supports different vehicle types:
Truck, SUV, Sedan, SportsCar, HatchBack, and Bus.
These types are all built from a base class called Vehicle, and each one can customize how fault information is shown.

**-Garage Management**

The Garage keeps track of:
The total number of vehicles
How many are currently being repaired
How many are available
The Admin can check the status of the garage, while the garage itself updates and displays this information.

**-Fault Reporting**

Each vehicle has a connected Fault object that stores details about any issues.
These faults are part of the vehicle itself and can't exist without one.
Faults can be viewed through a special function that shows problem descriptions.

**-Repair Records**

The Record class stores the repair history for each vehicle.
Admin can add repair entries or browse through previous records.

## How Everything Connects

Admin ↔ Customer → Admin manages and adds customers.

Customer ↔ Vehicle → A customer owns one or more vehicles.

Vehicle → Fault → Every vehicle includes its own fault information (strong link).

Garage ↔ Vehicle → Garage holds and manages a group of vehicles (looser link).

Admin ↔ Garage → Admin can view and interact with the garage.

Record ↔ Vehicle → Repair records are tied to specific vehicles.

Garage ↔ Record → Garage uses records to track repairs over time.

Person ← Customer, Admin → Admin and Customer share common personal info (name, CNIC, etc.) via inheritance.

Person → Address → Each person has an address (tight composition).

## Key Classes in the System
**People & Roles**

Person: Basic info like name, CNIC, phone number, and address.
Address: Tied to each person.
Customer: Inherits from Person, can own vehicles.
Admin: Also inherits from Person; only one instance allowed.

**Vehicles**

Vehicle: The main vehicle class — includes model, engine, doors, faults, etc.

Specialized vehicle types (inherit from Vehicle):
Truck, 
SUV, 
Sedan, 
SportsCar, 
HatchBack, 
Bus

**Garage & Repair Records**

Garage: Tracks vehicle count and repair status.

Record: Keeps a log of repairs done on each vehicle.

**Faults**

Fault: Stores and shows problems found in vehicles. Fully integrated into the Vehicle class.

## Design Patterns & Relationships
**Singleton Pattern:** Only one Admin object can be created.

**Inheritance:** Used to define relationships like Vehicle types or shared person details.

**Composition:** Strong relationships, like Vehicle owning a Fault or Person having an Address.

**Aggregation/Association:** Looser connections — e.g., Admin interacting with Garage, or Garage managing Records.


![UML](https://github.com/user-attachments/assets/28d6aba1-b8d5-482d-8885-eb447a87d356)






