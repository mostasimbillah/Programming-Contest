#include<bits/stdc++.h>

using namespace std;

int main()
{

    float n1,n2,n3,n4,n5;

    cin >> n1 >> n2 >> n3 >> n4;

    float avg;

    avg=((n1*2.0)+(n2*3.0)+(n3*4.0)+n4);
    avg/=10.0;

    printf("Media: %.1f\n",avg);
    if(avg>=7.0)
    {
        cout <<"Aluno aprovado."<< endl;
    }else if(avg<5.0){

        cout <<"Aluno reprovado." << endl;

    }else if(avg>=5.0 && avg<=6.9)
    {

        cout<<"Aluno em exame."<< endl;

        cin >> n5;
        printf("Nota do exame: %.1f\n",n5);
        avg=avg+n5;
        avg/=2.0;
        if(avg>=5.0)
        {
            cout <<"Aluno aprovado."<<endl;

        }else if(avg<=4.9)
        {
            cout <<"Aluno reprovado." << endl;
        }
        printf("Media final: %.1f\n",avg);
    }


    return 0;
}
