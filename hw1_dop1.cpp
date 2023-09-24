#include <map>
#include <iostream>
#include <math.h>
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");
    int i, a;
    map<int, double> accounts;
    for (i = 1; i <= 100; i++) {
        accounts[1000 + i] = 0;
    }
    while{
        cout << "Введите цифру для работы" << endl << "1 - открыть аккаунт;" << endl << "2 - узнать баланс счета;" << endl;
        cout << "3 - внести депозит" << endl << "4 - снять деньги со счета" << endl << "5 - удалить счет" << endl;
        cout << "6 - вывести все открытые счета и их баланс" << endl << "7 - посчитать процент вклада" << endl << "8 - завершить работу" << endl;
        cin >> a;

        switch (a) {
        case 1: //open account
            double deposit;
            cin >> deposit;
            accounts[1101] = round(deposit * 100) / 100;
            cout << accounts[1101] << endl;
        case 2: //print account and balance
            int number;
            cin >> number;
            cout << number << "\t" << accounts[number] << endl;
        case 3: //make a deposit
            double c;
            cin >> number;
            cin >> deposit;
            c = accounts[number] + deposit;
            accounts[number] = round(c * 100) / 100;
            cout << number << "\t" << accounts[number] << endl;
        case 4: //take money
            double money1;
            cin >> number;
            cin >> money1;
            if (accounts.find(number) == accounts.end()) {
                cout << "Аккаунта не существует" << endl;
            }
            else {
                if (account[number] > money1) {
                    account[number] -= money1
                        cout << number << "\t" << account[number] << endl;
                }
                else {
                    cout << "Недостаточно средств" << endl;
                }
            }
        case 5:// delete account
            cin >> number;
            if (accounts.find(number) == accounts.end()) {
                cout << "Аккаунта не существует" << endl;
            }
            else {
                accounts.erase(number);
                cout << "Аккаунт удален" << endl;
            }

        case 6: // print all accounts
            for (const auto& [account, money] : accounts) {
                cout << account << "\t" << money << endl;
            }
        case 7:
            int procent;
            cin >> procent;
            for (const auto& [account, money] : accounts) {
                cout << account << "\t" << money * (procent + 100) << endl;
            }
        case 8:
            break;

        }
    }
    cout << "Работа завершена" << endl;
    return 0;
}