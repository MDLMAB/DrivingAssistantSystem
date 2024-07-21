// Copyright Epic Games, Inc. All Rights Reserved.

#include "DrivingSimulatorWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

UDrivingSimulatorWheelRear::UDrivingSimulatorWheelRear()
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = true;
	SteerAngle = 0.f;
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS
