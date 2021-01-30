#include <iostream>
#include <string>

using namespace std;

int main(){
  int numberArray[10];
  int input = 0;
  cout << "Enter 10 non-negative numbers please." << endl;

  for(int i = 0; i < 10; ++i){
    cin >> input;
    if(input >= 0){
      numberArray[i] = input;
    }
    else{
      cout << "ERROR: Non-negative number was inputed...try again" << endl;
      //check if the input is changed to a non-negative number
      while(!(input >= 0)){
        cout << "Enter a non-negative number: " << endl;
        cin >> input;
      }
      cout << "ERROR FIXED THANK YOU CONTINUE INPUTTING NON-NEGATIVE NUMBERS" << endl;
      numberArray[i] = input;
    }
  }

  for(int i = 0; i < 10; ++i){
    cout << numberArray[i] << " ";
  }
  cout << endl;




  return 0;

}
