#include <stdio.h>
#include <math.h>
#include "elp2000-82b.h"

int main (void);

/*-----------------------------------------------------------------*/
/* main program */
/*-----------------------------------------------------------------*/
int main(void)
{
    double t = 0.0;

    cartesian_3d_point XYZ = geocentric_moon_position_cartesian (t);
    printf("%s :\n", "XYZ");
    printf("\t%23.16E\n", XYZ.x);
    printf("\t%23.16E\n", XYZ.y);
    printf("\t%23.16E\n", XYZ.z);
    printf("\n");
    spherical_point LBR = geocentric_moon_position (t);
    printf("%s :\n", "LBR");
    printf("\t%23.16E\n", LBR.longitude);
    printf("\t%23.16E\n", LBR.latitude);
    printf("\t%23.16E\n", LBR.distance);
    printf("\n");

    return 0;
}
