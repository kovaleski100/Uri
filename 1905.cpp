#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};

int matrizv[5][5] = {};

bool flood_fill(int matriz[5][5],int x,int y)
{
    if(x == 4 && y ==4)
    {
        return true;
    }
    else
    {
        if((x>4 || x<0) || (y>4 || y<0))
        {
            return false;
        }
        else if(matriz[x][y]==0 && matrizv[x][y]==0)
        {
            matrizv[x][y] = 1;
            for(int i=0;i<4;i++)
            {
                if(flood_fill(matriz,x+dx[i],y+dy[i]))
                {
                    return true;
                }
            }
        }
        return false;

    }
}


int main()
{

    int T = 0;
    int matriz[5][5] = {};

    cin >> T;

    for(int i=0; i<T; i++)
    {
        memset(matrizv,0,sizeof(matrizv));
        bool result = false;
        for(int j=0; j<5; j++)
        {
            cin>>matriz[0][j]>>matriz[1][j]>>matriz[2][j]>>matriz[3][j]>>matriz[4][j];
        }
        result = flood_fill(matriz, 0,0);

        if(result==true)
        {
            cout <<"COPS\n";
        }
        else
        {
            cout <<"ROBBERS\n";
        }
    }
    return 0;
}
