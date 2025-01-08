#include <iostream>
using namespace std;

struct Product {
    string name;
    int price;

    void display(){
        cout<<"Name - "<<name<<endl;
        cout<<"Price - "<<price<<endl;
    }
};

int main() {
    Product obj;
    cin>>obj.name>>obj.price;

    obj.display();

    return 0;
}
