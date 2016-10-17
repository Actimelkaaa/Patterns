#include <iostream>
#include <string>
using namespace std;

class Unit 
{
public:
	int attack;
	int hp;
	int armor;
	virtual string createMe() = 0;
	virtual ~Unit() {}
};

class Mage : public Unit 
{
public:
	string createMe()
	{
		attack = 27;
		hp = 10;
		armor = 0;
		return "Mage";
	}
};

class Fighter : public Unit 
{
public:
	string createMe()
	{ 
		attack = 20;
		hp = 20;
		armor = 3;
		return "Fighter";
	}
};

class Rogue : public Unit
{
public:
	string createMe()
	{ 
		attack = 30;
		hp = 14;
		armor = 1;
		return "Rogue";
	}
};


class Creator
{
public:
	virtual Unit* factoryMethod() = 0;
};

class MageCreator : public Creator
{
public:
	Unit* factoryMethod()
	{ 
		return new Mage(); 
	}
};

class FighterCreator : public Creator
{
public:
	Unit* factoryMethod()
	{
		return new Fighter();
	}
};

class RogueCreator : public Creator 
{
public:
	Unit* factoryMethod()
	{ 
		return new Rogue();
	}
};