#include <iostream> 
#include <string> 
using namespace std; 

int MAX = 10;
class car {
    string name = "gmc";
    string color = "white";
    int price = 100000;
    public:
    car();
    car(int price);
    car(string name, int price);

    
    int add(int a, int b);
    };
 

car::car() {
    cout<<"enter the name: "<<endl;
    cin>>name;
    cout<<"enter the color: "<<endl;
    cin>>color;
}
car::car(int price) {
    cout<<"enter the price: "<<endl;
    cin>>price;
}
car::car(string name, int price) {
 cout<<"hello";
}
int car::add(int a, int b) {
    return a + b;
}
void car::display() {
    cout<<"name: "<<name<<" color: "<<color<<" price: "<<price;
}
int main() {
//   car example;
//   car abood("abood", 60000); 
//   car mshsh(50000); 
  
//   int x = 10;

//   abood.display(); //name: abood color: white price: 60000
//   mshsh.display(); //name: gmc color: white price: 20000
  
  cout<<MAX;
    return 0;
}
