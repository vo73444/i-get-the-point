class Point{
    float x_cord;
    float y_cord;

    public:

    Point(float x, float y);

    float operator-(Point p);

    bool operator==(Point p);

    bool operator!=(Point p);

    Point operator/(Point p);

    float getX();

    float getY();

    void prettyPrint();

};
