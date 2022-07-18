#include <bits/stdc++.h>
// #include "../display/display_characters.cpp"
using namespace std;

class Characters{
    public:
    string name;
    int height;
    int weight;
    string skill;
    int level;
    string strength;
    string weakness;
    int health;

    void display_character(Characters obj);
};


void Characters:: display_character(Characters obj)
{
	cout<<obj.name<<" "<<obj.height<<" "<<obj.weight<<" "<<obj.skill<<" "<<obj.level<<" "<<obj.strength<<" "<<obj.weakness<<" "<<obj.health;
cout<<endl;
}
