#include "Orcs.h"

Orcs::Orcs() {
	this->boost = 2;
	this->SetHealth(this->GetHealth() * boost);
	this->SetDamage(this->GetDamage() * boost);
	this->SetArmor(this->GetArmor() / (boost + 1));
	this->SetValue("O");
}

Orcs::~Orcs() {

}

void Orcs::SetBoost(int boost) {
	this->boost = boost;
	this->SetHealth(this->GetHealth() * boost);
	this->SetDamage(this->GetDamage() * boost);
	this->SetArmor(this->GetArmor() / (boost + 1));
}

//------------------------------------

Devourers::Devourers() : Orcs() {
	this->percent = 0.5;
	this->SetValue("OD");
	this->counter = 0;
}

Devourers::~Devourers() {

}

int Devourers::GetCounter() {
	return counter;
}

void Devourers::SetCounter(int counter) {
	this->counter = counter;
}

//------------------------------------

Robbers::Robbers() : Orcs() {
	this->around = 1;
	this->SetValue("OR");
	this->counter = 0;
}

Robbers::~Robbers() {

}

int Robbers::GetCounter() {
	return counter;
}

void Robbers::SetCounter(int counter) {
	this->counter = counter;
}
