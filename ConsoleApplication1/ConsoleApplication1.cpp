#include <map>
#include <iostream>
#include <math.h>
using namespace std;
int create_new_account(int accounts);


int main() {
    int i, a;
    map<int, double> accounts;
    for (i = 1; i <= 100; i++) {
        accounts[1000 + i] = 0;
    }
    //for (const auto& [account, money] : accounts) {
    //    cout << account << "\t" << money << endl;
    //}
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
        //case 4: //

    }
    return 0;
}