#include<iostream>
#include<time.h>
#include<iomanip>
#include<conio.h>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
for(int i=0;i<80;i++)
         cout<<"-";
for(int i=0;i<2;i++)
{
        for(int j=0;j<80;j++)
             cout<<" ";
             cout<<endl;}
                      
 for(int i=0;i<20;i++)
 cout<<" ";
 cout<<"WELCOME TO THE WHEEL OF FORTUNE"<<endl; 
 for(int i=0;i<2;i++)
{
        for(int j=0;j<80;j++)
             cout<<" ";
             cout<<endl;}
         
 for(int i=0;i<80;i++)
         cout<<"-";   
         
         
 string a;     
cout<<"enter your name : ";
cin>>a;

cout<<"enter the amount you want to deposit : ";
double b;
cin>>b;
 
 system("cls");



for(int i=0;i<80;i++)
         cout<<"-";
for(int i=0;i<2;i++)
{
        for(int j=0;j<80;j++)
             cout<<" ";
             cout<<endl;}
 cout<<"rules :"<<endl;
 cout<<"(1) you should enter a number from 1 to 10\n";
 cout<<"(2)if you win u will get amount  10 times of your enterd amount\n";
 cout<<"(3)if u lose you will lose your betting amout and it will not be recovered\n";
for(int i=0;i<2;i++)
{
        for(int j=0;j<80;j++)
             cout<<" ";
             cout<<endl;}
 for(int i=0;i<80;i++)
         cout<<"-";
         
            
char w;
 do
 {
 cout<<a<<" :  "<<"enter the amount you want to bet : ";
 double n;
 cin>>n;  
 if(n>b)
{while(n>b)
{cout<<"again enter the amount as you have entered greater amount than you have\n";
 cin>>n;}}
double l=b-n;
cout<<a<<" : "<<"you are left with  "<<l<<"Rs "<<endl;

system("cls");



for(int i=0;i<80;i++)
         cout<<"-";
for(int i=0;i<2;i++)
{
        for(int j=0;j<80;j++)
             cout<<" ";
             cout<<endl;}            
 for(int i=0;i<20;i++)
 cout<<" ";
 cout<<"WELCOME TO THE WHEEL OF FORTUNE"<<endl;
 for(int i=0;i<2;i++)
{
        for(int j=0;j<80;j++)
             cout<<" ";
             cout<<endl;}
 for(int i=0;i<80;i++)
         cout<<"-";   
 
srand(time(NULL));
int e=rand()%10+1;

int g;
cout<<"the game has started \n";
cout<<"enter your number : ";
cin>>g;
if(g==e)
{cout<<"congratulations you have won !!!!!!!!!!!!!!!";
l=n*10;
cout<<"your new balance that you have bet is : "<<l<<endl;}

else
{
    cout<<"sorry !!!!!!!!!!!!!!!"<<endl<<endl;
    cout<<"you have lost your "<<n<<" Rs"<<endl;
    cout<<"your entered number was "<<g<<" and the winning number was "<<e<<" "<<endl<<endl;}
if(l==0)
     {cout<<"you have lost all your money\n";
    cout<<"better luck next time\n";
    system("pause");
    return 0;}
    
    else
    {cout<<"you are left with "<<l<<" Rs"<<endl;
    b=l;}
    cout<<"do you want yo play again(y/n)";                
                 cin>>w;
                }
                while(w=='y');
                
    system("pause");
    return 0;
}
