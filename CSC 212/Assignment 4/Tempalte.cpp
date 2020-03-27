#include <iostream>
using namespace std;

// class template
template <class T>
class AddElements
{
    T element;

public:
    AddElements(T arg) { element = arg; }
    T add(T e2) { return element + e2; }         // add two integers or doubles
    T concatenate(T e2) { return element + e2; } // combine to strings into one
};

int main()
{
    int interation;
    cout << "PLEASE ENTER NUMBER OF INTERATIONS: " << endl;
    cin >> interation;
    for (int i = 0; i < interation; i++)
    {
        string type;
        cin >> type;       // input string type for temnplate categorizing
        if (type == "int") //checks for keyword int
        {
            int element1, element2;            // creates to intergers
            cin >> element1 >> element2;       // take element inputs
            AddElements<int> theint(element1); // adds first element
            cout << theint.add(element2) <<endl;      // adds second element to first element
        }
        if (type == "float") //checks for keyword float
        {
            double element1, element2;              // creates to double integers
            cin >> element1 >> element2;            // take two double element inputs
            AddElements<double> thefloat(element1); // add first double element
            cout << thefloat.add(element2) <<endl;         // add second double element to the first double element
        }
        if (type == "string") // checks for keyword string
        {
            string element1, element2;               // creates two strings
            cin >> element1 >> element2;             // take two strings as inputs
            AddElements<string> thestring(element1); // adds first string
            cout << thestring.concatenate(element2) <<endl; // combines first and second string togther
        }
    }
}
