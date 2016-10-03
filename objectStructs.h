#ifndef OBJECTSTRUCTS_H_INCLUDED
#define OBJECTSTRUCTS_H_INCLUDED

typedef struct Camera
{
	double width;
	double height;
} Camera;


typedef struct Plane
{
	double color[3];
	double position[3];
	double normal[3];

} Plane;


typedef struct Sphere
{
	double color[3];
	double position[3];
	double radius;

} Sphere;

typedef struct Object
{
	char *type;

	union structures
	{
		Camera camera;
		Plane plane;
		Sphere sphere;

	} structures;

} Object;

#endif // OBJECTSTRUCTS_H_INCLUDED