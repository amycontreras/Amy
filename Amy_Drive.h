#include "Amy_Macros.h"

void updateDriveMotors(int left, int right)
{
	motor[left_front_motor] = left;
	motor[left_back_motor] = left;
	motor[right_front_motor] = right;
	motor[right_back_motor] = right;
}


void drive()
{
	//if button is pressed
	if(halfSpeedButton)
	{
		if(abs(driveY) > abs(driveTurn) && abs(driveY) > DEADZONE)
		{
			updateDriveMotors(driveY/2, driveY/2)
		}
		else
		{
			updateDriveMotors(0, 0)
		}
	}
	else
	{
		//if button is not pressed
		if(abs(driveY) > abs(driveTurn))
		{
			if(abs(driveY) > DEADZONE)
			{
				updateDriveMotors(driveY, driveY);
			}
			else
			{
				updateDriveMotors(0, 0);
			}
		}
		else
		{
			//turn
			if(driveTurn > DEADZONE || driveTurn < -DEADZONE)
			{
				updateDriveMotors(driveTurn, -driveTurn);
			}
			else
			{
				updateDriveMotors(0, 0);
			}
		}
		if((abs(hWheel) > abs(driveY)) && (abs(hWheel) > DEADZONE))
		{
			motor[middle_motor]= hWheel;
		}
		else
		{
			motor[middle_motor]= 0;
		}
	}
}
