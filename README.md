# CS430_Project2
// Charles Beck
// CS 430
// 10/4/16
// PROJECT 2: RAYCASTER
// ==================================================================================
/* 	   
	   This program reads in five arguments from the comand line in the order of :
		
		program_name width height output.ppm input.json
   
	   The program will then read in the arguments and store the data where necessary.
   Then the program will parse the deisred JSON file while error checking for a 
   well made and valid JSON file. After the program gets through parsing, the data
   is stored into structures that will allow the program to test intersections of pixels 
   with a ray that is constructed and shot at every pixel in the scene. The program will
   store the intersection data and then write it to a P3 ppm file format with color. 
*/  
// ==================================================================================
