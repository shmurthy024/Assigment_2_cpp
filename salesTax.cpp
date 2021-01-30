#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


float addTax(float taxRate, float cost){
  float finalCost = 0.0;
  finalCost = cost * (1.0 + (taxRate/100.0));


  return finalCost;
}

int main(){
  float salesT = 0.0;
  float cost = 0.0;
  cout << "Enter your sales tax as a percentage (i.e 34, 15): ";
  cin >> salesT;
  cout << "Enter your total cost: ";
  cin >> cost;



  float total = addTax(salesT, cost);

  cout << "Final Cost: $";
  cout << fixed << setprecision(2) << total << endl;
  return 0;
}
