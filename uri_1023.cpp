#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0;
    int j = 1;

    while(1)
    {
        cin>>n;
        if(n!=0)
        {
            if(j>1)
            {
                cout<< endl;
            }
            pair<int, int> mapa;
            vector<pair<int, int>> vetor;
            double sumF = 0;
            cout<< "Cidade# "<< j << ":"<< endl;
            j++;
            for(int i =0; i<n; i++)
            {
                cin >> mapa.second;
                cin >> mapa.first;


                sumF += mapa.first;

                mapa.first = mapa.first/mapa.second;

                vetor.push_back(mapa);
            }
            sort(vetor.begin(),vetor.end());
            int sumS = 0;
            int imovel = 0;
            map<int, int> consumo;
            for(pair<int, int>  mapa: vetor)
            {
                consumo.insert(make_pair(mapa.first,0));
            }
            for(pair<int, int>  mapa: vetor)
            {
                map<int, int>::iterator aux = consumo.find(mapa.first);
                aux->second += mapa.second;
                consumo.insert(make_pair(aux->first, aux->second));
            }
            for(auto it = consumo.begin(); it!= consumo.end(); it++)
            {
                sumS+= it->second;
                cout << it->second << "-"<< it->first<< " ";
            }
            double valor = floor(100 * (double)sumF / sumS) / 100;
            setprecision(2);
            printf("\nConsumo medio: %.2f m3.\n", valor);
        }
        else
        {
            break;
        }
        
    }
}