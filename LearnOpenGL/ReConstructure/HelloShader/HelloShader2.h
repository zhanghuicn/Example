#pragma once
#include "HelloShader.h"
class HelloShader2 :
	public HelloShader
{
protected:
	virtual	bool CreateVertexShader();
	virtual	bool CreateFragmentShader();

public:
	virtual	void BindVertexData();
	virtual void Render();
};
