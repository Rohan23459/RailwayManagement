#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <string.h>
#include <conio.h>
#include <cstdlib>

class orderFood : public ticket
{

public:
    string fpnr, cpnr, cname, ccid, cgen, cdest, ccharges;
    int fcharges;

    void foodOptions()
    {
        cout << "\n____________________________________________________________________" << endl;
        cout << "____________________WELCOME TO E-CATERING SERVICE_______________________" << endl
             << endl;
        cout << "\t1. View Menu and Order Food" << endl;
        cout << "\t2. Print Receipt" << endl;
        cout << "\t3. Back" << endl;
        cin >> choice1;
        cout << endl;

        switch (choice1)
        {
        case 1:
        {
            char filename[]="foodr.txt";
            remove(filename);
            getDetails();

            break;
        }

        case 2:
        {
            displayFoodReceipt();
            break;
        }

        case 3:
        {
            mainMenu2();
            
            break;
        }

        default:
        {
            cout << "Invalid Option! Try Again!" << endl;
            foodOptions();
        }
        }
    }

    void getDetails()
    {
        cout << "\n____________________________________________________________________" << endl;
        cout << "Enter Details to continue" << endl;
        cout << "\tEnter Your PNR number: ";
        cin >> fpnr;

        ifstream f1;
        f1.open("records.txt");
        do
        {
            if (f1.eof())
            {
                cout << "PNR does not match with our record!\nPlease Enter a valid PNR! " << endl;
                f1.close();
                getDetails();
            }

            f1 >> cpnr >> ccid >> cname >> cgen >> cdest >> ccharges;
            

        } while (cpnr != fpnr);
        f1.close();

        if (cpnr == fpnr)
        {
            cout << "Welcome " << cname << "! Please find the Menu!" << endl;
            displayMenu();
        }

        else
        {
            cout << "Try Again" << endl;
            getDetails();
        }
    }

