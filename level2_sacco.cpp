#include <iostream>
using namespace std;

int main() {
    string name, member_id;
    float contribution, total_savings = 0;

    cout << "Enter member name: ";
    cin >> name;

    cout << "Enter member ID: ";
    cin >> member_id;

    for (int month = 1; month <= 6; month++) {
        cout << "Enter contribution for month " << month << ": ";
        cin >> contribution;
        total_savings += contribution;
    }

    cout << "\nMember Name: " << name << endl;
    cout << "Member ID: " << member_id << endl;
    cout << "Total Savings: " << total_savings << endl;

    return 0;
}