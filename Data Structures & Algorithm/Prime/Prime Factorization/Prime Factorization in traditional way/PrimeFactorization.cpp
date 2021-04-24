#include<bits/stdc++.h>
using namespace std;

vector <int> prime;
bool flag = true;   // N is prime itself

void sieve(int N)
{
    int temp = (int)sqrt(N);

    int status[(temp>>5)+2]= {0};

    int sqrtTemp = (int)sqrt(temp);

    for(int i=3; i<=sqrtTemp; i += 2)
    {
        if((status[i>>5] & (1 << (i & 31)))==0)
        {
            for (int j = i*i; j<=temp; j += (i<<1))
            {
                status[j>>5] |= (1 <<(j & 31));
            }
        }
    }


    for (int i=3; i<=temp; i += 2)
    {
        if((status[i>>5] & (1 << (i & 31))) == 0)
            prime.push_back(i);
        if(N % i == 0)
            flag = false; // N is not prime itself
    }


//    for (int i=0; i!=prime.size(); i++)
//    {
//        cout<<prime.at(i)<<" ";
//    }

}

primeFactorization(int N)
{
    vector <int> primeFactor;
    int primeFactorSize = 0;

    cout<<"\nPrime factors of "<<N<<" : ";

    while(N>=1 && primeFactorSize != prime.size()) ///Iterating for every prime number which are added to the 'prime' vector
    {
        int value = prime.at(primeFactorSize);
        while(N % value == 0)   /// Iterating until the number is divisible by the current prime number
        {
            primeFactor.push_back(value); /// Pushing the current prime number
            N /= value;
        }
        //cout<<prime.at(primeFactorSize)<<endl;
        primeFactorSize++;                         /// Incrementing to the next prime number
    }
    //cout<<N<<endl;

    if(N>1)                                         /// n is greater than 1, so we are sure that this n is a prime
        primeFactor.push_back(N);

    for (int i=0; i!=primeFactor.size(); i++)
    {
        cout<<primeFactor.at(i)<<" ";
    }
    primeFactor.clear();
}

int main()
{
    int N;
    while(cin >> N)
    {
        if ((N & 1)==0) // checking if N is even
        {
            prime.push_back(2);
        }

        sieve(N);

        if ((N & 1)!=0 && flag == true)
        {
            cout<<"\n"<<N<<" is the prime factor of itself since its a prime number\n\n";
            continue;
            //return 0;
        }

        primeFactorization(N);
        cout<<"\n\n";
        prime.clear();
        flag = true;
    }
    return 0;
}
