
#ifndef OBJECTSTRUCTS_H_INCLUDED
#define OBJECTSTRUCTS_H_INCLUDED
// object Camer struct 
typedef struct Camera
{
	double width;
	double height;
} Camera;

// object plane struct
typedef struct Plane
{
	double color[3];
	double position[3];
	double normal[3];

} Plane;

// object sphere struct
typedef struct Sphere
{
	double color[3];
	double position[3];
	double radius;

} Sphere;
// objects union
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

#endif // OBJECSTRUCTS_H_INCLUDED