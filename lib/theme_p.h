#ifndef THEME_P_H
#define THEME_P_H

#include "theme.h"

class ThemePrivate
{
    Q_DISABLE_COPY(ThemePrivate)
    Q_DECLARE_PUBLIC(Theme)

public:
    ThemePrivate(Theme *parent);

    QColor rgba(int r, int g, int b, qreal a) const;

    Theme *const q_ptr;

    QHash<QString, QColor> colors;
};

#endif // THEME_P_H

ThemePrivate::ThemePrivate(Theme *parent)
    : q_ptr(parent)
{
}

QColor ThemePrivate::rgba(int r, int g, int b, qreal a) const
{
    QColor color(r, g, b);
    color.setAlphaF(a);
    return color;
}
