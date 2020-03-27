#include <iostream>
using namespace std;

class Employee
{
private:
    int sale[5]; 
    int totalsales = 0;
    int counter=0;

public:
    // Used to read 5 sales from stdin and save them to your sales variable
    void input();
    int calculateTotalSales();
};

void Employee::input()
{
    for( int k=0; k<5; k++)
    cin >> sale[k];
}
// Calculates each employees total sales and then return the totalsales
int Employee::calculateTotalSales()
{
    for (int i = 0; i <= 5; i++)
    {
        totalsales+=sale[i];
        return totalsales;
    }
}
