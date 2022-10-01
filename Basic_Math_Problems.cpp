// counting Prime number
/*
int countPrimes(int n) {
        int count=0;
        vector<bool> prime(n+1, true);
        
        prime[0]=prime[1] = false;
        
        for(int i=2; i<n; i++)
        {
            if(prime[i])
            {
                count++;
            
                for(int j=2*i; j<n; j=j+i)
                {
                    prime[j]=0;
                }
        
            }
        }
        return count;
    }

// Checking Prime

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
        return false;

    for (int i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
            return false;
    }

    return true;
    
}
int main()
{
    int n;
    cout<<"Enter Value: ";
    cin>>n;

    if(isPrime(n))
    {
        cout<<n<<" is a prime number";
    }
    else
    {
        cout<<n<<" is not a prime number";
    }

    return 0; 
}

*/


#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;

    if(b==0)
        return a;

    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b = b-a;
    }
    return a;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0; 
}