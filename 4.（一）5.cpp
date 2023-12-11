#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len2 - len1; i++) 
    {
        bool match = true;

        for (int j = 0; j < len1; j++)
        {
            if (s1[j] != s2[i + j])
                match = false;
            break;
        }
        
        if (match) 
        {
            return i; 
        }
    }
    return -1; 
}

int main() {
    const int MAXlen = 50;
    char s1[MAXlen], s2[MAXlen];

    cout << "Enter the first string: ";
    cin.getline(s1, MAXlen);

    cout << "Enter the second string: ";
    cin.getline(s2, MAXlen);

    cout << "indexOf(" << s1 << "," << s2<<")is"<< indexOf(s1, s2);
    
    return 0;
}

