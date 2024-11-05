#include <iostream>
#include <cmath>

using namespace std;
#define pi 3.1416
double distance (int x1 , int x2,int y1,int y2){
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
};
double circumference (double radius){
    return 2*pi*radius;
};
double area (double radius){
    return pi*pow(radius,2);
};
int main(){
    int x1,x2,y1,y2;
    cout << "x1 =" << endl;
    cin >> x1;
    cout << "x2 =" << endl;
    cin >> x2;
    cout << "y1 =" << endl;
    cin >> y1;
    cout << "y2 =" << endl;
    cin >> y2;
    double dist= distance(x1,x2,y1,y2);
    cout << "Distance =" << distance(x1,x2,y1,y2)<< endl ;
    cout << "Radius =" << distance(x1,x2,y1,y2)<< endl;
    cout << "Circumference ="<< circumference (dist)<< endl;
    cout << "Area ="<< area (dist) << endl;
    
}