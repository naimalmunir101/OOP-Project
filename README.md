# Auto Workshop Management System (C++ Project)

This is a C++ project I built for managing an Auto Repair Workshop — basically, it handles everything from registering customers and their cars to tracking repairs and garage status. Think of it like a backend system that powers a smart car repair shop.

---

## What’s This Project About?

So here’s the deal — workshops can get pretty messy with all the paperwork, customers, vehicles, repairs, and whatnot. This system is my attempt to organize it all in a digital way.

It's fully built in **C++**, using Object-Oriented Programming principles like:

- Inheritance  
- Composition  
- A bit of design pattern magic (used Singleton for Admin)  

---

## User Roles

### Admin (There can only be ONE!)

The Admin is kind of like the boss of the system. There’s only one Admin allowed (used the Singleton Pattern to enforce that).

The Admin can:

- Add new customers  
- Register their vehicles  
- Track what’s going on in the garage  
- View repair histories of any vehicle  

### Customer

Each customer can:

- Own one or more vehicles  
- Report problems (faults) with their vehicle  
- View their personal and vehicle details  

---

## Vehicles and Their Types

Vehicles are a huge part of this system. Each vehicle comes with:

- Model name  
- Number of doors  
- Engine capacity  
- Type (like Sedan or Truck)  
- Fault info (if any)  

Different vehicle types (inherited from a base `Vehicle` class):

- Truck  
- SUV  
- Sedan  
- SportsCar  
- HatchBack  
- Bus  

Each type can show faults a bit differently using polymorphism.

---

## Garage Management

The Garage keeps an eye on:

- Total number of vehicles  
- Vehicles currently under repair  
- Available vehicles (not in repair)  

Admin can check out this info, and the Garage keeps itself updated with changes as they happen.

---

## Fault Reporting

Each vehicle can have faults reported (like "brake issue" or "engine overheating"). These faults are:

- Stored inside the vehicle object (tight relationship)  
- Shown via a custom function (for clean output)  
- Tightly bound to the vehicle (composition relationship — they can’t exist alone)  

---

## Repair Records

Each vehicle has a `Record` object storing all its past repair history.

Admin can:

- Add new repair entries  
- View past fixes  

Records are tied directly to vehicles, and the Garage can also access them to track repairs.

---

## How Everything Connects (UML-style Relationships)

Here’s a rough idea of how stuff is connected:

- `Admin → Customer` : Admin adds and manages customers  
- `Customer → Vehicle` : Each customer can own multiple vehicles  
- `Vehicle → Fault` : A vehicle has its own fault info (can’t be separate)  
- `Garage ↔ Vehicle` : Garage manages and stores all the vehicles  
- `Admin ↔ Garage` : Admin can access Garage info  
- `Record → Vehicle` : Records are linked directly to vehicles  
- `Garage ↔ Record` : Garage checks records to manage repairs  
- `Person ← Customer, Admin` : Both roles inherit from a common `Person` class  
- `Person → Address` : Each person has an address (tight composition)  

---

## Key Classes (And What They Do)

### Person & Roles

- `Person` : Has basic info like name, CNIC, phone, and address  
- `Address` : Composed inside Person — tightly bound  
- `Customer` : Inherits from Person and owns vehicles  
- `Admin` : Also inherits from Person, but only one instance allowed (Singleton)  

### Vehicles

- `Vehicle` : Base class with model, engine, doors, etc.  
- Specialized types:
  - Truck  
  - SUV  
  - Sedan  
  - SportsCar  
  - HatchBack  
  - Bus  

Each type can override fault display and other behavior.

### Garage & Records

- `Garage` : Tracks how many cars are in, under repair, or available  
- `Record` : Keeps repair logs for every vehicle  

### Faults

- `Fault` : Stores vehicle problem descriptions (attached directly to `Vehicle`)  

---

## OOP Concepts & Patterns Used

- **Singleton Pattern** → To ensure there’s only one Admin  
- **Inheritance** → For roles (`Admin`, `Customer`) and vehicle types  
- **Composition** → For things like `Vehicle-Fault` or `Person-Address`  
- **Aggregation/Association** → For looser relationships like `Garage ↔ Record`  

---

## Final Thoughts

This was a fun but challenging project! I learned a lot about managing object relationships, using design patterns properly, and modeling real-world systems in code.

If you're into C++ and want to build something beyond just console apps — this could be a great base to start from.

Feel free to explore the code, fork it, or suggest improvements. If you want to turn this into a full-fledged web or GUI-based system, go for it.
