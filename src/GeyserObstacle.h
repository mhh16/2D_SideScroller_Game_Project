#pragma once

#include "Obstacle.h"

/*
 * This is a specific game obstacle that extends
 * the Obstacle abstract class
 *
 * This obstacle is a lava geyser, that the player
 * must dodge or else they will incinerate
 */
class GeyserObstacle : public Obstacle {
public:

	/*
	 * Constructor
	 */
	GeyserObstacle(GameWindow* window);

	/*
	 * This method is responsible for creating lava geyser
	 */
	virtual void generateObstacle();

	/*
	 * Draws the lava geyser. Also handles all of the different stages.
	 */
	virtual void draw(Graphics& graphics);

	/*
	 * Handles collisions
	 */
	virtual void handleCollision(Player* player);

	/*
	 * Destructor
	 */
	virtual ~GeyserObstacle();

	virtual int ObstacleID();

private:

	/*
	 * The stage of the obstacle
	 */
	int stage;

	/*
	 * The ticks
	 */
	int ticks;

	/*
	 * The total stages
	 */
	int totalStages;

	/*
	 * If obstacle is launching
	 */
	bool launching;




};
