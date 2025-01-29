// A surface is a 3D object that renders between a closed loop of lines

// Due to the complexity of rendering a 3D curved object, more modifiers/contraints may need to be created to help define how a surface will be drawn

// A surface requires all lines intersections to be planar

#pragma once
#include "Line.h"

enum SurfaceType {
	Geometric, // surface between a set of lines
	Construction, // surface used for applying modifiers without actually being part of rendered geometry
	NullFill // Defines a space where a Surface is not allowed to be generated
};

class Surface{
private:
	Line lines; // a list of all the lines utilised by a Surface
	int TargetResolution; // how many triangles the surface should aim to include
	// Vertice Vertices[] // an array of all the vertices controlled by a surface, regenerated if line is modified or due to LevelOfDetail
	// Edge Edges[] // an array of all the edges controlled by the surface, regenerated if the line is modified or due to LevelOfDetail
public:

};