#include <iostream>
#include <cmath>
using namespace std;
class CircleType
{
private:
int iRadius;
int iXc, iYc;
public:
CircleType();
CircleType(int, int, int);
void fnSetRadius(int);
void fnShowDetails();
friend void fnCheckCircles(CircleType, CircleType);
};
CircleType :: CircleType()
//point circle
{
iRadius = iXc = iYc = 0;
}
CircleType :: CircleType(int r, int x, int y)
{
iRadius = r;
iXc = x;
iYc = y;
}
void CircleType :: fnShowDetails()
{
cout << "\nRadius : " << iRadius;
cout << "\nXcenter : " << iXc;
cout << "\nYcenter : " << iYc;
}
void fnCheckCircles(CircleType c1, CircleType c2)
{
double dDist;
dDist = sqrt(((c2.iXc - c1.iXc)*(c2.iXc - c1.iXc) + (c2.iYc - c1.iYc)*(c2.iY
if (dDist == c1.iRadius + c2.iRadius)
cout << "\nTwo circles touch each other" << endl;
else if (dDist < c1.iRadius + c2.iRadius)
cout << "\nTwo circles intersect one another" << endl;
else
cout << "\nTwo circles are disjoint" << endl;
}
int main(void)
{
CircleType c1(5,10,0), c2(5,0,0), c3(5,12,0);
fnCheckCircles(c1,c2);
//touch
fnCheckCircles(c1,c3);
//intersect
fnCheckCircles(c2,c3);
//disjoint
return 0;
}
