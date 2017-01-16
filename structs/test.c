#include <stdio.h>  //Standard Lib
#include <assert.h> //Access to Assert Function
#include <stdlib.h>
#include <string.h>

struct Car {
    char *name;
    int topSpeed;
    int numWheels;
    int weight;
};

struct Car *Car_create(char *name, int topSpeed, int numWheels, int weight){

	struct Car *which = malloc(sizeof(struct Car));
	assert(which != NULL);

	which->name = strup(name);
	which->topSpeed = topSpeed;
	which->numWheels = numWheels;
	which->weight = weight;

	return which;
}
