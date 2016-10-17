#include <iostream>

class MainHero
{
public:
	static MainHero* getStat() 
	{
		if (!currStat)
			currStat = new MainHero();
		cout << "ActimelkA here";
		return currStat;
	}
private:
	int attack;
	int hp;
	int armor;
	static MainHero* currStat;
	MainHero() 
	{
		attack = 13;
		hp = 30;
		armor = 2;
		cout << "i'm created!";
	}
	MainHero(const MainHero&);
	MainHero& operator=(MainHero&);
};
