#include "StdAfx.h"
#include "AnimationPart.h"

CAnimationPart::CAnimationPart(void)
{
	rotation = float3(0,0,0);
	scale = float3(1,1,1);
	translation = float3(0,0,0);
	for (int x = 0; x < 3; x++)
	{
		rotationIsInterpolated[x] = false;
		translationIsInterpolated[x] = false;
		scaleIsInterpolated[x] = false;
	}

	rotationDerivativeValue = float3(0, 0, 0);
	scaleDerivativeValue = float3(1, 1, 1);
	translationDerivativeValue = float3(0, 0, 0);
	for (int x = 0; x < 3; x++)
	{
		rotationHasDerivative[x] = false;
		translationHasDerivative[x] = false;
		scaleHasDerivative[x] = false;
	}
}

CAnimationPart::~CAnimationPart(void)
{
}
