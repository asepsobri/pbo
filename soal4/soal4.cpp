#include <iostream>

using namespace std;

int main (){
	string namadepan;
	string namatengah;
	string namabelakang;
	string Fullname;
	
	cout<<"Masukan Data Berikut : "<<endl<<endl;
	cout<<"nama depan    : ";
	getline (cin, namadepan); 
	 
	cout<<"nama tengah  : ";
	getline (cin, namatengah); 
	 
	cout<<"nama belakang     : ";
	getline (cin, namabelakang); 
	 
	cout<<"Full name : ";
	getline (cin, Fullname); 
	
	cout<<endl;
	cout<<"Full name"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"nama depan    : "<<namadepan<<endl;
	cout<<"nama tengah  : "<<namatengah<<endl;
	cout<<"nama belakang     : "<<namabelakang<<endl;
	cout<<"Full name : "<<Fullname<<endl;

}