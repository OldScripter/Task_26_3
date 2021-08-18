#ifndef TASK_26_3_POINT_H
#define TASK_26_3_POINT_H

class Point {

private:
    int x {0};
    int y {0};

public:
    Point(){};
    Point(int x, int y);

    /**
     * @method Set x coord.
     * @param [in] newX int
     */
    void setX(const int newX);

    /**
     * @method Set y coord.
     * @param [in] newY int
     */
    void setY(const int newY);

    /**
     * @method Set point coords.
     * @param [in] newX int
     * @param [in] newY int
     */
    void setPoint(const int newX, const int newY);

    /**
     * @method Get x coord.
     * @return x int
     */
    int getX() const;

    /**
     * @method Get y coord.
     * @return y int
     */
    int getY() const;

    /**
     * @method Add point to actual point.
     * @param [in] p Point
     */
    void add(Point& p);
};

#endif //TASK_26_3_POINT_H