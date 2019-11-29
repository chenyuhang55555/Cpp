#include <iostream>
using namespace std;

int main(){
    int number1 = 5, number2 = 10, temp;

    cout << "Number before swapping." << endl;
    cout << "Number 1 = " << number1 << ", Number 2 = " << number2 << endl;
    temp = number1;
    number1 = number2;
    number2 = temp;

    cout << "Numbers after swapping." << endl;
    cout << "Numebr 1 = " << number1 << ", Number 2 = " << number2 <<endl;
    
    return 0;

}
