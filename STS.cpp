#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float netAmount;
    float princiPalamount = 30;
    float interestRate = .001;

    for(int day = 1; day <= 30; day++) {
    netAmount = princiPalamount * pow(1+interestRate, day);
    cout << "Day " << day << " Net Amount: " << netAmount << endl;
    }

}
