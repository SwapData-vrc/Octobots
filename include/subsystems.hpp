#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');


inline pros::Motor Processer(-12);
inline pros::Motor Intake(-13);

inline pros::ADIDigitalOut IntakePiston('H');
inline pros::ADIDigitalOut OuttakePiston('A');
inline pros::Motor Outtake(10);