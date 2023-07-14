#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <string.h>
#include <conio.h>
#include <cstdlib>

void mainMenu()
{
    int lchoice;
    int schoice, back;

    cout << "\t               XYZ Railways " << endl
         << endl;
    cout << "\t_________________________Main Menu_______________________" << endl;

    cout << "\t___________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for Train Booking              \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;
    cout << "\t|\t Press 4 to display Database            \t|" << endl;
    cout << "\t|\t Press 5 to Cancel                      \t|" << endl;
    cout << "\t|\t Press 6 to view E-Catering Database    \t|" << endl;    
    cout << "\t|\t Press 7 exit                           \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t___________________________________________________________" << endl;

    cout << "Enter the Choice: ";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;
    orderFood f;
    // cancel c;

    switch (lchoice)
    {
    case 1:
    {
        char filename[] = "tickets.txt";
        remove(filename);

        cout << "____Customers___" << endl
             << endl;
        d.information();
        cout << "Press any key to go back to the Main Menu" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 2:
    {
        cout << "___Book a ticket in this section__" << endl
             << endl;
        r.trains();
        break;
    }

    case 3:
    {
        cout << "____Getting your Ticket___" << endl
             << endl;
        t.Bill();

        cout << "Your Ticket is printed, you can collect it" << endl
             << endl;

        cout << "Press 1 to display your ticket ";
        cin >> back;

        if (back == 1)
        {
            t.dispBill();
            t.database();
            cout << "Press any key to go back" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }
        }

        else
        {
            mainMenu();
        }
        break;
    }

    case 4:
    {
        t.dispDatabase();
        cout << "Press any key to go back" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 5:
    {
        t.deletedata();
        cout << "Press any key to go back" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 7:
    {
        cout << endl
             << endl;

        return;
        break;
    }

    case 6:
    {
        f.displayFoodDatabase();
        mainMenu();

        break;
    }

    default:
    {
        cout << "Invalid Input, Please try again!" << endl
             << endl;
        mainMenu();
        break;
    }
    }
}

// mainmenu2

void mainMenu2()
{
    int lchoice;
    int schoice, back;

    cout << "\t               XYZ Railways " << endl
         << endl;
    cout << "\t_________________________Main Menu_______________________" << endl;

    cout << "\t___________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for Train Booking              \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;

    cout << "\t|\t Press 4 to Cancel                      \t|" << endl;
    cout << "\t|\t Press 5 to order food                  \t|" << endl;

    cout << "\t|\t Press 6 exit                           \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t____________________________________________________________" << endl;

    cout << "Enter the Choice: ";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;
    orderFood f;
    // cancel c;

    switch (lchoice)
    {
    case 1:
    {
        char filename[] = "tickets.txt";
        remove(filename);

        cout << "____Customers___" << endl
             << endl;
        d.information();
        cout << "Press any key to go back to the Main Menu" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 2:
    {
        cout << "___Book a ticket in this section__" << endl
             << endl;
        r.trains();
        break;
    }

    case 3:
    {
        cout << "____Getting your Ticket___" << endl
             << endl;
        t.Bill();

        cout << "Your Ticket is printed, you can collect it" << endl
             << endl;

        cout << "Press 1 to display your ticket ";
        cin >> back;

        if (back == 1)
        {
            t.dispBill();
            t.database();
            cout << "Press any key to go back" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }
        }

        else
        {
            mainMenu();
        }
        break;
    }

    case 4:
    {
        t.deletedata();
        cout << "Press any key to go back" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 5:
    {
        f.foodOptions();

        break;
    }

    case 6:
    {
        cout << endl
             << endl;

        firstPage();
        break;
    }

    default:
    {
        cout << "Invalid Input, Please try again!" << endl
             << endl;
        mainMenu();
        break;
    }
    }
};