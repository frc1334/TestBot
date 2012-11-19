#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/TankDriveCommand.h"
#include "CommandBase.h"

class CommandBasedRobot : public IterativeRobot
{
private:
	Command *autonomousCommand;
	
	virtual void RobotInit()
	{
		//Create new Command for autonomous
		CommandBase::init();
		autonomousCommand = new TankDriveCommand();
	}
	
	virtual void AutonomousInit()
	{
		//Start Autonomous
		autonomousCommand->Start();
	}
	
	virtual void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		autonomousCommand->Cancel();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

