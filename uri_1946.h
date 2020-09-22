#include <iostream>
#define MAX 5001

using namespace std;

double entrada[MAX][MAX];
void prob(int n){
    entrada[1][0]=100;
    for(int i=1; i<=n; i++){
        for(int j=0;j<= i; j++){
             if(j==0){
                entrada[i+1][j]=entrada[i][j]/2;}
            else if( j == i ){
                entrada[i+1][j]=entrada[i][0]/2;}
            else{
                entrada[i+1][j]=entrada[i][j]/2+entrada[i][j-1]/2;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    prob(n);
    cout.precision(2);
    cout << fixed << entrada[n][n/2] << endl;
    return 0;
}
