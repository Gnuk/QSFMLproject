/*
 * Copyright (c) 2013 GNKW and SFML code parts
 *
 * This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.
 * Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:
 *  1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
 *  2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
 *  3. This notice may not be removed or altered from any source distribution.
 */
#include <QApplication>
#include <QLabel>
#include "example/myqsfmlcanvas.h"

using namespace example;

/**
 * @brief Lancement de l'application
 * @param argc
 * @param argv
 * @return L'application
 */
int main(int argc, char **argv)
{
    QApplication App(argc, argv);

    // Create the main frame
    QFrame* mainFrame = new QFrame;
    mainFrame->setWindowTitle("QSFML example");
    mainFrame->resize(810, 640);
    mainFrame->show();

    // Create a SFML view inside a QSFML Canvas
    MyQSFMLCanvas* qSFMLView = new MyQSFMLCanvas(mainFrame, QPoint(5, 35), QSize(800, 600));
    qSFMLView->show();

    // Add a Qlabel before the QSFML Canvas
    QLabel* label = new QLabel("Click or Press Arrow keys to change the rectangle", mainFrame);
    label->setGeometry(100, 0, 600, 25);
    label->show();

    return App.exec();
}
