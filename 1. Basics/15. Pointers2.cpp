int main ()
{
    int number = 144;
    int *pointer = &number;
   cout << number << endl;  // value of number
   cout << pointer<< endl;  // memory address of number

  return 0;
}


//

int main ()
{
    int number = 144;
    int *pointer = &number;
   cout << number << endl;  // value of number
   cout << *pointer<< endl;

   cout << &number << endl;
   cout << pointer<< endl;  // memory address of number


  return 0;
}
