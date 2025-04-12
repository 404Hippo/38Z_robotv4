#include "main.h"

//motors
pros::Motor intake(-8, pros::v5::MotorGears::blue);
pros::MotorGroup wallstake({-19, -18}, pros::v5::MotorGears::green, pros::v5::MotorUnits::counts);


//pneumatics
pros::adi::Pneumatics clamp1('H', false);
pros::adi::Pneumatics doinker('G', false);

pros::Rotation rotationsensor(20);