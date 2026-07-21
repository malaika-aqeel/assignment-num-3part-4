#include<iostream>
using namespace std;
double calculatevoltage(double current,double resistance){
double voltage = current*resistance;
return voltage;
}
int main(){
double current,resistance;
cout<<"enter current :";
cin>>current;
cout<<"enter resistance :";
cin>>resistance;
cout<<"total voltage ="<<calculatevoltage(current,resistance);
return 0;
}
