/*
 * Copyright (c) 2013 GNKW and SFML code parts
 *
 * This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.
 * Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:
 *  1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
 *  2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
 *  3. This notice may not be removed or altered from any source distribution.
 */
#include "myqsfmlcanvas.h"

using namespace example;

MyQSFMLCanvas::MyQSFMLCanvas(QWidget* parent, const QPoint& position, const QSize& size) :
   QSFMLCanvas(parent, position, size)
{
    // Initialisation of a movement to 5px
    this->movement = 5;
}

MyQSFMLCanvas::~MyQSFMLCanvas()
{
    // My destructor
}

void MyQSFMLCanvas::OnInit()
{
    // Example of a rectangle
    this->rect.setSize(sf::Vector2f(100, 50));
    this->rect.setPosition(sf::Vector2f(350, 275));
    this->rect.setFillColor(sf::Color::Blue);
}

void MyQSFMLCanvas::OnUpdate()
{
    // Show the rectangle
    this->clear();
    this->draw(this->rect);
    this->display();
}

void MyQSFMLCanvas::mousePressEvent ( QMouseEvent * )
{
    // On click change the rectangle color
    this->rect.setFillColor(sf::Color::Red);
}

void MyQSFMLCanvas::keyPressEvent(QKeyEvent *event)
{
    // Move the rectangle
    switch (event->key())
    {
        case Qt::Key_Left:
            this->rect.move(-(this->movement),0);
            break;
        case Qt::Key_Right:
            this->rect.move(this->movement,0);
            break;
        case Qt::Key_Up:
            this->rect.move(0,-(this->movement));
            break;
        case Qt::Key_Down:
            this->rect.move(0,this->movement);
            break;
        default:
            break;
    }

}
