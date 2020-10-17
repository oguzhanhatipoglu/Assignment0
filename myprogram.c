#include "mylibrary.h"
int sum_of_1_to_n(int n)
{
	int sum = 0;

	//TODO: sum all numbers from 1 to n

	for (int i=0;i<=n;i++){
	sum += i;
}
	return sum;
}

int sum_of_even_numbers(int *array, int count)
{
	int sum = 0;
	for (int i=0;i<count;++i)
	{
        
		//TODO: only add even numbers, e.g., 4. Skip odd numbers, e.g., 3
        if(array[i] % 2 == 0){
            sum += array[i];
        }
        
	}
	return sum;
}

int max_of_numbers(int *array, int count)
{
	//TODO: return the maximum number from the array
    int max=0;
    for(int i=0 ; i<count; i++){
        if (array[i]>max) {
            max = array[i];
        }
    }
	return max;
}

int reversed_number(int number)
{
    int reverse =0;
    int remainder;
    while(number!=0)
    {
       remainder=number%10;
       reverse=reverse*10+remainder;
       number/=10;
    }
	//TODO: if input is 12345, return 54321

	return reverse;
}

int is_prime(int number)
{
	//TODO: return 1 if the input number is prime, otherwise 0
    for(int i = 2; i <= number/2; i++) {
       if(number % i == 0) {
           return 0;
           break;
       }
    }
	return 1;
}

int count_primes(int start, int end)
{
    int flag;
    //TODO: return the count of prime numbers in range [start, end] inclusive.
    int primeCount=0;
    for(int i=start;i<=end;i++){
           if (i == 1 || i == 0 || end==0 ||end==1){
               continue;
           }

        flag=1;
        for(int j = 2; j <= i/2; j++) {
              if(i % j == 0) {
                  flag=0;
                  break;
              }
           }
        if (flag==1) {
           primeCount++;
        }

    }
    return primeCount;
}



char alphabet_index(int index)
{
 
    //TODO: for index 0, return A. index 1, B, etc. until 25 for Z.
     char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
      
     if(index<0 || index>25){
       return ' ';
     }else {
       return alphabet[index];
     }
    //if index is out of range, return space ' '.
    
}
