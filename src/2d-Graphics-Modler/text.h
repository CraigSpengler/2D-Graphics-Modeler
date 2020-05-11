#ifndef TEXT_H
#define TEXT_H

#include "shape.h"
#include "shape_Vector.h"
#include <QObject>
#include <QPaintDevice>
#include <QPainter>

class Text : public Shape
{
public:
     Text(QPaintDevice* dev = nullptr, int id = -1);
     Text(QString text, int TC, int font, int align, int style, int weight, int boxW, int boxH, QPoint Loc);
     Text(QString T, std::string TC, std::string F, std::string align, std::string S, std::string W, int boxW, int boxH, QPoint Loc);

    ~Text() override {}

    void draw(QPaintDevice *dev) override;
    void move(int x, int y, int vertext) override;
    double area() override;
    double perimeter() override;

    void setText(QString newText);
    void setBoxWidth(int newBoxWidth);
    void setBoxHeight(int newBoxHeight);
    void setFlag(Qt::AlignmentFlag flagParam);
    void setLocation(int x, int y);
    void setLocation(QPoint pt);
    void setDimensions(int w, int h);

    QFont& getFont();
    Qt::AlignmentFlag getFlag();
    QString getText();

private:
    QString text;
    QFont font;
    Qt::AlignmentFlag flag;
    int boxWidth;
    int boxHeight;
    QPoint location;
};
#endif // TEXT_H
