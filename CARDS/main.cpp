#include <bits/stdc++.h>
#define pb push_back

#include "classes\All_characters.cpp"
#include "display/calcPower.cpp"
#include "display/shop.cpp"
#include "display/countCalc.cpp"
using namespace std;

void options_input(int &options)
{
int n;
cout<<"1. shop 2. next match 3. exit"<<endl;
cin>>n;
options = n;
}

int main()
{


	cout<<"choose your hero: 1. Firestorm 2. Breeze 3. Hydroman 4. Boulder"<<endl;

	int hero,coins = 1000;
	cin>>hero;
	vector<string> v = {"Firestorm","Breeze","Hydroman","Boulder"};

    cout<<"Your hero is: "<<v[hero-1]<<endl;

	cout<<"Coins : "<<coins<<endl;
	int count =0;
	Characters c;
   Firestorm f;
   Breeze b;
	Hydroman h;
   Boulder bd;

vector<Characters> characters_array = {f,b,h,bd};
Firestorm player;
player = characters_array[hero-1];
while(true)
{

        if((count >= 3) && (count%3==0))
        {
            for(int i=0;i<4;i++)
            {
                characters_array[i].level++;
            }



    cout<<"Your opponent is: ";
	srand(time(NULL));
	int opponent = rand()%4;
	cout<<v[opponent] <<endl;
int options;
options_input(options);

if(options == 1)
{
    shopping(coins,player);
    cout<<"Coins : "<<coins<<" "<<"Level : "<<player.level<<endl;
}
if(options == 3)
{
    cout<<"Game finished"<<endl;
    return 0;
}
c.display_character(player);
c.display_character(characters_array[opponent]);
coins = calc_power(player,characters_array[opponent],coins);
cout<<"Coins : "<<coins;
count++;
}
    return 0;
}
