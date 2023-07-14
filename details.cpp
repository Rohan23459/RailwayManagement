#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <string.h>
#include <conio.h>
#include <cstdlib>

class Details
{
public:
    static string name[6], gender[6];
    int phoneNo;
    static int age[6];
    static string bp[6];
    static int cId[6];
    char arr[100];
    static int pnr;
    static int n;
    // pnr = 1000000000 + (rand() % 9000000000);

    void information()
    {
        srand(time(NULL));
        pnr = 1000000000 + (rand() % 9000000000);
        cout << "\nYour PNR number is: " << pnr << endl;
        cout << "\nEnter the number of passengers: ";
        cin >> n;
        if (n > 6)
        {
            cout << "You can book tickets for only 6 passengers in a ticket!" << endl
                 << endl;
            mainMenu();
        }
        for (int i = 0; i < n; i++)
        {

            cout << "\n Enter the customer ID :";
            cin >> cId[i];

            cout << "\n Enter the Name :";
            cin >> name[i];
            cout << "\n Enter the age :";
            cin >> age[i];
            cout << "\n Enter Birth Preference :";
            cin >> bp[i];
            cout << "\n Gender:";
            cin >> gender[i];
            // cout << "Yours details are saved with us.\n";
        }
        cout << "Yours details are saved with us.\n";

        cout << "Your PNR number is: " << pnr << endl;
        cout << "Please use this PNR number to book tickets!" << endl
             << endl;
    }
};
