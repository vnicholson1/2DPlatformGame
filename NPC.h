#ifndef NPC_H
#define NPC_H
#include "OBB.h"
#include "GameCharacter.h"
#include "playerCharacter.h"
#include <string>
#include <vector>

class NPC : public GameCharacter
{
public:
	bool isDead = false;
	bool deleteObj = false;


	int startingLives = 1;
	int livesLeft = 1;
	//as the NPC moves from left to right, this is to record how much the NPC does so
	float distanceTravelled;
	string colour;
	int damageInflicted = 1;
	bool jumping = false;
	bool jumpPressed = false;
	float jumpSpeed = 70.0f;

	NPC(float Xspeed, string colour, float distanceTravelled, int lives, int damageInflicted,bool jumping, float jumpSpeed);
	void updatePlayerMovement(double dt);
	void typeOfCollision(PlayerCharacter &p, double dt);
	void resetCharacter();
	~NPC();

};
#endif

