#include <iostream>
#include <string>
using namespace std;
double powerCalc(Characters obj1)
{
	double power1=0;
if(obj1.height>15)
	{
		if(obj1.weight>15)
		{
			power1 = obj1.level*1.25*(obj1.height*1.5+obj1.weight*1.5);
		}
		else if(obj1.weight>10&&obj1.weight<=15)
		{
			power1 = obj1.level*1.25*(obj1.height*1.5+obj1.weight*1);

		}
		else
		{
			power1 = obj1.level*1.25*(obj1.height*1.5+obj1.weight*1.5);
		}
	}
	else if(obj1.height>10&&obj1.weight<=15)
	{
		if(obj1.weight>15)
		{
			power1 = obj1.level*1.25*(obj1.height*1.5+obj1.weight*1.5);
		}
		else if(obj1.weight>10&&obj1.weight<=15)
		{
			power1 = obj1.level*1.25*(obj1.height*1.5+obj1.weight*1);

		}
		else
		{
			power1 = obj1.level*1.25*(obj1.height*1.5+obj1.weight*1.5);
		}
	}
	else
	{
		if(obj1.weight>15)
		{
			power1 = obj1.level*1.25*(obj1.height*1.5+obj1.weight*1.5);
		}
		else if(obj1.weight>10&&obj1.weight<=15)
		{
			power1 = obj1.level*1.25*(obj1.height*1.5+obj1.weight*1);

		}
		else
		{
			power1 = obj1.level*1.25*(obj1.height*1.5+obj1.weight*1.5);
		}
	}
	return power1;
}

int calc_power(Characters obj1,Characters obj2,int coins)
{
	double power1=powerCalc(obj1)+(obj1.health/10.00);
	double power2=powerCalc(obj2)+(obj2.health/10.00);
	if(obj1.strength == obj2.skill)
	{
		power1 = power1 * 1.5;
	}
	else if(obj1.weakness == obj2.skill)
	{
		power2 = power2 * 1.5;
	}
	if(power1 > power2)
	{
		cout<<"You win"<<endl;
		//cout<<power1 - power2;
		coins += 500;
	}
	else if(power2 > power1)
	{
		cout<<"You lost"<<endl;
		//cout<<power2-power1<<endl;
	}
	else
	{
		cout<<"Draw"<<endl;
	}
	return coins;
}



