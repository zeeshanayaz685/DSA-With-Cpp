#include <iostream>
using namespace std;
class Flight{
	string *PassengerName;
	int *seat;
public :
	Flight(string n ,int s){
		PassengerName = new string (n);
		seat= new int (s);
	}
	~Flight(){
		cout<<"Destructor called!!\n";
		delete PassengerName;
		delete seat;
		PassengerName= NULL;
		seat=NULL;
	}
	Flight(const Flight & b1){
		PassengerName = new string (*b1.PassengerName);
		seat= new int (*b1.seat);
	}
	void DisplayBookinginfo(){
		cout<<"Passenger Name :"<<*PassengerName<<endl;
		cout<<"Seat number:"<<*seat<<endl;
	}
	void SetPassengerName(string n){
		PassengerName= new string (n);
	}
	void SetSeatNumber(int s){
		seat= new int (s);
	}
};
int main(){
	Flight b1("Zeeshan",2);
	Flight b2(b1);
	
	cout<<"Before Changing...\n";
	b1.DisplayBookinginfo();
	b2.DisplayBookinginfo();
	
	b1.SetPassengerName("Usman");
	b1.SetSeatNumber(5);
	cout<<"After Changing b1...\n";
	b1.DisplayBookinginfo();
	b2.DisplayBookinginfo();
}