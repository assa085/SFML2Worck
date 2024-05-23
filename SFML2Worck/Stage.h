#pragma once
#include "GeometricObject.h"
#include "Animation.h"
class Stage
{
	
public:
	void Start();
	void SetAnimation(Animation* ani);
	void SetGeometri(GeometricObject* geo);
	void SetAnimationInGeometri(Animation* ani);

private:
	void x0();
	void x1();
	Animation* animation;
	GeometricObject* geometri;
};

