/* Write a function that takes a given parameter “an index (number)” and returns its value of the Fibonacci sequence, 
where the sequence is: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377… 
The pattern of the sequence is that each value is the sum of the 2 previous values, that means that for N=5 → 2+3. 
Use a FOR LOOP
*/

/* Write a function that takes a given parameter “an index (number)” and returns its value of the Fibonacci sequence,
where the sequence is: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377…
The pattern of the sequence is that each value is the sum of the 2 previous values, that means that for N=5 → 2+3. */

#include <iostream>

using namespace std;

int fibonnaci(int number){
	int result [10000];
	result[0] = 1;
	result[1] = 1;

	if(number == 0 || number == 1){
		return number;
	}

	else if(number == 2){
		return 1;
	}

	for(int i = 2; i < number; i++)
    {
		result[i] = result[i-1] + result[i-2];
	}
	return result[number];
}


int main ()
{
  fibonnaci(1);
  return 0;
}