/*
 * Copyright 2014 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *      Michael Zanetti <michael.zanetti@canonical.com>
 */

#ifndef DESKTOPFILEHANDLER_H
#define DESKTOPFILEHANDLER_H

#include <QObject>

class DesktopFileHandler: public QObject
{
    Q_OBJECT
public:
    DesktopFileHandler(QObject *parent = nullptr);

    QString findDesktopFile(const QString &appId) const;

    QString displayName(const QString &appId) const;
    QString icon(const QString &appId) const;
};

#endif
