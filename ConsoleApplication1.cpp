#include <map>
#include <iostream>
#include <math.h>
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");
    int i, a;
    bool flag = true;
    map<int, double> accounts;
    for (i = 1; i <= 100; i++) {
        accounts[1000 + i] = 0;
    }
    while (flag == true) {
        cout << "Введите цифру для работы" << endl << "1 - открыть аккаунт;" << endl << "2 - узнать баланс счета;" << endl;
        cout << "3 - внести депозит" << endl << "4 - снять деньги со счета" << endl << "5 - удалить счет" << endl;
        cout << "6 - вывести все открытые счета и их баланс" << endl << "7 - посчитать процент вклада" << endl << "8 - завершить работу" << endl;
        cin >> a;

        switch (a) {
        case 1: //open account
            double deposit;
            cout << "Введите депозит для нового счета:" << endl;
            cin >> deposit;
            accounts[1101] = deposit;
            cout << accounts[1101] << endl;
            break;
        case 2: //print account and balance
            int number;
            cout << "Введите номер аккаунта:" << endl;
            cin >> number;
            if (accounts.find(number) == accounts.end()) {
                cout << "Аккаунта не существует" << endl;
            }
            else {
                cout << number << "\t" << accounts[number] << endl;
            }
            break;
        case 3: //make a deposit
            double c;
            cout << "Введите номер аккаунта:" << endl;
            cin >> number;
            cout << "Введите вносимую сумму:" << endl;
            cin >> deposit;
            c = accounts[number] + deposit;
            accounts[number] = c;
            cout << number << "\t" << accounts[number] << endl;
            break;
        case 4: //take money
            double money1;
            cout << "Введите номер аккаунта:" << endl;
            cin >> number;
            cout << "Введите сумму для снятия:" << endl;
            cin >> money1;
            if (accounts.find(number) == accounts.end()) {
                cout << "Аккаунта не существует" << endl;
            }
            else {
                if (accounts[number] > money1) {
                    accounts[number] -= money1;
                    cout << number << "\t" << accounts[number] << endl;
                }
                else {
                    cout << "Недостаточно средств" << endl;
                }
            }
            break;
        case 5:// delete account
            cout << "Введите номер аккаунта:" << endl;
            cin >> number;
            if (accounts.find(number) == accounts.end()) {
                cout << "Аккаунта не существует" << endl;
            }
            else {
                accounts.erase(number);
                cout << "Аккаунт удален" << endl;
            }
            break;
        case 6: // print all accounts
            for (const auto& [accounts, money] : accounts) {
                cout << accounts << "\t" << money << endl;
            }
            break;
        case 7:
            int procent;
            cout << "Введите процент по вкладу:" << endl;
            cin >> procent;
            for (const auto& [accounts, money] : accounts) {
                cout << accounts << "\t" << money * (procent + 100) << endl;
            }
            break;
        case 8:
            flag = false;
            break;

        }
    }
    cout << "Работа завершена" << endl;
    return 0;
}