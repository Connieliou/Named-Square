#include "Namedsquare.h"

Namedsquare::Namedsquare(Point c, double s, std::string n): Rectangle(c, s, s), _name(n)
{
}
Namedsquare::Namedsquare(const Namedsquare & source): Rectangle(source.Rectangle::get_center(), source.get_side(),
    source.get_side()), _name(source._name)
 {

 }
double Namedsquare::get_side() const
{
 return Rectangle::get_width();
}
std::string Namedsquare:: get_name() const
{
 return _name;
}
void Namedsquare:: set_side(double s)
{
    Rectangle::set_width(s);
    Rectangle::set_length(s);
}

void Namedsquare:: set_name(std::string n)
{
    _name=n;
}

std::ostream & operator << (std::ostream & os, Namedsquare ns)
{
    os<<"["<<ns.get_lower_left()<<", "<<ns.get_upper_right()<< ", " << ns.get_name()<<"]";
    return os;
}

std::istream & operator >> (std::istream & is, Namedsquare & ns){

   Point center;
   double side;
   std::string name;
   is>>center>>side >> name;
   ns=Namedsquare(center,side, name);

    return is;
}
