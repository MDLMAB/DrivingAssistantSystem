// Copyright Epic Games, Inc. All Rights Reserved.

#include "DrivingSimulatorWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

UDrivingSimulatorWheelFront::UDrivingSimulatorWheelFront()
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = false;
	SteerAngle = 50.f;
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS

