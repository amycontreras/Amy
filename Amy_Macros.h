int DEADZONE = 15;

//drive
int driveY = 0;
int driveTurn = 0;
int hWheel = 0;
int halfSpeedButton = 0;
//lift
int liftY = 0;
int liftHalfSpeedButton = 0;


void updateOI()
{
	//drive
	driveY = vexRT[Ch2];
	driveTurn = vexRT[Ch4];
	halfSpeedButton = vexRT[Btn7U];
	hWheel = vexRT[Ch1];
	//lift
	liftY = vexRT[Ch3];
	liftHalfSpeedButton = vexRT[Btn7D];
}
