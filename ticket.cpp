#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <string.h>
#include <conio.h>
#include <cstdlib>


float registration::charges;
int registration::choice;

class ticket : public registration
{

public:
    void Bill()
    {

        string destination[6] = "";

        for (int i = 0; i < n; i++)
        {

            ofstream outf("tickets.txt", ios::app);
            {

                outf << pnr << "\t\t|";
                outf << cId[i] << "\t\t|";
                outf << name[i] << "\t|";
                outf << gender[i] << "\t|";

                if (registration::choice == 1)
                {
                    destination[i] = "Delhi";
                }

                else if (registration::choice == 2)
                {
                    destination[i] = "Chennai";
                }

                else if (registration::choice == 3)
                {
                    destination[i] = "Patna";
                }

                else if (registration::choice == 4)
                {
                    destination[i] = "Nagpur";
                }

                else if (registration::choice == 5)
                {
                    destination[i] = "Jaipur";
                }

                else if (registration::choice == 6)
                {
                    destination[i] = "Mumbai";
                }

                outf << "CHN"
                     << "\t\t|";
                outf << destination[i] << "\t\t|";
                outf << registration::charges << "\t|";
                outf << endl;
            }

            outf.close();
        }
        cout << "Total Cost: " << charges * n;
    }

    void database()
    {
        string destination[6] = "";

        for (int i = 0; i < n; i++)
        {

            ofstream outf("records.txt", ios::app);
            {

                outf << pnr << " ";
                outf << cId[i] << " ";
                outf << name[i] << " ";
                outf << gender[i] << " ";

                if (registration::choice == 1)
                {
                    destination[i] = "Delhi";
                }

                else if (registration::choice == 2)
                {
                    destination[i] = "Chennai";
                }

                else if (registration::choice == 3)
                {
                    destination[i] = "Patna";
                }

                else if (registration::choice == 4)
                {
                    destination[i] = "Nagpur";
                }

                else if (registration::choice == 5)
                {
                    destination[i] = "Jaipur";
                }

                else if (registration::choice == 6)
                {
                    destination[i] = "Mumbai";
                }

                outf << destination[i] << " ";
                outf << registration::charges;
                outf << endl;
            }

            outf.close();
        }
    }

    void dispBill()
    {

        cout << "____XYZ Railways_____" << endl;
        cout << "____Tickets______" << endl;
        cout << "___________" << endl
             << endl;
        ;

        cout << "PNR Num\t\t\t|"
             << "Customer ID\t|"
             << "Name\t|"
             << "Gender\t|"
             << "Boarding\t|"
             << "Destination\t|"
             << "Charge\t|" << endl;

        ifstream ifs("tickets.txt");
        {
            if (!ifs)
            {
                cout << "File error!" << endl;
            }

            while (!ifs.eof())
            {

                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }

        ifs.close();
    }

    void dispDatabase()
    {
        string cpnr,cid,cname,cgen,cdest,ccharge;

        cout << "____XYZ Railways_____" << endl;

        cout << "____Tickets______" << endl;
        cout << "___________" << endl
             << endl;
        ;

        cout << "|PNR Num\t|"
             << "Customer ID\t|"
             << "Name\t\t|"
             << "Gender\t|"
             << "Destination\t|"
             << "Charge\t\t|" << endl;

        ifstream ifs;
        ifs.open("records.txt");

        while(ifs>>cpnr>>cid>>cname>>cgen>>cdest>>ccharge){
            cout<<"|"<<cpnr<<"\t|"<<cid<<"\t\t|"<<cname<<"\t\t|"<<cgen<<"\t|"<<cdest<<"\t\t|Rs. "<<ccharge<<"\t|"<<endl;
        }


        ifs.close();
        cout<<endl;
    }

    void deletedata()
    {
        ticket obj;
        int w;
        cout << "Enter PNR no.:" << endl;
        cin >> w;
        string line;
        int cpnr, ccharges, ccid;
        string cname, cgen, cdest;

        ifstream myfile;
        ofstream temp;
        myfile.open("records.txt");
        temp.open("temp.txt");
        while (myfile >> cpnr >> ccid >> cname >> cgen >> cdest >> ccharges)
        {
            // myfile >> cpnr >> ccid >> cname >> cgen >> cdest >> ccharges;

            if (cpnr != w)
                temp << cpnr << " " << ccid << " " << cname << " " << cgen << " " << cdest << " " << ccharges << endl
                     << flush;
        }
        cout << "The record with the name " << w << " has been deleted if it exsisted" << endl;
        myfile.close();
        temp.close();
        remove("records.txt");
        getchar();
        rename("temp.txt", "records.txt");
    }
};