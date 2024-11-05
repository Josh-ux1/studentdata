#include <iostream>
#include <string>
using namespace std;
struct nameType {
    string first;
    string last;
};
struct dataType {
    int month;
    int day;
    int yeat;
};
struct personalInfoType {
    nameType name;
    int pID;
    dataType dob;
};
int main (){
   personalInfoType person;
   personalInfoType classList[100];
   nameType student;
   person.name.first ="William";
   cout << person.name<< endl;
   classList[1]=person;
   classList[20].pID=000011100;
   person=classList[20];
   student=person.name;
   cin >> student;
   for (int j=0;j<100 ;j++){
    classList[j].pID=00000000;
   }
   classList.dob.day=1;
   student=name;
}