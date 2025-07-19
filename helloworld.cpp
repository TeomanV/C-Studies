#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double deposit(double money);
double withdraw(double money);
double balance(double total);

int main(){
    using namespace std;

    double money, total;
    char opt;
    total = 0;

    do{
        cout << "Welcome to the TeoBank" << "\n";
        cout << "Please choice one option: " << "\n";
        cout << "1: Deposit money, 2: Withdraw money, 3: Show balance, 4:EXIT" << "\n";

        cin >> opt;

        switch (opt)
        {
        case '1':
            cout << "Enter a balance you want to deposit: " << "\n";
            cin >> money;
            deposit(money);
            total += money; 
            break;
        case '2':
            cout << "Enter a balance you want to withdraw: " << "\n";
            cin >> money;
            withdraw(money);
            total -= money;
            break;
        case '3':
            cout << "Your balance is: " << balance(total) << "\n";
            break;
        case '4':
            cout << "BYE BYE";
            break;
        default:
            cout << "Wrong choice" << "\n";
            break;
        }
        
    }while (opt!='4');
   
    return 0;
}

double deposit(double money){
    return money + money;
}

double withdraw(double money){
    return money - money;
}

double balance(double total){
    return total;
}