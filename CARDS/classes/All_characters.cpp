#include <iostream>
#include <string.h>
#include "characters.cpp"
using namespace std;

class Firestorm : public Characters{
    public:
    Firestorm()
    {
    	this->name = "firestorm";
    	this->height = 16;
    	this->weight = 17;
    	this->skill = "fire";
    	this->level = 1;
    	this->strength = "wind";
    	this->weakness = "water";
    	this->health = 20;
    }
    Firestorm(const Characters& p1)
    {
        name = p1.name;
        height = p1.height;
        weight = p1.weight;
        skill = p1.skill;
        level = p1.level;
        strength = p1.strength;
        weakness = p1.weakness;
        health = p1.health;
    }
};
class Breeze: public Characters{
    public:
    Breeze()
    {
    	this->name = "breeze";
    	this->height = 13;
    	this->weight = 10;
    	this->skill = "wind";
    	this->level = 1;
    	this->strength = "earth";
    	this->weakness = "fire";
    	this->health = 20;
    }
    Breeze(const Characters& p1)
    {
        name = p1.name;
        height = p1.height;
        weight = p1.weight;
        skill = p1.skill;
        level = p1.level;
        strength = p1.strength;
        weakness = p1.weakness;
        health = p1.health;
    }

};
class Hydroman: public Characters{
    public:
    Hydroman()
    {
    	this->name = "hydroman";
    	this->height = 15;
    	this->weight = 15;
    	this->skill = "water";
    	this->level = 1;
    	this->strength = "air";
    	this->weakness = "earth";
    	this->health = 20;
    }
    Hydroman(const Characters& p1)
    {
        name = p1.name;
        height = p1.height;
        weight = p1.weight;
        skill = p1.skill;
        level = p1.level;
        strength = p1.strength;
        weakness = p1.weakness;
        health = p1.health;
    }

};
class Boulder: public Characters{
    public:
    Boulder()
    {
    	this->name = "boulder";
    	this->height = 18;
    	this->weight = 20;
    	this->skill = "earth";
    	this->level = 1;
    	this->strength = "fire";
    	this->weakness = "air";
    	this->health = 20;
    }
    Boulder(const Characters& p1)
    {
        name = p1.name;
        height = p1.height;
        weight = p1.weight;
        skill = p1.skill;
        level = p1.level;
        strength = p1.strength;
        weakness = p1.weakness;
        health = p1.health;
    }
};
