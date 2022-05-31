class Rectangle : public Polygon
{
private:
    double Side;
public:
    Rectangle(int X, int Y, double Side);
    ~Rectangle();
    double Area();
};

Rectangle::Rectangle(int X, int Y, double Side):Polygon(X,Y)
{
    this->Side = Side;
    NumbersOfSides = 4;
    Sides = new double[4];

    for (int i = 0; i < 4; i++)
    {
        Sides[i] = Side;
    }
}

Rectangle::~Rectangle()
{
    //delete[] Sides;
}

double Rectangle::Area()
{
    return Side*Side;
}