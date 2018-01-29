#ifndef CONSTANTS
#define CONSTANTS


#define MAX_SPEED 22	//22m/s ~ 49.2MPH
// Maximum acceleration, from https://en.wikipedia.org/wiki/Nissan_Sentra
#define MAX_ACCEL 4	// 0-60MPH in 6.7 seconds = 4m/s^2

// Maximum deacceleration, from https://en.wikipedia.org/wiki/Braking_distance
#define MAX_DEACCEL 6.8	//	0.7*9.81m/s*s
#define SKID_LENGHT MAX_SPEED*MAX_SPEED/(0.7*9.81)	//	~70m Full stop going at 22m/s

//Smallest acceptable distance to front car
#define SAFE_DISTANCE 20
// Smallest distance to attempt a lane change
#define SAFE_DISTANCE_LANE_CHANGE SAFE_DISTANCE + 20

#endif