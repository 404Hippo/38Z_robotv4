#pragma once

#include "EZ-Template/drive/drive.hpp"

extern Drive chassis;

// test autons
void test();

// match autons
void blueAWP();
void redAWP();
void blueleft();
void blueright();
void redleft();
void redright();

// elim autons
void blueleftelim();
void bluerightelim();
void redleftelim();
void redrightelim();

// skills autons
void skills();

// tuner autons
void drive_48();
void drive_96();
void driveBack_48();
void driveBack_96();
void turn_90();
void turn_180();
void turn_360();
void turnBack();


void default_constants();


/*
void drive_example();
void turn_example();
void drive_and_turn();
void wait_until_change_speed();
void swing_example();
void motion_chaining();
void combining_movements();
void interfered_example();
void odom_drive_example();
void odom_pure_pursuit_example();
void odom_pure_pursuit_wait_until_example();
void odom_boomerang_example();
void odom_boomerang_injected_pure_pursuit_example();
void measure_offsets();
*/