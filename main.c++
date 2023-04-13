#include <iostream>
using namespace std;

int main() {
    int pin, balance, number, option, amount;
    pin = 0000;
    balance = 1000;

    while (true){
        cout << "1. Transfer money" << endl;
        cout << "2. Reset pin" << endl;
        cout << "3. Check balance" << endl;
        cout << "4. Exit" << endl;

        cout << "Choose an option: ";
        cin >> option;

        if(option == 1){
            cout << "Enter mobile number: ";
            cin >> number;
            
            for(int i = 1; i < 3; i++){
                if(to_string(number).size() != 10){
                    cout << "Invalid input" << endl;
                    cout << "Re-enter number: ";
                    cin >> number;
                    break;
                } else if (i == 3){
                    cout << "Try again another time" << endl;
                    return 0;
                } else{
                    break;
                }
            }
            
            cout << "Enter amount: ";
            cin >> amount;

            if(amount >= balance){
                cout << "No enough balance" << endl;
                return 0;
            } else if(amount <= 0){
                cout << "Invalid input" << endl;
                return 0;
            }

            balance -= amount;

            cout << "Enter pin: ";
            cin >> option;

            for(int i = 0; i < 3; i++){
                if(option != pin){
                    cout << "Wrong pin" << endl;
                    cout << "Re-enter pin: ";
                    cin >> option;
                } else{
                    break;
                }
                cout << "Try again another time" << endl;
                return 0;
            }

            cout << endl << "Payment made for GHC " << amount << " to " << number << ". Avaliable balance: " << balance << endl << endl;
        } else if(option == 2){
            cout << "Enter current pin: ";
            cin >> option;

            for(int i = 0; i < 3; i++){
                if(option != pin){
                    cout << "Wrong pin" << endl;
                    cout << "Re-enter pin: ";
                    cin >> option;
                } else{
                    break;
                }
                cout << "Try again another time" << endl;
                return 0;
            }

            cout << "Enter new pin: ";
            cin >> option;

            pin = option;
        } else if(option == 3){
            cout << "Enter pin: ";
            cin >> option;

            for(int i = 0; i < 3; i++){
                if(option != pin){
                    cout << "Wrong pin" << endl;
                    cout << "Re-enter pin";
                    cin >> option;
                } else{
                    break;
                }
                cout << "Try again another time" << endl;
                return 0;
            }
            cout << "Your balance is: " << balance << endl;
        } else if(option == 4){
            return 0;
        } else {
            cout << "Invalid input";
            cout << "Please choose a number (1 - 4)";
            cin >> option;
        }
    }

    return 0;
}