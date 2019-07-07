#ifndef WINRESTOREBUTTON_H
#define WINRESTOREBUTTON_H

#include <QObject>
#include <QList>
#include "interactivebuttonbase.h"

class WinRestoreButton : public InteractiveButtonBase
{
public:
    WinRestoreButton(QWidget* parent = nullptr);

    void paintEvent(QPaintEvent* event) override;
};

#endif // WINRESTOREBUTTON_H
