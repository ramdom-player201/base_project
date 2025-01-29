// A line defines a line in 3D space that connects two points

#pragma once
#include "Point.h"

enum LineMode{
	Linear, // straight line between two points
	Bezier // curved line between two points, and with two control points
};

enum LineType {
	Geometric, // used to define the edges of a geometric shape
	Construction, // used to link components of geometry without being used to generate Surfaces
	Undefined // undefined, extend line type as needed
};

class Line {
private:
	Point Point0; // start pos of line
	Point Point1; // end pos of line
	// Vector3 ControlVector0 // a 3D vector defining the direction and magnitude of a control point from the start point (Bezier only)
	// Vector3 ControlVector1 // a 3D vector defining the direction and magnitude of a control point from the end point (Bezier only)
	int TargetResolution; // how many vertices the line should use if a curve
	// Vertice Vertices[] // an array of all the vertices controlled by a line, regenerated if line is modified or due to LevelOfDetail
	// Edge Edges[] // an array of all the edges controlled by the line, regenerated if the line is modified or due to LevelOfDetail
public:

};