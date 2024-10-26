/*
STATEMENT:
Given n integers, your task is to report for each integer the number of its divisors.
For example, if x=18, the correct answer is 6 because its divisors are 1,2,3,6,9,18.

Input
The first input line has an integer n: the number of integers.
After this, there are n lines, each containing an integer x.

Output
For each integer, print the number of its divisors.

Constraints

1 <=n<=10^5
1 <=  x <= 10^6
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
number of divisors is the sum of the powers of the prime factors.
*/
void solve()
{
 
    int number;
    cin >> number;
    vector<int> powersOfPrimeFactors;
    for (int i = 2; i * i<=number; i++)
    {
        if (number % i == 0)
        {
            int power = 0;
            while (number % i == 0)
            {   power++;
                number /= i;
                
            }
            powersOfPrimeFactors.push_back(power);
        }
    }
 
    if (number != 1)
        powersOfPrimeFactors.push_back(1);
    int numberOfDivisors = 1;
    int u=powersOfPrimeFactors.size();
    for (int i=0;i<u;i++)
    {
        numberOfDivisors *= (powersOfPrimeFactors[i] + 1);
        
    }
    cout << numberOfDivisors << endl;
}
 
int main()
{
    
    int t = 1;
    cin >> t;
 
    while (t--)
    {
 
        solve();
    }
    return 0;
}

