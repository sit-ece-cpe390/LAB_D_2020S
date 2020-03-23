#include <cstdint>
#include <math.h>

/*
 * This function converts degrees to radians.
 * The compiler could pre-compute constants during compilation.
 * As a result, the program contains fewer arithmetic instructions.
 * Rewrite the code to take advantage this optimization.
*/
double deg2rad(uint32_t n) {
    const double x = 0.001;
    double y = 1;
    for (uint32_t i = 0; i < n; i++) {
        y = y * x * M_PI / 180;
    }
    return y;
}

/*
 * This function is a simulation of dynamics.
 * It evolves the movement under gravity.
 * This code has low efficiency due to unnecessary operations.
 * Rewrite the code to minimize the number of executed instructions.
*/

double grav(uint32_t n) {
    constexpr double G = 6.6742E-11; // universal gravitational constant
    double x = 0;                    // one dimensional problem. Start at x = 0
    double v = 0;                    // velocity = 0 to start
    double r = 1.5e12;               // distance apart
    const double m1 = 5.972e24;      // earth mass
    const double m2 = 7.34767309e22; // moon mass
    constexpr double dt = 0.1;       // 0.1 second timestep
    for (uint32_t i = 0; i < n; i++) {
        double F = G * m1 * m2 / (r * r);
        double a = F / m1;
        x = x + v * dt + 0.5 * a * dt * dt;
        v = v + a * dt;
    }
    return x;
}