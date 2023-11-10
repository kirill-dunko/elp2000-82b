#include <iostream>
#include <iomanip>

extern "C" {
#include "elp2000-82b.h"
}

int main ()
{
    double t = 0.0;

    cartesian_3d_point XYZ = geocentric_moon_position_cartesian (t);

    std::cout << std::scientific << std::setprecision (16);
    std::cout << "XYZ : " << "\n";

    std:: cout << std::setw(31) << XYZ.x << "\n";
    std:: cout << std::setw(31) << XYZ.y << "\n";
    std:: cout << std::setw(31) << XYZ.z << "\n";

    spherical_point LBR = geocentric_moon_position (t);

    std::cout << "LBR : " << "\n";
    std:: cout << std::setw(31) << LBR.longitude << "\n";
    std:: cout << std::setw(31) << LBR.latitude << "\n";
    std:: cout << std::setw(31) << LBR.distance << "\n";

    return 0;
}
