#ifndef TASK_26_3_WINDOW_H
#define TASK_26_3_WINDOW_H

#include <iostream>
#include "point.h"

class Window {

private:
    Point position{Point()};
    int width{0};
    int height{0};
    std::string title{"No name"};

public:
    Window(){};
    Window(std::string title, int width, int height);

    /**
     * @method Get window title.
     * @return title string
     */
    std::string getTitle() const;

    /**
     * @method Get window width.
     * @return width int
     */
    int getWidth() const;

    /**
     * @method Set window width.
     * @param newWidth
     */
    void setWidth(const int newWidth);

    /**
     * @method Get window height.
     * @return height int
     */
    int getHeight() const;

    /**
     * @method Set window height.
     * @param [in] newHeight int
     */
    void setHeight(const int newHeight);

    /**
     * @method Get windows position point.
     * @return
     */
    Point getPosition() const;

    /**
     * @method Move window on Vector.
     * @param [in] point Point
     */
    void move(Point& point);
};

#endif //TASK_26_3_WINDOW_H