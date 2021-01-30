#include <iostream>
#include <string>


using namespace std;


void userInput(double &f, double &i){
  f = 0.0;
  i = 0.0;
  cout << "Enter feet value: ";
  cin >> f;
  cout << "Enter inches value: ";
  cin >> i;
}

double inchesToFeet(double feet, double inches){
  double f = feet;

  double feetConv = f;
  feetConv += inches/12;
  return feetConv;
}

double meters(double ft, double in){

  double temp = inchesToFeet(ft, in);
  double meterVal = temp * 0.3048;
  return meterVal;

}

double centimeters(double m){
  double centimeterVal = 0.0;
  centimeterVal = m * 100.0;
  return centimeterVal;
}


int main(){

  string input = "";
  double inToFt = 0;
  double feet = 0;
  double inches = 0;
  double meter = 0;
  double centimeter = 0;



  while(true) {
    userInput(feet, inches);
    inToFt = inchesToFeet(feet, inches);
    meter = meters(feet, inches);
    centimeter = centimeters(meter);


    cout << "Input in meters: " << meter << endl;
    cout << "Input in centimeters: " << centimeter << endl;

    cout << "Type exit if you want to exit or else say something else" << endl;
    cin >> input;

    
    if(input == "exit" || input == "Exit"){
      break;
    }

  }


  return 0;
}
