#ifndef CONSTANTS
#define CONSTANTS


#define MAX_SPEED 22	//22m/s ~ 49.2MPH
// Maximum acceleration, from https://en.wikipedia.org/wiki/Nissan_Sentra
#define MAX_ACCEL 4	// 0-60MPH in 6.7 seconds = 4m/s^2

// Maximum deacceleration, from https://en.wikipedia.org/wiki/Braking_distance
#define MAX_DEACCEL 6.8	//	0.7*9.81m/s*s
// Minimum distance to full stop
#define SKID_LENGHT MAX_SPEED*MAX_SPEED/(0.7*9.81)	//	~70m Full stop going at 22m/s

//Smallest acceptable distance to front car
#define SAFE_DISTANCE 20
// Smallest distance to attempt a lane change
#define SAFE_DISTANCE_LANE_CHANGE SAFE_DISTANCE + 20
//Smallest frontal clearance (from obstructing car) to do a lane change
#define WORTH_CHANGE_DISTANCE 40
// Smallest backward distance to attempt lane change
#define SAFE_BACK_DISTANCE 0.65* SAFE_DISTANCE

#endif