#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "shape_Vector.h"
#include <QObject>
#include <QPaintDevice>
#include <QPainter>

//!  Class Rectangle
/*!
  Class to construct a Rectangle on screen.
*/
class Rectangle : public Shape
{
public:
    //! Destructor.
    /*!
      Destroys a shape.
    */
    ~Rectangle() override {}
    
    //! Alternate constructor.
    /*!
      \param PS an integer
      \param PW an integer
      \param PC an integer
      \param PCS an integer
      \param PJS an integer
      \param BC an integer
      \param BS an integer
      \param X an integer
      \param Y an integer
      \param W an integer
      \param H an integer
    */
    Rectangle(int PS, int PW, int PC, int PCS, int PJS, int BC, int BS, int X , int Y, int W, int H);
    
    //! Function that draws the rectangle shape on the canvas.
    /*!
      \param device
    */
    void draw(QPaintDevice *device) override;
	
    //! Function that moves the rectangle to a certain point.
    /*!
      \param x
      \param y
      \param vector
    */
    void move(int x, int y, int vector) override;
	
    //! Function that calculates area and returns it.
    /*!
      \return area
    */
    double area() override;
	
    //! Function that calculates perimeter and returns it.
    /*!
      \return perimeter
    */
    double perimeter() override;

    //Mutator functions
	
    //! Mutator Function to set rectangle's axis.
    /*!
      \param x
      \param y
    */
    void setLocation(int x, int y);
	
    //! Mutator Function to set rectangle's axis.
    /*!
      \param pt
    */
    void setLocation(QPoint pt);
	
    //! Mutator Function to set rectangle's width and height.
    /*!
      \param w
      \param h
    */
    void setDimensions(double w, double h);
	
    //! Mutator Function to set all of rectangle's dimensions.
    /*!
      \param w
      \param h
      \param x
      \param y
    */
    void setAll(double w, double h, int x, int y);
	
    //Accessor functions
	
    //! Accessor Function to get width.
    /*!
      \return width
    */
    double getWidth();
	
    //! Accessor Function to get height.
    /*!
      \return height
    */
    double getHeight();
	
    //! Accessor Function to get axis.
    /*!
      \return location
    */
    QPoint& getLocation();

private:
    int x; 		/*!< x-axis for the rectangle, used to draw rectangle on a certain x-axis. */
    int y;		/*!< y-axis for the rectangle, used to draw rectangle on a certain y-axis. */
    double width;	/*!< width of the rectangle, used to draw rectangle based on width. */
    double height;	/*!< height of the rectangle, used to draw rectangle based on height. */
    QRectF rectangle;	/*!< rectangle class used to draw a rectangle. */
    QPoint location;	/*!< location used to store x and y-axis. */
};

#endif // RECTANGLE_H
