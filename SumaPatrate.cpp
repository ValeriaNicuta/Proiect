#include<iostream>
using namespace std;

void verificare(int n){
    int i,j,ok;
    ok=0;
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if((i*i)+(j*j)==n){
               cout << i * i << "(" << i << ")" << " " << j * j << "(" << j << ")" << "\n";
               ok=1;
            }
        }
    }
    if(ok==0)
    cout<<"Numarul nu poate constitui suma a doua patrate";
}

int main()
{
    int n, m;
    n=1289;
    m=3000;
    cout<<"Patratele care formeaza numarul "<<n<<"\n";
    verificare(n);
    cout<<"Patratele care formeaza numarul "<<m<<"\n";
    verificare(m);
    return 0;
}