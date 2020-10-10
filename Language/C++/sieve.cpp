//Printing the prime numbers upto a given number 'n' in O(n log log n) time.
// as it takes O(n) time in iterartive method.
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    memset(arr, 0, sizeof(arr));    //Initialising all values with zero
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)    // If the ith number is prime
        {
            for (int j = 2; j <= n / i; j++)    // All it's multiples are marked 1 
            {
                if (arr[i * j] != 1)    //as they will not be a prime number 
                {
                    arr[i * j] = 1;
                }
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";   //Printing the prime numbers upto n
        }
    }
}