    void displayMenu()
    {
        fcharges = 0;
        cout << "\n____________________________________________________________________" << endl;
        cout << "____________________________FOOD MENU_________________________________" << endl
             << endl;

        cout << "\t|S.no."
             << "\t|Item Name"
             << "\t\t\t\t|Price"
             << "\t\t|" << endl;
        cout << "\t|1."
             << "\t|Simple Veg Thali"
             << "\t\t\t|Rs. 190"
             << "\t\t|" << endl;
        cout << "\t|2."
             << "\t|Special Veg Thali"
             << "\t\t\t|Rs. 210"
             << "\t\t|" << endl;
        cout << "\t|3."
             << "\t|Veg Deluxe Thali"
             << "\t\t\t|Rs. 240"
             << "\t\t|" << endl;
        cout << "\t|4."
             << "\t|Simple Non-Veg Thali"
             << "\t\t\t|Rs. 210"
             << "\t\t|" << endl;
        cout << "\t|5."
             << "\t|Special Non-Veg Thali"
             << "\t\t\t|Rs. 250"
             << "\t\t|" << endl;
        cout << "\t|6."
             << "\t|Non-Veg Deluxe Thali"
             << "\t\t\t|Rs. 270"
             << "\t\t|" << endl;
        cout << "\t|7."
             << "\t|Simple South-Indian Thali"
             << "\t\t|Rs. 210"
             << "\t\t|" << endl;
        cout << "\t|8."
             << "\t|Special South-Indian Thali"
             << "\t\t|Rs. 240"
             << "\t\t|" << endl;

        int choicess[8], noOfItems;
        cout << "Enter the number of Items you want to book: " << endl;
        cin >> noOfItems;

        for (int i = 0; i < noOfItems; i++)
        {
        tryagain:
            cout << "Enter your Choice " << i + 1 << ": ";
            cin >> choicess[i];
            cout << endl;

            fstream f2;
            fstream f3;

            f2.open("foodr.txt", ios::app);
            f3.open("foodd.txt", ios::app);

            switch (choicess[i])
            {
            case 1:
            {
                cout << "\tSimple Veg Thali booked!" << endl;
                fcharges += 190;
                f2 << "\t|Simple Veg Thali"
                   << "\t\t"
                   << "Rs. 190" << endl;
                f3 << cpnr << " Simple Veg Thali"
                   << " 190" << endl;
                break;
            }

            case 2:
            {
                cout << "\tSpecial Veg Thali booked!" << endl;
                fcharges += 210;
                f2 << "\t|Special Veg Thali"
                   << "\t\t"
                   << "Rs. 210" << endl;
                f3 << cpnr << " Special Veg Thali"
                   << " 210" << endl;
                break;
            }

            case 3:
            {
                cout << "Veg Deluxe Thali booked!" << endl;
                fcharges += 240;
                f2 << "\t|Veg Deluxe Thali"
                   << "\t\t"
                   << "Rs. 210" << endl;
                f3 << cpnr << " Veg Deluxe Thali"
                   << " 210" << endl;
                break;
            }

            case 4:
            {
                cout << "Simple Non-Veg Thali booked!" << endl;
                fcharges += 210;
                f2 << "\t|Simple Non-Veg Thali"
                   << "\t\t"
                   << "Rs. 210" << endl;
                f3 << cpnr << " Simple Non-Veg Thali"
                   << " 210" << endl;
                break;
            }

            case 5:
            {
                cout << "Special Non-Veg Thali booked!" << endl;
                fcharges += 250;
                f2 << "\t|Simple Non-Veg Thali"
                   << "\t\t"
                   << "Rs. 250" << endl;
                f3 << cpnr << " Simple Non-Veg Thali"
                   << " 250" << endl;
                break;
            }

            case 6:
            {
                cout << "Non-Veg Deluxe Thali booked!" << endl;
                fcharges += 270;
                f2 << "\t|Non-Veg Deluxe Thali"
                   << "\t\t"
                   << "Rs. 270" << endl;
                f3 << cpnr << " Non-Veg Deluxe Thali"
                   << " 270" << endl;
                break;
            }

            case 7:
            {
                cout << "Simple South-Indian Thali booked!" << endl;
                fcharges += 210;
                f2 << "\t|Simple South-Indian Thali"
                   << "\t"
                   << "Rs. 210" << endl;
                f3 << cpnr << " Simple South-Indian Thali"
                   << " 210" << endl;
                break;
            }

            case 8:
            {
                cout << "Special South-Indian Thali booked!" << endl;
                fcharges += 240;
                f2 << "\t|Special South-Indian Thali"
                   << "\t"
                   << "Rs. 240" << endl;
                f3 << cpnr << " Special South-Indian Thali"
                   << " 240" << endl;
                break;
            }

            default:
            {
                cout << "Enter Valid Input!\n";
                f2.close();
                f3.close();
                goto tryagain;

                break;
            }
            }

            f2.close();
            f3.close();
        }

        cout << "Order Placed Successfully! Please collect your Reciept by Print Reciept option!" << endl;
        system("pause");
        foodOptions();
    }

    void displayFoodReceipt()
    {

        cout << "\n________________________________________________________________________" << endl;
        cout << "____________________________ORDER RECIEPT_________________________________" << endl
             << endl;

        cout << "\tPassenger Details:\n";
        cout << "\t|PNR Num\t\t|"
             << "Name\t|"
             << "Gender\t|"
             << "Boarding\t|"
             << "Destination\t|"
             << endl;
        cout << "\t|" << cpnr << "\t\t|" << cname << "\t|" << cgen << "\t|CHN\t\t|" << cdest << "\t\t|" << endl
             << endl;

        cout << "\tOrdered Food Details:\n";
        ifstream f4("foodr.txt");
        {
            if (!f4)
            {
                cout << "File error!" << endl;
            }

            while (!f4.eof())
            {

                f4.getline(arr, 100);
                cout << arr << endl;
            }
        }

        f4.close();
        system("pause");
        foodOptions();
    }

    void displayFoodDatabase()
    {

        string food1, food2, food3, price;

        cout << "\n________________________________________________________________________" << endl;
        cout << "____________________________FOOD DATABASE_________________________________" << endl
             << endl;

        cout << "\t|PNR no\t\t|Item Name\t\t\t\t|Price\t\t|" << endl;
        ;

        fstream f5("foodd.txt", ios::in);
        while (f5 >> cpnr >> food1 >> food2 >> food3 >> price)
        {

            cout << "\t|" << cpnr << "\t|" << food1 << " " << food2 << " " << food3 << "\t\t\t|Rs. " << price << "\t|" << endl;
            cout << flush;
        }

        f5.close();
        system("pause");
    }
};