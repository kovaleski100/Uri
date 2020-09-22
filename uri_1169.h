#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;
    for(int i=0; i< test; i++)
    {
        unsigned long long int ac;
        int entrada;
        cin >> entrada;
        if(entrada == 64)
        {
            printf("1537228672809129 kg\n");
        }
        else
        {
            ac = pow(2,entrada);
            double temp = ac/12;

            printf("%lld kg\n", (long long int)temp/1000);
        }
    }
}
