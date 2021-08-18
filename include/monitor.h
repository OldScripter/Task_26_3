#ifndef TASK_26_3_MONITOR_H
#define TASK_26_3_MONITOR_H

#include <iostream>
#include "window.h"
#include "point.h"

class Monitor {

private:
    int width {0};
    int height{0};
    Window* window{nullptr};
public:
    Monitor(){};
    Monitor(int w, int h);
    ~Monitor();

    /**
     * @method Set new window width.
     * @param [in] newWidth
     */
    void setWidth(const int newWidth);

    /**
     * @method Set new window height.
     * @param [in] newHeight
     */
    void setHeight(const int newHeight);

    /**
     * @method Get the width.
     * @return width
     */
    int getWidth() const;

    /**
     * @method Get the height
     * @return height
     */
    int getHeight() const;

    /**
     * @method Display the monitor content (window). Window must be created.
     */
    void display() const;

    /**
     * @method Create a window object inside monitor.
     * @param [in] title string
     * @param [in] width int
     * @param [in] height int
     */
    void createWindow(std::string title, int width, int height);

    /**
     * @method Get the actual window. Window must be created.
     * @return window*
     */
    Window* getWindow();

    /**
     * @method Move window on vector (point).
     * @param [in] p int
     */
    void moveWindow(Point& p);
};

#endif //TASK_26_3_MONITOR_H