class Triangle : public Polygon {
public:
    double height;
    Triangle(int X, int Y, double height);
    double Area();
    ~Triangle();
};

Triangle::Triangle(int X, int Y, double Height):Polygon(X,Y), height(height)
{
    NumbersOfSides = 3;
    Sides = new double[3];

    for (int i = 0; i < NumbersOfSides; i++)
    {
        Sides[i] = 3;
    }
}

Triangle::~Triangle()
{
    delete[] Sides;
}

double Triangle::Area()
{
    return (Sides[0]*height)/2;
}
