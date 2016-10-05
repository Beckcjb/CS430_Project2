# CS430_Project2
// Charles Beck
// CS 430
// 10/4/16
// PROJECT 2: RAYCASTER
// =================================================================================
/* 	   
	   This program reads in five arguments from the comand line in the order of :
		
		program_name width height output.ppm input.json
   
   The program will then read in the arguments and store the data where necessary.
   Then the program will parse the deisred JSON file while error checking for a 
   well made and valid JSON file. After the program gets through parsing, the data
   is stored into structures that will allow the program to test intersections of pixels 
   with a ray that is constructed and shot at every pixel in the scene. The program will
   store the intersection data and then write it to a P3 ppm file format with color. 

   The program will print out only a P3 file, I could not get the P6 file print working
   as it was not returing coor values at all. The only ppm file allowed is the P3 format.
   
   The objectsStructs.h header file defines the stuructures and unions used to create 
   the objects from the parsed JSON data.
   
   The vector_math.h header file is for the modularity of vector math fucntions and 
   can be used for later projects as neccesary. 
   
// ================================================================================
