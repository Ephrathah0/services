#include<iostream>
#include<string>
//
using namespace std;
struct Doctors
{
string name;
int age;
char sex;
string specialst;
string schedule;
};
struct Address
{
string city;
string kfleketema;
int kebele,wereda;
string email;
string phone;
};
struct Hospitals
{
string name;
string service;
Doctors hos_doc;
Address hos_add;

};
void dis_info();
int main()
{

cout<<"*************************************  Hospitals full information **************************************"<<endl;

dis_info();
return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void dis_info()
{
Hospitals Hos;
Hos.name={"Birhanu centralized hospital"};
Hos.service={"\n - short-term hospitalization\n - emergency room services\n - general and specialty surgical services\n - x-ray radiology services \n - laboratory services\n - blood services."};
Hos.hos_doc={"DR.Firdews Abrar",27,'f',"General Doctor","(Monday-Thursday)=4:00am-11:30pm,(Friday and Saturday)=2:30am-6:00am"};
Hos.hos_add={"Addiss Ababa","Kolfe Keranyo",05,1,"birhanu_centrhos@gmail.com","011-345-654"};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
{
cout<<"Name of "<<" Hospital: "<<Hos.name<<endl;
cout<<"Service that "<<Hos.name<<" provide: "<<endl<<Hos.service<<endl;
cout<<"\nDoctors information in "<<Hos.name<<endl;
cout<<"______________________________________________________"<<endl;
cout<<"\nDoctor's name: "<<Hos.hos_doc.name<<"\nAge: "<<Hos.hos_doc.age<<"\nSex: "<<Hos.hos_doc.sex<<"\nSpeciality name: "<<Hos.hos_doc.specialst<<"\nSchedule: "<<Hos.hos_doc.schedule;
}
cout<<"\n\n________Hospitals Address_____________"<<endl;
cout<<"Hispitals city: "<<Hos.hos_add.city<<"\t\t"<<" KfleKetema: "<<Hos.hos_add.kfleketema<<endl;
cout<<"kebele: "<<Hos.hos_add.kebele<<"\t\t"<<" wereda: "<<Hos.hos_add.wereda<<endl;
cout<<"Hispitals  emailaddress: "<<Hos.hos_add.email<<"\t\t"<<" phone number: "<<Hos.hos_add.phone<<endl;
cout<<"......................................................"<<endl;
}
