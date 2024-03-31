class Point{
    float x_cord;
    float y_cord;

    public:

    Point(float x, float y);

    float operator-(Point p);

    bool operator==(Point p);

    bool operator!=(Point p);

    Point operator/(Point p);

    Point operator*(double d);

    float getX();

    float getY();

    float operator[](char cord);

    void prettyPrint();

};
