// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 5 Question 1



// Original
double triangle_area(double base, height) 
double product;
{
	product = base * height;
	return product / 2;
}


// Corrected
double triangle_area(double base, double height) 
{
	double product; // initialize not withing function
	product = base * height;
	return product / 2;
}