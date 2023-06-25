#include<bits/stdc++.h>
#include<fstream>
#include<iomanip>

using namespace std;
void mainMenu();

class Management
{
    public:
     Management()
     {
         mainMenu();
         

     }

};

class Details
{
    public:

    static string name, gender;
    int phoneNo;
    int age;
    string address;
    static int cID;
    char arr[100];

    void information()
    {
        cout<<"\n Enter the customer ID: ";
        cin>>cID;

        cout<<"\n enter the name: ";
        cin>>name;

        cout<<"\n enter the age: ";
        cin>>age;

        cout<<"\n Address: ";
        cin>>address;

        cout<<"\n gender: ";
        cin>>gender;

        cout<<" Your details are saved with us\n"<<endl;
        }
};

int Details :: cID;
string Details:: name;
string Details:: gender;

class registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flight()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};

        for(int a=0;a<6;a++)
        {
            cout<<(a+1)<<"Flight to"<<flightN[a]<<endl;

        }
        cout<<"\n welcome to the airlines"<<endl;
        cout<<"press the number of the country of which you want to book the flight:";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"_______________WELCOME TO DUBAI EMIRATES_______________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1. DUB- 498"<<endl;
                cout<<"\t08-01-23 8:00AM 10hrs Rs. 14000"<<endl;
                cout<<"1. DUB- 598"<<endl;
                 cout<<"\t09-01-23 8:00AM 10hrs Rs. 10000"<<endl;
                 cout<<"1. DUB- 698"<<endl;
                  cout<<"\t10-01-23 8:00AM 10 hrs Rs. 15000"<<endl;

                  cout<<"\n select the flight you want to book:";

                  cin>>choice1;

                  if(choice1==1)
                  {
                    charges=14000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==3)
                {
                    charges=15000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"INVALID INPUT, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }

            case 2:
            {
                cout<<"_______________WELCOME TO CANADIAN AIRLINES_______________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1. CA- 56"<<endl;
                cout<<"\t08-01-23 10:00AM 10hrs Rs. 34000"<<endl;
                cout<<"1. CA- 48"<<endl;
                 cout<<"\t09-01-23 8:00PM 10hrs Rs. 40000"<<endl;
                 cout<<"1. CA- 68"<<endl;
                  cout<<"\t10-01-23 3:00AM 10 hrs Rs. 15000"<<endl;

                  cout<<"\n select the flight you want to book:";

                  cin>>choice1;

                  if(choice1==1)
                  {
                    charges=34000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                else if(choice1==2)
                {
                    charges=40000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==3)
                {
                    charges=15000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"INVALID INPUT, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }

            case 3:
            {
                cout<<"_______________WELCOME TO UK AIRWAYS_______________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1. UK- 198"<<endl;
                cout<<"\t08-01-23 8:00AM 14hrs Rs. 24000"<<endl;
                cout<<"1. UK- 298"<<endl;
                 cout<<"\t09-01-23 8:00AM 10hrs Rs. 34000"<<endl;
                

                  cout<<"\n select the flight you want to book:";

                  cin>>choice1;

                  if(choice1==1)
                  {
                    charges=24000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                else if(choice1==2)
                {
                    charges=30000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                
                else{
                    cout<<"INVALID INPUT, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }

            case 4:
            {
            cout<<"_______________WELCOME TO US AIRWAYS_______________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1. US - 678"<<endl;
                cout<<"\t08-01-23 8:00AM 22hrs Rs. 54000"<<endl;
                cout<<"1. DUB- 198"<<endl;
                 cout<<"\t09-01-23 8:00AM 22hrs Rs. 40000"<<endl;
                 cout<<"1. DUB- 199"<<endl;
                  cout<<"\t10-01-23 8:00AM  22hrs Rs. 45000"<<endl;

                  cout<<"\n select the flight you want to book:";

                  cin>>choice1;

                  if(choice1==1)
                  {
                    charges=54000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                else if(choice1==2)
                {
                    charges=40000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2)
                {
                    charges=45000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"INVALID INPUT, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
        }

        case 5:
        {
        cout<<"_______________WELCOME TO AUSTRALIAN AIRLINES_______________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1. AUS- 498"<<endl;
                cout<<"\t08-01-23 8:00AM 9hrs Rs. 34000"<<endl;
               

                  cout<<"\n select the flight you want to book:";

                  cin>>choice1;

                  if(choice1==1)
                  {
                    charges=34000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                    }
               
                else{
                    cout<<"INVALID INPUT, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
        }

        case 6:
        {
            cout<<"_______________WELCOME TO EUROPEAN AIRLINES_______________\n"<<endl;

                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                cout<<"Following are the flights \n"<<endl;

                cout<<"1. EU- 008"<<endl;
                cout<<"\t08-01-23 8:00AM 18hrs Rs. 54000"<<endl;
                cout<<"1. EU- 098"<<endl;
                 cout<<"\t09-01-23 9:00PM 10hrs Rs. 40000"<<endl;
                 cout<<"1. EU- 027"<<endl;
                  cout<<"\t10-01-23 5:00AM 10 hrs Rs. 35000"<<endl;

                  cout<<"\n select the flight you want to book:";

                  cin>>choice1;

                  if(choice1==1)
                  {
                    charges=54000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                else if(choice1==2)
                {
                    charges=40000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2)
                {
                    charges=35000;
                    cout<<"\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else{
                    cout<<"INVALID INPUT, shifting to the previous menu"<<endl;
                    flight();
                }

                cout<<"press any key to go back to main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
        }
        default:
        {
            cout<<"invalid input,Shifting to the main menu!"<<endl;
            mainMenu();
            break;
        }
    }
}
};
float registration:: charges;
int registration:: choice;
class ticket: public registration, Details //multiple inheritance
{
    public:
    void Bill()
    {
        string destination = " ";
        ofstream outf("records.txt");
        {
            outf<<"_____________xyz AIRLINES___________"<<endl;
            outf<<"___________________Ticket_____________"<<endl;
            outf<<"__________________________________________________"<<endl;

            outf<<"Customer ID:"<< Details:: cID<<endl;
            outf<<"Customer Name:"<<Details:: name<<endl;
            outf<<"Customer Gender:"<<Details:: gender<<endl;
            outf<<"\t Description" <<endl<<endl;


            if(registration:: choice==1)
            {
                destination="Dubai";
            }
           
               else if(registration:: choice==2)
            {
                destination="Canada";
                
            }
           else if(registration:: choice==3)
            {
                destination="UK";

            }
            else if(registration:: choice==4)
            {
                destination="USA";
            }
            else if(registration:: choice==5)
            {
                destination="Australia";
            }
            if(registration:: choice==6)
            {
                destination="Europe";
            }

            outf<<"destination\t\t"<<destination<<endl;
            outf<<"Flight cost: \t\t"<<registration::charges<<endl;

        }
        outf.close();
        }
    void dispBILL()
    {
        ifstream ifs("records.text");
        {
            if(!ifs)
            {
                cout<<"FILE ERROR!"<<endl;

            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }

};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
    cout<<"\t              xyz airlines         \n"<<endl;
    cout<<"\t_______________Main Menu____________<<"<<endl;

    cout<<"\t_________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;

    cout<<"\t\t  press 1 to add the customer Details       \t"<<endl;
    cout<<"\t\t  press 2 for fight registration         \t"<<endl;
    cout<<"\t\t  press 3  for ticket and charges    \t"<<endl;
    cout<<"\t\t  press 4 to exit     \t"<<endl;
     cout<<"\t\t\t\t\t\t\t"<<endl;
     cout<<"\t_________________________________________"<<endl;
    

     cout<<"enter the choice: ";
     cin>>lchoice;


     Details d;
     registration r;
     ticket t;
    
     switch(lchoice)
     {
        case 1:
        {
            cout<<"_____________Customers___________\n"<<endl;
            d.information();
            cout<<"press any key to go back to main menu";
            cin>>back;
            

            if(back==1)
            {
                mainMenu();
                break;
            }
            else{
                mainMenu();
                break;
            }
            break;

        }

        case 2:
        {
            cout<<"______________book a flight using this system________________\n"<<endl;
            r.flight();
            break;
        }

        case 3:
        {
            cout<<"______________GET YOUR TICKET_____________\n"<<endl;
            t.Bill();

            cout<<"your ticket is printed, you can collect is\n"<<endl;
            cout<<"press 1 to display your ticket";

            cin>>back;

            if(back==1)
            {
                t.dispBILL();
                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                    break;
                }
                else{
                    mainMenu();
                    break;
                }

            }
            else {
                mainMenu();
            }
            break;
        }

        case 4:
        {
            cout<<"\n\n\t___________Thank-you_________"<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid input, Please try again \n"<<endl;
            mainMenu();
            break;
        }


     }

     
    } 


int main()
{
    Management mobj;
    return 0;
}