//Assignment 7 Sol 2//
/*
#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
*/

//Sol 1//
/*
#include <stdio.h>

// Function to find the nth Fibonacci number
int fib(int n)
{
    if (n <= 1) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 8;

    printf("F(n) = %d", fib(n));

    return 0;
}
*/

//Sol 3//
/*
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
bool isPerfectSquare(int x)
{
	int s = sqrt(x);
	return (s * s == x);
}
bool isFibonacci(int n)
{
	return isPerfectSquare(5 * n * n + 4)
		|| isPerfectSquare(5 * n * n - 4);
}
int main()
{
	for (int i = 1; i <= 10; i++) {
		if (isFibonacci(i))
			printf("%d is a Fibonacci Number \n", i);
		else
			printf("%d is a not Fibonacci Number \n", i);
	}
	return 0;
}
*/

//Sol 4//
/*
#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
*/

//Sol 5//
/*
#include<stdio.h>

int coprime(int num1, int num2)
{
    int min, count, flag = 1;

    min = num1 < num2 ? num1 : num2;

    for(count = 2; count <= min; count++)
    {
        if( num1 % count == 0 && num2 % count == 0 )
        {
            flag = 0;
            break;
        }
    }

    return(flag);
}

int main()
{
    int n1, n2;

    printf("Enter 2 positive numbers\n");
    scanf("%d%d", &n1, &n2);

    if( coprime(n1, n2) )
    {
        printf("%d and %d are co-prime numbers.\n", n1, n2);
    }
    else
    {
        printf("%d and %d are not co-prime numbers.\n", n1, n2);
    }

    return 0;
}
*/

//Sol 6//
/*
#include <stdio.h>

int main()
{
  int i, a = 1, count;


  while(a <= 100)
  {
    count = 0;
    i = 2;
    while(i <= a/2)
    {
      if(a%i == 0)
      {
        count++;
	break;
      }
      i++;
    }
    if(count == 0 && a != 1 )
    {
	printf(" %d ", a);
    }
    a++;
  }
  return 0;
}
*/

//Sol 7//
/*
#include <stdio.h>
int main()
{
   int num1, num2, flag_var, i, j;
   printf("Enter two range(input integer numbers only):");
   scanf("%d %d", &num1, &num2);
   printf("Prime numbers from %d and %d are:\n", num1, num2);
   for(i=num1+1; i<num2; ++i)
   {
      flag_var=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            flag_var=1;
            break;
         }
      }
      if(flag_var==0)
         printf("%d\n",i);
  }
  return 0;
}
*/

//Sol 8//
/*
#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    printf("Enter the Number:-");
    scanf("&d",&n);
    for(i=n;i>0;i++)
    {
        count=0;
        for(j=1;j<=1;j++)
        {
            if(i%j==0)
                count++;

        }
        if(count==2)
        {
            printf("%d",i);
            break;
        }

    }
}
*/

//Sol 9//
/*
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;

       result += remainder * remainder * remainder;

       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
*/

//Sol 10//
#include<stdio.h>

int main()
{
    int num, count = 1, rem, sum;

    while(count <= 1000)
    {
        num = count;
        sum = 0;

        while(num)
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }

        if(count == sum)
        {
            printf("%d is a Armstrong number\n", count);
        }

        count++;
    }

     return 0;
}








