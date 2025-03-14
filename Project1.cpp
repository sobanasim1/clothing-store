#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    float shalwarkameezprice=150;
    float pentshirtprice=250;
    string colour;
    int op1;
    int op2;
cout<<"Welcome to my store.."<<endl;
cout<<"Which clothes you want to buy.."<<endl;
cout<<"1.Men"<<endl;
cout<<"2.Women"<<endl;
cin>>op1;
  switch(op1)
  {
  case 1:
  cout<<"Here are multiple choice of items of mens collection. "<<endl;
  break;
  case 2:
  cout<<"Here are multiple choice of items of female collection."<<endl;
  break;
}
{
cout<<"Which type of mens clothes do you prefer.."<<endl;
cout<<"1. Salwar Kameez."<<endl;
cout<<"2.  Pent shirt."<<endl;
}  
{
if(op2=1)(cout<<"Salwar kameez is a great choice"<<endl);
cout<<"The price of salwar kameez is:"<<shalwarkameezprice<<endl;
}
{
if(op2=2)(cout<<"Pent shirt is better for functions"<<endl);
cout<<"The price of pent shirt is:"<<pentshirtprice<<endl;
}
}