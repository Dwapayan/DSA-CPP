#include <iostream>

using namespace std;

int main(){
    cout << "Dwapayan" <<endl;        // endl is slower
    cout << "Sharma" <<"\n"; // \n is faster than endl

    int age=45;
    char grade='O';
    float PI = 3.14f;
    bool isSafe = true;
    double price = 100.99;
    int newPrice = (int)price;

    int gradeToInteger = grade; // implicit conversion
    cout << "My age variable size = " << sizeof(age) << "\n";
    cout << "My grade = " << grade << " Integer value of grade : " << gradeToInteger << "\n";
    cout << "PI = " << PI << "Float size = "<< sizeof(PI)<<"\n";
    cout << "isSafe = " << isSafe << "\n";
    cout << "Price = " << price << "New Price = " << newPrice << "\n";
    return 0;
}
// boiler plate code