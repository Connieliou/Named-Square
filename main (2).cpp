#include <iostream>
#include "namedsquare.h"

using namespace std;

int main()
{

      Namedsquare s1(Point(1, 2), 3, "Washington");
      Namedsquare s2(Point(0, 0), 2, "Rittenhouse");
      Namedsquare s3(s1);

      cout << s2 << endl;
      cout << s3 << endl;
      cout << s1.get_center() << endl;
      cout << s1.get_side() << endl;
      cout << s1.get_name() << endl;
      cout << s1.get_area() << endl;
      cout << s1.get_perimeter() << endl;
      cout << s1.get_lower_left() << endl;
      cout << s1.get_upper_right() << endl;

      Namedsquare s4;
      cout << "Enter a named square (center, side, name): "; // Enter -3 1 4 Times
      cin >> s4;
      cout << s4 << endl;

      s4.set_center(Point(-2, -3));
      s4.set_side(1);
      s4.set_name("Tiananman");
      cout << s4 << endl;

std::ostream & operator << (std::ostream & os, Namedsquare ns);
std::istream & operator >> (std::istream & is, Namedsquare & ns);
      return 0;
    }





