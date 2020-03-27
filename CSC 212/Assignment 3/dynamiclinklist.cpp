#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void arraytolinklist(int data);
int main()
{
    int size;
    int *arr;
    cout << "Please input number of intergers: ";
    cin >> size;
    arr = new int[size];
    cout << "Please input all integers less than 50: " << endl;
    //Input values in an array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    //sort array
    int holder;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                holder = arr[i];
                arr[i] = arr[j];
                arr[j] = holder;
            }
        }
    }
    /* //Print out sorted array
    cout << "Sorted Array elements:" << endl;
    for (int k = 0; k < size; k++)
        cout << arr[k] << "\t";
    */
    // Delete Duplicates
    int next = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] != arr[next])
            arr[++next] = arr[i];
    }
    int count = next + 1;

    //return sorted and uniq. array
    cout << "Sorted elements:" << endl;
    for (int z = 0; z < count; ++z)
    {
        cout << arr[z] << endl;
    }

    // inserting array into linklist scraped attempt
    /*
    This code does not work
    node *last;
    head->data=arr[0];
    head->next=NULL;
    last=head;
    */

   //new code to insert array into linklist
    for (int w = 0; w < count; w++)
    {
        arraytolinklist(arr[w]);
    }

    //print out contents of linkedlist
    node *ptr = head;
    cout << "Modified List: " << head->data;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        cout << "->" << ptr->data;
    }
    
}

void arraytolinklist(int data)
{

    node *ptr = new node; //created a new node
    ptr->data = data; // array value is set to each node data section
    ptr->next = NULL; //will have the last element be the end

    //if list empty then head is equal to ptr
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        node * temp = head; //start a temperary at head 

        //loop until the second to last element is reached
        while (temp->next != NULL)
        {
            temp = temp->next; //temp will traverse to the next element
        }
        //once it finds first null, change pointer to tail
        temp->next = ptr;
    }
}
