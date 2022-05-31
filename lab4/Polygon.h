class Polygon
{
protected:
    int NumbersOfSides;
    double* Sides;
    int X, Y;
public:
    Polygon();
    Polygon(int X, int Y);
    Polygon(int NumberOfSides, int X, int Y);
    double Perimeter();
    ~Polygon();
};


Polygon::Polygon()
{
}

Polygon::Polygon(int X, int Y)
{
    this->X = X;
    this->Y = Y;
}

Polygon::Polygon(int NumbersOfSides, int X, int Y)
{
    this->X = X;
    this->Y = Y;
    this->NumbersOfSides = NumbersOfSides;
    Sides = new double[NumbersOfSides];

    for (int i = 0; i < NumbersOfSides; i++)
    {
        std::cout << "Podaj dlugość boku nr \t" << i + 1 << std::endl;
        std::cin >> Sides[i];
    }
}

double Polygon::Perimeter()
{
    double Perim = 0;
    for (int i = 0; i < NumbersOfSides; i++)
    {
        Perim += Sides[i];
    }
    return Perim;
}

Polygon::~Polygon()
{
    //delete[] Sides;
}