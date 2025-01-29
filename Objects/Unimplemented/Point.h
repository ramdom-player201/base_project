// A Point is a point in 3D space

// A point has an absolute position (read-only)
// A point has a relative position (mutable)

// The absolute position defines where the point is in 3D global space
// The relative position defines where the point is relative to the linked origin

// Origin mechanics are yet to be defined
// The origin exists primarily as a counter to floating-point errors.
// The relative position is only used for rendering where extra precision is needed.

// a point can also have a rotation, this is required to ensure that rotating a selection of points can update the controlVectors used by lines.

#pragma once

class Point {
private:
	// Vector3 AbsPosition;
	// CFrame RelPosition;
public:

};