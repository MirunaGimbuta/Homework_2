#include<iostream>
using namespace std;

int main()
{
    int n1, n2, c1, c2, s1=0, s2=0;

    cout<<"n="; cin>>n2;

    while (n2!=0)
    {
        n1=n2;
        cout<<"n="; cin>>n2;

        c1=n1;
        c2=n2;

        while(c1!=0)
        {
            s1=s1+ c1%10;
            c1=c1/10;
        }
        while(c2!=0)
        {
            s2=s2+ c2%10;
            c2=c2/10;
        }

        if(s1%2==0)
        {
            if (s2%2==1) cout<<endl<<n1<<"  "<<n2<<endl;
        }
        s1=0;
        s2=0;
    }

    return 0;
}
