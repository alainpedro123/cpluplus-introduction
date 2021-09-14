// 1. Dynamic reserving and releasing memory areas

#include <iostream>

using namespace std;

int size;

int main()
{
    cout << "how many numbers in the array: ";
    cin>>size;

    //dynamic array allocation
    int *array;
    array = new int [size];

    // show next cell addresses in the table
    for (int i = 0; i < size; i++)
    {
        cout<< (int)array<<endl;
        array++;
    }

    delete [] array;
    array = NULL;


    return 0;
}