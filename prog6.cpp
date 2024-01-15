#include <iostream>
using namespace std;

int main (){
  float x;
  float y;
  float z;

  cin>> x;
  cin>> y;
  cin>> z;

  int rarea= (x*y);
  int sarea= (z*z);

  if (x>=.1 && y>=.1 && z>=.1){
    if (x>z && y>z){
        cout<< "Ja Ja"<<endl;
    }
    else {
        cout<< "Nein Nein" <<endl;
    }
    if(rarea>sarea){
      cout<< "Rectangle"<<endl;
    }
    else if(rarea<sarea) {
      cout<<"Square"<<endl;
    }
    else{
      cout<<"Equal"<<endl;
    }
  }
  else {
    cout << "Invalid Side Values" << endl;
    return 0;
  }
}