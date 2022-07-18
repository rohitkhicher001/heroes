#include <bits/stdc++.h>
using namespace std;

void items()
{
	cout<<"1. health(+2) : 100 coins"<<endl;
	cout<<"2. levelup(+1 level) : 1000 coins"<<endl;
	cout<<"3. levelup(+2 level) : 2000 coins"<<endl;
}
void warning()
{
	cout<<"Unsufficient balance"<<endl;
}
void invalid()
{
	cout<<"invalid input"<<endl;
}
void setLevel(int &n,Characters &obj)
{
    obj.level +=n;
}
void setHealth(int &n,Characters &obj)
{
    obj.health +=n;
}

void shopping(int &coins,Characters &obj)
{
	items();
	int n;
	cin>>n;
	if(n == 1)
	{
		if(coins-100 >= 0)
		{
			coins = coins - 100;
			//setHealth(2,obj);
			obj.health +=2;
		}
		else
		{
			warning();
		}

	}
	else if(n == 2)
	{
		if(coins-1000>=0)
		{
			coins = coins - 1000;
			//setLevel(1,obj);
			 obj.level +=1;
		}
		else
		{
			warning();
		}
	}
	else if(n == 3)
	{
		if(coins-2000 >= 0)
		{
		coins = coins - 2000;
        //setLevel(2,obj);
 obj.level +=2;
		}
		else
		{
			warning();
		}
	}
	else
	{
		invalid();
	}

}
