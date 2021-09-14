// First Program

int a,b,c;

int main()
{
   cout << "Enter 3 numbers separated by a space: ";
   cin >> a >> b >>c;

   if ((a >= b) && (a >= c))
      cout <<"The greatest number is "<< a;

   else if ((b>=a) && (b>=c))
      cout <<"The greatest number is "<< b;

   else if ((c>=a) && (c>=b))
      cout <<"The greatest number is "<< c;

    return 0;
}


// Second program

int a, b, c, max;

int main()
{
   cout << "Enter 3 numbers separated by a space: ";
   cin >> a >> b >>c;

   max=a;
   if (b > max) 
   	max = b;

   if (c > max) 
   	max = c;

   cout <<"The greatest number is "<< max;

    return 0;
}