#include "Functions.h"

int main()
{
    int a = userLogIn();
    if (a == 1)
    {
        Customer customer;
        char menu;
    re:

        cout << "\n\n\t\t\t\tGarage Menu\n\n\nEnter 1 to add Customer.\n"
            "\nEnter 2 to return Vehicle.\n"
            "\nEnter 3 to see and manage records.\n"
            "\nEnter 4 to manage Employees.\n"
            "\nEnter 0 to exit.\n\n";
        cin >> menu;
        switch (menu)
        {
        case '1':
        {

            cout << "\n\n\t\t\tAdding Customer\n\n";
            cin >> customer;
            addVehicle(customer);
            Sleep(1500);
            cout << "\n\n\n\t\t\tRecords added to database\n\n\nPress Enter Key to continue\n\n";
            cin.ignore();
            cin.get();
            break;
        }

        case '2':
        {
            returningVehicle();
            break;
        }

        case '3':
        {
            customerManagement();
            break;
        }

        case '4':
        {
            employeeManagement();
            break;
        }

        case '0':
        {
            LogIn::releaseInstance();
            return 0;
        }

        default:
        {
            cout << "\n\n\nInvalid Input. Enter again.\n";
            Sleep(1500);
            goto re;
        }
        }
        goto re;
    }
    else
    {
        LogIn::releaseInstance();
        return 0;
    }
}