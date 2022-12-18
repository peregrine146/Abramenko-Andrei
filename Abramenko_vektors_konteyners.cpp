#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
 
bool pred(int x)
{
    int k=0;
    for(int i=2; i<=x/2; i++)
    if (x%i == 0) k++;
    return (k == 0);
}
 
int main()
{
    vector <int> iVec;
    int x,n,s;
    cout<<"n=";cin>>n;//в цикле формируется вектор из n элементов,значения которых вводятся с клавиатуры
    for(int i=0;i<n;i++)
    {
        cout<<"vvedite element s nomerom"<<i<<endl;
        cin>>x;
        iVec.push_back(x);
    }
    replace_if(iVec.begin(), iVec.end(), pred, s);
    for(vector <int>::iterator iter = iVec.begin();iter<iVec.end();iter++)
    cout<<*iter<<endl;
    return 0;
}