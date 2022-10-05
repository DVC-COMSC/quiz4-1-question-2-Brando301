#include<iostream> 
#include<iomanip>
using namespace std;
int main() { 
  double j,weight,cost,distance,i; 
  cin>>weight; cin>>distance;
if(weight<=0)
{
cout<‹ "ILLEGAL WEIGHT: BELOW MINIMUM" << endl;
else if(weight>20){
cout<< "ILLEGAL WEIGHT: ABOVE MAXIMUM" << endl;
  }
else if(distance<10|| distance >3000){
{
  cout<< "ILLEGAL DISTANCE" << endl;
else{
i=distance/500;
if(weight<=2){
cost=i*1.10;
else if(weight>2 && weight<=6){
cost=i*2.20;
else if(weight>6 && weight<=10){
cost=i*3.70;
else if(weight>10 && weight<=20){
cost=i*4.80;
cout<<fixed<<setprecision(2)<<cost<<endl;
return 0;







// Complete the following program. 
#include <iostream>
using namespace std;

int main()
{
	const double rate1 = 1.10;
	const double rate2 = 2.20;
	const double rate3 = 3.70;
	const double rate4 = 4.80;
	double total_charge;
	double weight, distance, rate;

	
        // **********************
        // Your code 
        // **********************
        
	cout << total_charge << endl;
}
