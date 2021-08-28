#include<iostream>
#include<string>
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
int phone;
};
struct Hospitals
{
string name;
string service;
Doctors hos_doc[5];
Address hos_add;

};
void dis_info();
int main()
{

cout<<"*******************************************************  Hospitals full information ***************************************************************"<<endl;

dis_info();
return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void dis_info()
{
Hospitals Hos[10];
Hos[0].name={"Birhanu centralized hospital"};
Hos[0].service={"\n - short-term hospitalization\n - emergency room services\n - general and specialty surgical services\n - x-ray radiology services \n - laboratory services\n - blood services."};
Hos[0].hos_doc[0]={"DR.Firdews Abrar",27,'f',"General Doctor","(Monday-Thursday)=4:00am-11:30pm,(Friday and Saturday)=2:30am-6:00am"};
Hos[0].hos_doc[1]={"DR.Selwa Awol",30,'f',"General Doctor","(Monday-Thursday)=11:30pm-6:00pm,(Friday and Saturday)=2:30am-6:00am"};
Hos[0].hos_doc[2]={"DR.Natnael Dereje",45,'m',"Heartcase Doctor","(Monday-Thursday)=11:30pm-6:00pm,(Friday and Saturday)=2:30am-6:00am"};
Hos[0].hos_doc[3]={"DR.Junior zeyede",39,'m',"Specialist Doctor","(Wednesday-Saturday)=4:00am-11:30pm"};
Hos[0].hos_doc[4]={"DR.Ephratah Wodajo",46,'f',"sprcialist Doctor","(Monday-Thursday)=1:00am-3:00pm,(Sunday(ETW))=2:30am-12:00pm"};
Hos[0].hos_add={"Addiss Ababa","Kolfe Keranyo",05,1,"Birhanu_centrhos@gmail.com",011-345-654};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Hos[1].name={"Yayenfre  hospital"};
Hos[1].service={"\n - emergency care \n - scheduled surgeries \n - labor and delivery services \n - diagnostic testing\n - lab work and patient education \n - x-ray radiology services\n - laboratory services."};
Hos[1].hos_doc[0]={"DR.Selman Mohammed",48,'m',"Special Doctor","(Monday-Thursday)=1:00am-3:00pm,(Sunday(ETW))=2:30am-12:00pm"};
Hos[1].hos_doc[1]={"DR.Fkadu Getachew",30,'m',"General Doctor","(Monday-Thursday)=2:30pm-12:00pm,"};
Hos[1].hos_doc[2]={"DR.Selemawit Dereje",45,'m',"Cancerspecialist Doctor","(Monday-Friday)=4:30pm-6:00pm"};
Hos[1].hos_doc[3]={"DR.Betelhem Zewdu",31,'f',"Generla Doctor","(Wednesday-Saturday)=4:00am-11:30pm"};
Hos[1].hos_doc[4]={"DR.Mahir Abdullah",55,'m',"Sergicalsprcialist Doctor","(Monday-Thursday)=1:00am-3:00pm,(Sunday(ETW))=2:30am-12:00pm"};
Hos[1].hos_add={"Addiss Ababa","Nfasslk Lafto",02,3,"Yayenfrehospital@gmail.com",011-987-632};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Hos[2].name={"turk_in centralized hospital"};
Hos[2].service={"-Emergency Care\n-Maternity\n-Nursing\n-Surgery\n-Pharmacy\n-Specialties\n-Diagnosis of internal doseases."};
Hos[2].hos_doc[0]={"DR.Halima Serid",33,'f',"General Doctor","(Monday-Thursday)=1:00am-3:00pm,(Sunday(ETW))=2:30am-12:00pm"};
Hos[2].hos_doc[1]={"DR.Salim Awol",30,'m',"General Doctor","(Monday-Thursday)=11:30pm-6:00pm,(Friday and Saturday)=2:30am-6:00am"};
Hos[2].hos_doc[2]={"DR.Natnael Belete",45,'m',"Cardiologist","(Monday-Thursday)=11:30pm-6:00pm,(Friday and Saturday)=2:30am-6:00am"};
Hos[2].hos_doc[3]={"DR.Haymanot Birhanu",39,'f',"Specialist Doctor","(Wednesday-Saturday)=4:00am-11:30pm"};
Hos[2].hos_doc[4]={"DR.Mekonen Teferi",46,'m',"sprcialist Doctor","(Monday-Thursday)=4:00am-11:30pm,(Friday and Saturday)=2:30am-6:00am"};
Hos[2].hos_add={"Addiss Ababa","Gulele ",01,7,"turk_hos@gmail.com",011-323-932};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Hos[3].name={"Kibeharnew centralized hospital"};
Hos[3].service={" - Diagnosis of internal disease\n - emergency room services\n - general and specialty surgical services\n - Full examination of adults and children\n - Gynecology \n - laboratory services\n - blood services."};
Hos[3].hos_doc[0]={"DR.Sara Belayneh",27,'f',"General Doctor","(Monday-Thursday)=5:00am-9:30pm,Friday=2:30am-6:00am"};
Hos[3].hos_doc[1]={"DR.Abdu Feysel",30,'m',"General Doctor","(Monday-Thursday)=11:30pm-6:00pm,(Friday and Saturday)=2:30am-6:00am"};
Hos[3].hos_doc[2]={"DR.Natnael Dereje",45,'m',"Heartcase Doctor","(Monday-Saturday)=11:30pm-6:00pm,"};
Hos[3].hos_doc[3]={"DR.Henery Florid",54,'f',"Specialist Doctor","(Wednesday-Saturday)=4:00am-11:30pm"};
Hos[3].hos_doc[4]={"DR.Hanan Selman",46,'f',"sprcialist Doctor","(Monday-Thursday)=1:00am-3:00pm,(Sunday(ETW))=2:30am-12:00pm"};
Hos[3].hos_add={"Addiss Ababa","Arada",03,1,"kibeharhos12@gmail.com",011-788-894};
for(int i=0;i<4;i++)
{
cout<<"Name of "<<i+1<<" Hospital: "<<Hos[i].name<<endl;
cout<<"Service that "<<Hos[i].name<<" provide: "<<endl<<Hos[i].service<<endl;
cout<<"Doctors information in "<<Hos[i].name<<endl;
for(int j=0;j<5;j++)
{cout<<"______________________________________________________________________________________________________________________________"<<endl;
cout<<"\nDoctor's name: "<<Hos[i].hos_doc[j].name<<"\nAge: "<<Hos[i].hos_doc[j].age<<"\nSex: "<<Hos[i].hos_doc[j].sex<<"\nSpeciality name: "<<Hos[i].hos_doc[j].specialst<<"\nSchedule: "<<Hos[i].hos_doc[j].schedule;
}
cout<<"\n________Hospitals Address_____________"<<endl;
cout<<"Hispitals city: "<<Hos[3].hos_add.city<<"\t"<<" KfleKetema: "<<Hos[3].hos_add.kfleketema<<endl;
cout<<"kebele: "<<Hos[3].hos_add.kebele<<"\t"<<" wereda: "<<Hos[3].hos_add.wereda<<endl;
cout<<"Hispitals  emailaddress: "<<Hos[3].hos_add.email<<"\t"<<" phone number: "<<Hos[3].hos_add.phone<<endl;
cout<<"..................................................................................................."<<endl;
}
}

