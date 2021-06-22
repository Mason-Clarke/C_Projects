#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triangle.h"
#define M_PI 3.14159265358979323846

double findOppositePyth(double adj, double hyp, double x, double y)
{
	double opposite = sqrt(pow(hyp,2)-pow(adj,2));
	printTriangle(opposite, adj, hyp, x, y);
	return opposite;
}

double findAdjacentPyth(double opp, double hyp, double x, double y)
{
	double adjacent = sqrt(pow(hyp,2)-pow(opp,2));
	printTriangle(opp, adjacent, hyp, x, y);
	return adjacent;
}

double findHypotenusePyth(double opp, double adj, double x, double y)
{
	double hypotenuse = sqrt(pow(opp,2) + pow(adj,2));
	printTriangle(opp, adj, hypotenuse, x, y);
	return hypotenuse;
}

double findOppositeTrig(double adj, double hyp, double x, double y)
{
	double yRad = (y * M_PI)/180;
	double opposite = cos(y)*hyp;
	printTriangle(opposite, adj, hyp, x, y);
	return opposite;
}

double findAdjacentTrig(double opp, double hyp, double x, double y)
{
	double yRad = (y * M_PI)/180;
	double adjacent = cos(x)*hyp;
	printTriangle(opp, adjacent, hyp, x, y);
	return adjacent;
}

double findHypotenuseTrig(double opp, double adj, double x, double y)
{
	double xRad = (x * M_PI)/180;
	double hypotenuse = opp/sin(x);
	printTriangle(opp, adj, hypotenuse, x, y);
	return hypotenuse;
}

void printTriangle(double opp, double adj, double hyp, double x, double y)
{
	printf("\nopposite = %.2lf\nadjacent = %.2lf\nhypotenuse = %.2lf\nx = %.2lf\ny = %.2lf\n\n", opp, adj, hyp, x, y);
}
