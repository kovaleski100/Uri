#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int fat[100002];

    fat[3] = 1;

    for(int i=4 ; i<= 100000; i++)
    {
        fat[i] = (i*fat[i-1])%1000000009;
    }

    int entrada;
    while(cin >> entrada)
    {
        if(entrada == 0)
        {
            break;
        }
        else
        {
            cout<< fat[entrada]<<"\n";
        }
    }
}
