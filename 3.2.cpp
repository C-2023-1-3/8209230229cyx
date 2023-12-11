#include<iostream>
using namespace std;

bool is_prime(int num)
{
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

int main()
{  
    int j=1;
    static int n = 1;
        do
        {
        n++;
        if (is_prime(n))
        {
            {
                if (j % 10 != 0)
                    cout << n << " ";
                else
                    cout << n << "\n";
            }
            j++;
        }
        } while (j<=200);
            
    

            system("pause");
            return 0;
}
