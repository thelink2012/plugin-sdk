/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"
class CPlaneTrails
{
public:
	static void Update(void);
	static void RegisterPoint(CVector pos, uint32_t trailIndex);
};