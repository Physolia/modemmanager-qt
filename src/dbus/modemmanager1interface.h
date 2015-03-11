/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generictypes.h -p modemmanager1interface /home/jgrulich/development/projects/libmm-qt/dbus/introspection/org.freedesktop.ModemManager1.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MODEMMANAGERQT_MODEMMANAGER1INTERFACE_H
#define MODEMMANAGERQT_MODEMMANAGER1INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "generictypes.h"
#include "generictypes_p.h"

/*
 * Proxy class for interface org.freedesktop.ModemManager1
 */
class OrgFreedesktopModemManager1Interface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef MMQT_STATIC
    { return "org.kde.fakemodem"; }
#else
    { return "org.freedesktop.ModemManager1"; }
#endif
public:
    OrgFreedesktopModemManager1Interface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopModemManager1Interface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> ScanDevices()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ScanDevices"), argumentList);
    }

    inline QDBusPendingReply<> SetLogging(const QString &level)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(level);
        return asyncCallWithArgumentList(QLatin1String("SetLogging"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
