#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
    int morethanjack = 0;
    Employee jack;
    cout << "Enter Jacks sales: " << endl;
    jack.input(); // input jacks sales
    int n;        // range of number of employees
    cout << "Please indicate the number of employees: ";
    cin >> n;               // input number of employeees
    Employee employees[n];  // create an object array with n employees
    if (n <= 100 && n >= 1) // constrain the number of employees between 1 and 100
    {

        for (int i = 0; i < n; i++) // take in all the employees sales
        {
            employees[i].input(); // input all employees sales
        }
    }
    // if more than 100 employees then print this message
    if (n > 100)
    {
        cout << "Too many employees to calculate." << endl;
    }
    // calculate sales exceeding jacks
    for (int j = 0; j < n; j++)
    {
        if (employees[j].calculateTotalSales() > jack.calculateTotalSales()) // check if other employees sales are greater than jacks
        {
            morethanjack++; // increment if employees sales are greater than jacks
        }
    }
    // return the number of sales that exceed jacks amount
    cout << "Number of employees sales greater than Jacks: " << morethanjack; // print out how many employees sales are greater than jacks

    return 0;
}
