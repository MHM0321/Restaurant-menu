#include<iostream>
using namespace std;
int main()
{int order=0,quantity=0,currency=0;
double simpleprice=0,price_with_quan=0,totalprice_wo_cr=0,totalprice_w_cr;
cout<<"Code:	Meal:	Price per kg (excl. sales tax) in PKR:"<<endl<<"1	Chicken Handi	1800"<<endl<<"2	Chicken Karahi	2000"<<endl<<"3	Chicken Tikka	2200"<<endl<<"4	Chicken Haleem	500"<<endl<<"5	Creamy Chicken	2500"<<endl;
cin>>order;
if(order <=0 || order > 5)
{cout<<"Please select from 1 to 5"<<endl;
return 0;}
cout<<"How much quantity ?"<<endl;
cin>>quantity;
if(quantity <=0)
{cout<<"Enter valid quantity"<<endl;
return 0;}
cout<<"Select your currency :"<<endl<<"1	PKR"<<endl<<"2	USD"<<endl<<"3	EUR"<<endl;
cin>>currency;
if(currency<=0 || currency>3)
{cout<<"Please select a valid currency"<<endl;
return 0;}
switch(order)
{case 1:
simpleprice=1800;
break;
case 2:
simpleprice=2000;
break;
case 3:
simpleprice=2200;
break;
case 4:
simpleprice=500;
break;
case 5:
simpleprice=2500;
break;}
price_with_quan = quantity*simpleprice;
if(price_with_quan<=1000)
{totalprice_wo_cr = price_with_quan;}
else if(price_with_quan>1000 && price_with_quan<=3000)
{totalprice_wo_cr = (price_with_quan + (price_with_quan*(0.02)));}
else if(price_with_quan>3000)
{totalprice_wo_cr = (price_with_quan + (price_with_quan*(0.05)));}
switch(currency)
{case 1:
totalprice_w_cr = totalprice_wo_cr;
break;
case 2:
totalprice_w_cr = totalprice_wo_cr/165;
break;
case 3:
totalprice_w_cr = totalprice_wo_cr/193;
break;}
cout<<"The meal price (in PKR) is "<<simpleprice<<", wtih quantity "<<quantity<<endl<<"The total price is "<<totalprice_w_cr<<endl;
system("pause");
return 0;
}