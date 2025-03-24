#include "main.h"

//motors
pros::Motor intake(10, pros::v5::MotorGears::green);
pros::Motor conveyor(-8, pros::v5::MotorGears::blue);
pros::Motor wallstake(-19, pros::v5::MotorGears::green, pros::v5::MotorUnits::counts);

//pneumatics
pros::adi::Pneumatics clamp1('H', false);
pros::adi::Pneumatics doinker('G', false);

pros::Rotation rotationsensor(20);