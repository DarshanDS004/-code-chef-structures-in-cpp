#include <iostream>
using namespace std;

class Medicine{
public:
  string name; 
  int expiration_year;

};

int main() {
  Medicine obj;
  obj.name = "doggo";
  obj.expiration_year = 2024;
  int current_year = 2023;

  if(current_year <= obj.expiration_year){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }

  return 0;
}
