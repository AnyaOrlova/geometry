#ifndef GEOMETRY_H
#define GEOMETRY_H

int calculating_circles(int n, float* circles_radius, float* all_circles);
int intersection_circles(int n, float* all_circles, float* circles_radius);
int input_circles();
void mfree(float* all_circles, float* circles_radius);

#endif
