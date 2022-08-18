
#include <bits/stdc++.h>

using namespace std;
int power_calculate(int base, int power)
{
    if (power== 0){
        return 1;
    }
    else{
        return (base*power_calculate(base, power-1));
    };
}
int main()
{
    int base, power;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter power: ";
    cin >> power;

    int ans = power_calculate(base, power);
    cout << base << "^" << power << " = " << ans;

    return 0;
}
