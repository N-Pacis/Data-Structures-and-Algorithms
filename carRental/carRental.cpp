#include <iostream>
#include <ctime>
#include <string>
#include <time.h>
#include <sstream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <fstream>
#include <iostream>
#include <fstream>
using namespace std;

int numberOfDays(char date[256]){
    time_t rawtime;
    int year, month ,day;
    struct tm * timeinfo;

    replace( date, date+strlen(date), '/', ' ' );
    istringstream( date ) >> day >> month >> year;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_mday = day;
    mktime ( timeinfo );

    int rent_year_now = strftime ( date, sizeof(date), "%Y", timeinfo );
    int rent_month_now = strftime ( date, sizeof(date), "%b", timeinfo );
    int rent_day_now = strftime ( date, sizeof(date), "%A", timeinfo );
    tm time_now = {};
    int dayNumber = 0;

    bool isLeap = (((year % 4) == 0) && (((year % 100) != 0) || ((year % 400) == 0)));

    time_now.tm_year = year - 1900;
    time_now.tm_mon = month - 1;
    time_now.tm_mday = day;
    mktime(&time_now);
    dayNumber = 1+ time_now.tm_yday;
    if (isLeap && month > 2) dayNumber++;
    return dayNumber;
}

int dayOfTheWeek(char date[256]){
     time_t rawtime;
    int year, month ,day;
    struct tm * timeinfo;

    replace( date, date+strlen(date), '/', ' ' );
    istringstream( date ) >> day >> month >> year;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_mday = day;
    mktime ( timeinfo );

    int rent_year_now = strftime ( date, sizeof(date), "%Y", timeinfo );
    int rent_month_now = strftime ( date, sizeof(date), "%b", timeinfo );
    int rent_day_now = strftime ( date, sizeof(date), "%A", timeinfo );

   int mon;
   if(rent_month_now > 2)
      mon = rent_month_now; //for march to december month code is same as month
   else{
      mon = (12+rent_month_now); //for Jan and Feb, month code will be 13 and 14
      rent_year_now--; //decrease year for month Jan and Feb
   }
   int y = rent_year_now % 100; //last two digit
   int c = rent_year_now / 100; //first two digit
   int w = (rent_day_now + floor((13*(rent_month_now+1))/5) + y + floor(y/4) + floor(c/4) + (5*c));
   w = w % 7;
   return w-1;
}

string convertToString(char* a, int size)
{
    string s(a);

    return s;
}

string getFullDate(char date[256]){
     time_t rawtime;
    int year, month ,day;
    struct tm * timeinfo;

    replace( date, date+strlen(date), '/', ' ' );
    istringstream( date ) >> day >> month >> year;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_mday = day;
    mktime ( timeinfo );

    int rent_year_now = strftime ( date, sizeof(date), "%Y", timeinfo );
    int rent_month_now = strftime ( date, sizeof(date), "%b", timeinfo );
    int rent_day_now = strftime ( date, sizeof(date), "%A", timeinfo );

    return to_string(rent_day_now) + "-" + to_string(rent_month_now) + "-" + to_string(rent_year_now);
}

int main(){
    string chosenCar;
    char rentDate[256];
    char returnDate[256];
    int rentDayOfTheYear;
    int returnDayOfTheYear;
    int rentDayOfTheWeek;
    int returnDayOfTheWeek;
    int totalAmount = 0;
    int totalRentingDays;
    std::ofstream outfile;

    double finalPrice[] = {};
    double sedanPrices[] = {10000,5000,5000*0.05,15000,9350,8400,8400};
    double coupePrices[] = {12000,8500,7460*0.05,13500, 7460,8400,8000};
    double minivanPrices[] = {10000,5000,5000*0.05,15000,9350,8400,8400};

    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"       WELCOME TO CAR RENTING MANAGEMENT SYSTEM                 "<<endl;
    cout<<"List of cars available:\n1. sedan\n2. coupe\n3. minivan"<<endl;
    cout<<"Choose among the given cars, the one you would like to rent:"<<endl;
    cin>>chosenCar;
    if(chosenCar == "sedan"){
        for(int i = 0; i<(sizeof(sedanPrices) / sizeof(sedanPrices[0]));i++){
            finalPrice[i] = sedanPrices[i];
        }
    }
    else if (chosenCar == "coupe"){
        for(int i = 0; i<(sizeof(coupePrices) / sizeof(coupePrices[0]));i++){
            finalPrice[i] = coupePrices[i];
        }
    }
    else if (chosenCar == "minivan"){
        for(int i = 0; i<(sizeof(minivanPrices) / sizeof(minivanPrices[0]));i++){
            finalPrice[i] = minivanPrices[i];
        }
    }
    else {
        cout<<"Can't find that car type";
        exit(0);
    }

    cout<<"Enter the rent date(dd/mm/yyy): "<<endl;
    cin>>rentDate;
    cout<<"Enter the return date(dd/mm/yyy): "<<endl;
    cin>>returnDate;

    rentDayOfTheYear = numberOfDays(rentDate);
    returnDayOfTheYear = numberOfDays(returnDate);
    rentDayOfTheWeek = dayOfTheWeek(rentDate);
    returnDayOfTheWeek = dayOfTheWeek(returnDate);
    totalRentingDays = returnDayOfTheYear - rentDayOfTheYear;

    for (int i = 0; i <= totalRentingDays; i++){
            if(rentDayOfTheWeek > 8){
                rentDayOfTheWeek = 1;
            }
            if(rentDayOfTheWeek == 1){
                totalAmount += finalPrice[rentDayOfTheWeek-1];
            }
            else if(rentDayOfTheWeek == 2){
                totalAmount += finalPrice[rentDayOfTheWeek-1];
            }
            else if(rentDayOfTheWeek == 3){
                totalAmount += finalPrice[rentDayOfTheWeek-1];
            }
            else if(rentDayOfTheWeek == 4){
                totalAmount += finalPrice[rentDayOfTheWeek-1];
            }
            else if(rentDayOfTheWeek == 5){
                totalAmount += finalPrice[rentDayOfTheWeek-1];
            }
            else if(rentDayOfTheWeek == 6){
                totalAmount += finalPrice[rentDayOfTheWeek-1];
            }
            else if(rentDayOfTheWeek == 7){
                totalAmount += finalPrice[rentDayOfTheWeek-1];
            }
            rentDayOfTheWeek ++;
    }

    string rentingDate = getFullDate(rentDate);
    string returningDate = getFullDate(returnDate);
    cout<<rentingDate;

    exit(0);
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"                             INVOICE                          "<<endl;
    cout<<" - Chosen Car Type: "<<chosenCar<<endl;
    cout<<"- Rented On: "<<rentDate<<endl;
    cout<<"- To Be Returned On: "<<returnDate<<endl;
    cout<<"- Total Amount Paid: "<<totalAmount<<endl;
    cout<<"                    THANK YOU FOR USING THIS PROGRAM              "<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    ofstream myfile;
    myfile.open ("invoice.txt",ios::app);
    myfile <<"--------------------------------------------------------------\n";
    myfile <<"                             INVOICE                          \n";
    myfile <<" - Chosen Car Type: "<<chosenCar<<"\n";
    myfile << "- Rented On: "<<rentDate<<"\n";
    myfile <<"- To Be Returned On: "<<returnDate<<"\n";
    myfile <<"- Total Amount Paid: "<<totalAmount<<"\n";
    myfile <<"                    THANK YOU FOR USING THIS PROGRAM              \n";
    myfile <<"---------------------------------------------------------------\n";
    myfile.close();
    return 0;
}
