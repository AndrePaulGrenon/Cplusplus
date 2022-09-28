#include "Point.hpp"
#include "colours.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed   results[3];
    int     i = 1;


    results[0] = (a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX());
    if (results[0].toFloat())
    {
        if (results[0].toFloat() < 0)
            i = -1;
        results[1] = (b.getX() - point.getX()) * (c.getY() - point.getY()) - (b.getY() - point.getY()) * (c.getX() - point.getX());
        if (results[1].toFloat() * i > 0)
        {
            results[2] = (c.getX() - point.getX()) * (a.getY() - point.getY()) - (c.getY() - point.getY()) * (a.getX() - point.getX());
            if (results[2].toFloat() * i > 0)
                return (true);
        }
    }
    return (false);
}

int main(void)
{
    Point Top0(0, 0);
    Point Top1(0, 10);
    Point Top2(10, 0);
    Point point(5, 5);

    std::cout << BRED "New summits : " CLEAR << Top0 << " New: " << Top1 << " New: " << Top2 << std::endl << std::endl;
    std::cout << " Point to check: " RED << point << CLEAR << std::endl;
    if (bsp(Top0, Top1, Top2, point))
    {
        std::cout << BGRN "Point is in the triangle\n" CLEAR << std::endl;
    }
    else
        std::cout << YEL "Point is out of the triangle 😭 \n" CLEAR << std::endl;
    Point point1(2, 2);
    std::cout << " Point to check: " RED << point1 << CLEAR << std::endl;
    if (bsp(Top0, Top1, Top2, point1))
    {
        std::cout << BGRN "Point is in the triangle\n" CLEAR << std::endl;
    }
    else
        std::cout << YEL "Point is out of the triangle 😭 \n" CLEAR << std::endl;

    Point Top3(4, -7);
    Point Top4(2, 10);
    Point Top5(18, 0);
    Point point2(4, -7);

    std::cout << BRED "New summits : " CLEAR << Top3 << " New:" << Top4 << " New:" << Top5 << std::endl;
    std::cout << " Point to check: " RED << point2 << CLEAR << std::endl << std::endl;

    if (bsp(Top3, Top4, Top5, point2))
    {
        std::cout << BGRN "Point is in the triangle\n" CLEAR << std::endl;
    }
    else
        std::cout << YEL "Point is out of the triangle 😭 \n" CLEAR << std::endl;
    Point point3(6, -1);
    std::cout << " Point to check: " RED << point3 << CLEAR << std::endl;

    if (bsp(Top3, Top4, Top5, point3))
    {
        std::cout << BGRN "Point is in the triangle\n" CLEAR << std::endl;
    }
    else
        std::cout << YEL "Point is out of the triangle 😭 \n" CLEAR << std::endl;

    return (0);
}