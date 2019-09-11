#include <iostream>
//#include <cctype>
using namespace std;

//First part of the code is to define the boolean function
bool isDivisibleBy(int n, int d)
{
    if (d == 0)
    {
        return true;
        exit(1);
    }
    if (n % d == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
bool isPrime(int n)
{
    while (n > 0)
    {
        if (n == 1)
        {
            return false;
        }
        else if (n == 0)
        {
            return false;
        }
        else
        {
            for(int i = 2; i <= n-1; i++)
            {
                if (n%i == 0)
                {
                    return false;
                }
            }
            return true;
        }
    }
    return false;
}

int nextPrime(int n)
{
    int next = n + 1;
    {
        while (isPrime(next) == 0)
        {
            next ++;
        }
        return next;
    }
}

int countPrimes(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if(isPrime(i) == true)
        {
            count++;
        }
    }
    return count;
}

bool isTwinPrime(int n)
{
    {
        if (isPrime(n) && (isPrime(n - 2) || isPrime(n + 2)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int nextTwinPrime(int n)
{
    int next = n + 1;
    while (isTwinPrime(next) == 0)
    {
        next++;
    }
    return next;
}

int largestTwinPrime (int g, int h)
{
    int exit = -1;
    for (int i = h; i >= g; i--)
    {
        if (isTwinPrime(i) == true)
        {
            return i;
        }
    }
    return exit;
}

int main()
{
    int d;
    cout << "Enter a number: ";
    cin >> d;
    cout << nextTwinPrime(d);
}

/*int main()
{
    int c;
    cout << "Enter your number: ";
    cin >> c;
    if (isTwinPrime(c))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

/*int main()
{
    int k,l;
    cout << "Enter your first number: ";
    cin >> k;
    cout << "Enter your sencond: ";
    cin >> l;
    cout << countPrimes(k,l);
    
}
/*int nextPrime(int n)
{
    int next = n + 1;
    {
        while (isPrime(next) == 0)
        {
            next++;
        }
        return next;
    }
}

int main()
{
    int z;
    cout << "Enter a number: ";
    cin >> z;
    cout << nextPrime(z);
    
}
//second part of the code defines the variables I am going to be pulling form to do my calculations
//
/*int main()
{
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    if (isDivisibleBy(x,y))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
*/
