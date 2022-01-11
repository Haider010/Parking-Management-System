#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
    s:
    int motorcycle_charge=30,motorcycle_counting=0,motorcycle_earning=0;
    int car_charge=100,car_counting=0,car_earning=0;
    int rickshaw_charge=50,rickshaw_counting=0,rickshaw_earning=0;
    int bus_charge=200,bus_counting=0,bus_earning=0;
    int choice,total_charge=0,total_count=0;
    fh:
    cout<<"\n\n----------PARKING MANAGMENT SYSTEM----------"<<endl;
    cout<<"\n1 => ADD MOTORCYCLE"<<endl;
    cout<<"2 => ADD RICKSHAW"<<endl;
    cout<<"3 => ADD CAR"<<endl;
    cout<<"4 => ADD BUS"<<endl;
    cout<<"5 => SHOW RECORD"<<endl;
    cout<<"6 => REMOVE VEHICLE"<<endl;
    cout<<"7 => DELETE RECORD"<<endl;
    cout<<"8 => EXIT"<<endl;
    cout<<"\n\tENTER YOUR CHOICE :";cin>>choice;
    switch (choice)
    {
    case 1:
        if(total_count<100){
        motorcycle_counting++;
        total_count++;
        total_charge +=motorcycle_charge;
        motorcycle_earning +=motorcycle_charge;
        }
        else 
        cout<<"\n\tPARKING IS FULL .... "<<endl;
        break;
    case 2:
        if(total_count<100){
        rickshaw_counting++;
        total_count++;
        total_charge +=rickshaw_charge;
        rickshaw_earning +=rickshaw_charge;
        }
        else 
        cout<<"\n\tPARKING IS FULL .... "<<endl;
        break;
    case 3:
        if(total_count<100){
        car_counting++;
        total_count++;
        total_charge +=car_charge;
        car_earning +=car_charge;
        }
        else 
        cout<<"\n\tPARKING IS FULL .... "<<endl;
        break;
    case 4: 
        if(total_count<100){
        bus_counting++;
        total_count++;
        total_charge +=bus_charge;
        bus_earning +=bus_charge;
        }
        else 
        cout<<"\n\tPARKING IS FULL .... "<<endl;
        break;
    case 5:
        system("cls");
        cout<<"\n\tSHOWING PARKING RECORD"<<endl;
        cout<<"\nTOTAL MOTORCYCLES = "<<motorcycle_counting<<endl;
        cout<<"TOTAL RICKSHAWS = "<<rickshaw_counting<<endl;
        cout<<"TOTAL CARS = "<<car_counting<<endl;
        cout<<"TOTAL BUSES = "<<bus_counting<<endl;
        cout<<"TOTAL VEHICLES = "<<total_count<<endl;
        cout<<"TOTAL EARNINGS = "<<motorcycle_earning+car_earning+rickshaw_earning+bus_earning<<endl;
        getch();
        break;
    case 6:
        k:
        if(total_count>0){
        int choice1;
        system("cls");
        cout<<"\n\tREMOVING VEHICLE"<<endl;
        cout<<"\n1 => MOTORCYCLE"<<endl;
        cout<<"2 => RICKSHAW"<<endl;
        cout<<"3 => CAR "<<endl;
        cout<<"4 => BUS"<<endl;
        cout<<"\n\tENTER YOUR CHOICE: ";cin>>choice1;
        if (choice1 == 1){
            motorcycle_counting--; 
            total_count--;  
        }
        else if(choice1 == 2){
            rickshaw_counting--;
            total_count--; 
        }
        else if(choice1 == 3){
            car_counting--;
            total_count--; 
        }
        else if(choice1 == 4){
            bus_counting--;
            total_count--; 
        }
        else{
        cout<<"\n\tINVALID CHOICE .... TRY AGAIN"<<endl;
        goto k;
        }}
        else 
        cout<<"\n\tPARKING IS EMPTY"<<endl;
        break;
    case 7:
        system("cls");
        goto s;
        break;
    case 8:
        exit(0);
        break;
    default:
        break;
        cout<<"\n\tINVALID CHOICE ...TRY AGAIN"<<endl;
        goto fh;
    }
    goto fh;
    return 0;
}
