#ifndef SNAKE_H
#define SNAKE_H

class QPainter;
class QKeyEvent;

class Snake
{
public:
    Snake();
    void paintEvent(QPainter& painter);
    void keyPressEvent(QKeyEvent& event);
};

#endif // SNAKE_H
