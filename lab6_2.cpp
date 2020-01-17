#include <iostream>
#include <string>

using namespace std;

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker that is a really cool name.
Fahsai: I think you are Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47.  I have a free movie tickets for you. 
Fahsai: Let's go to cinema together!!! 
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watch Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/ 
*/
int main(){

string name;
cout<<"Fahsai: "<<"Sawadee ka...Can you tell me your name?\n";
cout<<"?????: ";
getline(cin,name);

int id;
cout<<"Fahsai: "<<"Wow!!!"<<name<<"that is a really cool name.\n";
cout<<"Fahsai: "<<"I think you are Engineering student. What is your student ID?\n";
cout<<name<<": ";
cin>>id;

cout<<"Fahsai: "<<"I think you may be GEAR "<< id/10000000-12 <<"."<<" "<<"I have a free movie tickets for you.";
cout<<"Fahsai: "<<"Let's go to cinema together!!!\n";
cout<<"Fahsai: "<<"What movie do you want to watch?\n";

string movie;
cout<<name<<": ";
getline(cin,movie);

string day;
cout<<"Fahsai: "<<"So....which day are you free to go with me?\n";
cout<<name<<": ";
getline(cin,day);

string speech;
cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watch"<<movie<<"with you.\n";
cout<<name<<": ";
getline(cin,speech);

cout<<"Fahsai: "<<"555+ see you Next Monday. Bye Bye"<<" "<<"\(^ ^)/"<<"\n";

}