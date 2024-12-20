#ifndef SPECIALIZATION;
#define SPECIALIZATION;
#include <string>

// Fighter: start - 35 HP / 10 Damage
// Thief : start - 30 HP / 2 Damage
// Mage : start - 28 HP / 2 Damage

enum Specs {
	WARRIOR,
	THEIF,
	MAGE
};

class Specialization {
private:
	Specs spec;
	std::string name;
	int baseHealth;
	int baseMana;
	int baseStrength;
	int baseAgility;
	int baseIntelligence;
public:
	Specialization(Specs spec, std::string name, int baseHealth, int baseMana, int baseStrength, int baseAgility, int baseIntelligence);
};

#endif

