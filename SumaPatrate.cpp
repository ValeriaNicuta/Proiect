#include<iostream>
#include<math.h>
using namespace std;

void verificare(int n){
    int i,j,ok;
    ok=0;
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
}
int main()
{
    int n;
    n=128;
    cout<<"Patratele care formeaza numarul n: "<<"\n";
   verificare(n);
    return 0;
}