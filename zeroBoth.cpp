#include <iostream>
#include <string>

using namespace std;

void zeroBoth(int &a, int &b){
  a = 0;
  b = 0;
}

int main(){
  cout << "ENTER NUMBER: ";
  int input = 0;
  cin >> input;
  cout << "ENTER ANOTHER ONE: ";
  int inputTwo = 0;
  cin >> inputTwo;
  zeroBoth(input ,inputTwo);
  cout << input << ", " << inputTwo << endl;


  return 0;
}
