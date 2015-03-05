#include "Amy_Macros.h"

void updateLiftMotors(int motorValue)
{
	motor[top_left_lift_motor] = motorValue;
	motor[bottom_left_lift_motor] = motorValue;
	motor[top_right_lift_motor] = motorValue;
	motor[bottom_right_lift_motor] = motorValue;
}

void lift()
{
	if(liftHalfSpeedButton)
	{
		if((abs(liftY) > abs(driveTurn)) && (abs(liftY) > DEADZONE))
		{
			updateLiftMotors(liftY/2);
		}
		else
		{
			updateLiftMotors(0);
		}
	}
	//if button is not pressed
	else
	{
		if((abs(liftY) > abs(driveTurn)) && (abs(liftY) > DEADZONE))
		{
			updateLiftMotors(liftY);
		}
		else
		{
			updateLiftMotors(0);
		}
	}
}
