#include <iostream>
using namespace std;

struct Car {
    string name;
    int year;
    int mileage;

    void purchase(){
        if(year>2018 && mileage>10){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
};


int main() {
    Car obj;
    cin>>obj.name>>obj.year>>obj.mileage;
    obj.purchase();

    return 0;
}
