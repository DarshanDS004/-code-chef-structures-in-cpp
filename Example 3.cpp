#include <iostream>
using namespace std;

class Player{
public:
  int  height; 
  int weight;

  int bmi(){
    return weight/(height*height);
  }
};

int main() {
  Player obj; 
  cin>>obj.height>>obj.weight;
  cout<<obj.bmi();

  return 0;
}
