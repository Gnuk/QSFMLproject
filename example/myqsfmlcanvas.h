/*
 * Copyright (c) 2013 GNKW and SFML code parts
 *
 * This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.
 * Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:
 *  1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
 *  2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
 *  3. This notice may not be removed or altered from any source distribution.
 */
#ifndef MYQSFMLCANVAS_H
#define MYQSFMLCANVAS_H

#include <QWidget>
#include <QPoint>
#include <QSize>
#include <QMouseEvent>
#include <QKeyEvent>
#include "qsfml/qsfmlcanvas.h"

namespace example{
    /**
     * @brief Example class of a QSFML Canvas utilisation
     */
    class MyQSFMLCanvas : public qsfml::QSFMLCanvas
    {
        Q_OBJECT
    private:
        sf::RectangleShape rect;
        int movement;
    public:
        /**
         * @brief Constructor of the Canvas
         * @param parent Parent of the Canvas
         * @param position Position of the Canvas
         * @param size Size of the Canvas
         */
        MyQSFMLCanvas(QWidget* parent, const QPoint& position, const QSize& size);

        /**
          * Destructor
          */
        ~MyQSFMLCanvas();
    private:
        /**
         * @brief What we do when SFML is initialized
         */
        void OnInit();
        /**
         * @brief What we do when SFML is updated
         */
        void OnUpdate();
        /**
         * @brief Qt event when the mouse button is pressed
         */
        void mousePressEvent(QMouseEvent*);
        /**
         * @brief Qt event when a key button is pressed
         * @param event The Qt key event
         */
        void keyPressEvent(QKeyEvent * event);
    };
}

#endif // MYQSFMLCANVAS_H
