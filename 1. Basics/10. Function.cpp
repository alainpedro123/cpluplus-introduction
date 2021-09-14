1) Functions with no type - Void

void printmessage ()
{
  cout << "I'm a function!";
}

int main ()
{
  printmessage ();
}



2) Function with a type

int subtraction (int a, int b)
{
  int r;
  r=a-b;
  return r;
}

int main ()
{
  int x=5, y=3, z;
  z = subtraction (7,2);
  cout << "The first result is " << z << '\n';
  cout << "The second result is " << subtraction (7,2) << '\n';
  cout << "The third result is " << subtraction (x,y) << '\n';
  z= 4 + subtraction (x,y);
  cout << "The fourth result is " << z << '\n';
}


3) Default values in parameters

int divide (int a, int b=2)
{
  int r;
  r=a/b;
  return (r);
}


4) Arguments passed by value
int x=5, y=3, z;
z = addition ( x, y );


5) Arguments passed by reference
Arguments can be passed by reference - In certain cases it may be useful to access an external variable from within a function.

// references are indicated with an ampersand (&) following the parameter type
void duplicate (int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
}

int main ()
{
  int x=1, y=3, z=7;
  duplicate (x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z;
  return 0;
}



6) Efficiency considerations and const references

a) Calling a function with parameters taken by value causes copies of the values to be made.  if the parameter is of a large compound type, it may result on certain overhead. passing the arguments by value, the function forces a and b to be copies of the arguments passed to the function when it is called. And if these are long strings, it may mean copying large quantities of data just for the function call.

string concatenate (string a, string b)
{
  return a+b;
}



b) this copy can be avoided altogether if both parameters are made references. Arguments by reference do not require a copy.

string concatenate (string& a, string& b)
{
  return a+b;
}

functions with reference parameters are generally perceived as functions that modify the arguments passed, because that is why reference parameters are actually for.


c) The solution is for the function to guarantee that its reference parameters are not going to be modified by this function. This can be done by qualifying the parameters as constant:

string concatenate (const string& a, const string& b)
{
  return a+b;
}



7) Inline functions

Preceding a function declaration with the inline specifier informs the compiler that inline expansion is preferred over the usual function call mechanism for a specific function. 

inline string concatenate (const string& a, const string& b)
{
  return a+b;
}