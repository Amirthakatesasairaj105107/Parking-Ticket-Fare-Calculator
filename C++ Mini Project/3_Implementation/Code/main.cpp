/**
*Program for parking ticket fare calculator
*This program is for generating fare for a vehicle parked in a parking slot along with its parking time.
*/
#include <iostream>
#include <istream>

using namespace std;

void Parkingfare() {

    int type, fare;                         ///Type 1- Motorcycle, Type 2- Car, Type 3-Van/Bus
    string no;
    float in, out, duration;

    cout<<" Vehicle Type     :"; cin>>type; ///User enters the vehicle Type
    cout<<" Plate No         :"; cin>>no;   ///User enters the vehicle's Plate number
    cout<<" Vehicle In time  :"; cin>>in;   ///User enters the vehicle Entry time
    cout<<" Vehicle Out time :"; cin>>out;  ///User enters the vehicle Exit time

/**
*The system takes the inputs from the user and generates fare for them correspondingly
*/

    if (out >= in)
        duration = out-in;

    else
       duration = (12-in)+out;


    cout<<" Parking Duration   :"<<duration<<"hour/s"<<endl;

    if(duration>=0 && type==1){            ///If the vehicle type is 1(Motorcycle) generate fare correspondily
        fare=(duration-0)*10*1;
        cout<<" Parking Fare    : Rs. "<<fare<<endl;
    }
    else if(duration>=0 && type==2){       ///If the vehicle type is 2(Car) generate fare correspondily
        fare=(duration-0)*15*1;
        cout<<" Parking Fare      : Rs. "<<fare<<endl;
    }
    else if(duration>=0 && type==3){       ///If the vehicle type is 3(Van/Bus) generate fare correspondily
        fare=(duration-0)*20*1;
        cout<<" Parking Fare    : Rs. "<<fare<<endl;
    }
    else if(duration>=0 && type==1){
        fare=10;
        cout<<" Parking Fare    : Rs. "<<fare<<endl;
    }
    else if(duration>=0 && type==2){
        fare=15;
        cout<<" Parking Fare    : Rs. "<<fare<<endl;
    }
    else if(duration>=0 && type==3){
        fare=20;
        cout<<" Parking Fare    : Rs. "<<fare<<endl;
    }

    cout<<endl<<endl;
    cout<<"___________________________________"<<endl;
    cout<<"      Parking FARE RECEIPT      "<<endl;
    cout<<" Vehicle Type      : "<<type<<endl;
    cout<<" Vehicle Number    : "<<no<<endl;
    cout<<" Vehicle In time   : "<<in<<endl;
    cout<<" Vehicle Out time  : "<<out<<endl;
    cout<<" Parking Duration  : "<<duration<<"hour/s"<<endl;
    cout<<" Parking Fare      : Rs. "<<fare<<endl;
     cout<<"       HAVE A NICE DAY"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<endl<<endl;
}
    int main(){
        char a;
        Parkingfare();

        cout<<"Exit Now ? (y/n)"; cin>>a;
        cout<<endl;


            return 0;
    }



