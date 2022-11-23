#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,j,n,ok;
    ok=0;
    cout<<"Dati numarul pe care doriti sa-l cercetati: ";
    cin>>n;
    cout<<"Patratele care formeqaza numarul n: "<<"\n";
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(pow(i,2)+pow(j,2)==n)
                cout<<i<<" "<<j<<"\n";
            else
                ok=1;
        }
    }
    if(ok==1)
        cout<<"Numarul nu poate constitui suma a doua patrate";
    return 0;
}