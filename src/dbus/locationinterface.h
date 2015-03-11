/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generictypes.h -p locationinterface /home/jgrulich/development/projects/libmm-qt/dbus/introspection/org.freedesktop.ModemManager1.Modem.Location.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MODEMMANAGERQT_LOCATIONINTERFACE_H
#define MODEMMANAGERQT_LOCATIONINTERFACE_H

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
 * Proxy class for interface org.freedesktop.ModemManager1.Modem.Location
 */
class OrgFreedesktopModemManager1ModemLocationInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef MMQT_STATIC
    { return "org.kde.fakemodem.Modem.Location"; }
#else
    { return "org.freedesktop.ModemManager1.Modem.Location"; }
#endif
public:
    OrgFreedesktopModemManager1ModemLocationInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopModemManager1ModemLocationInterface();

    Q_PROPERTY(uint Capabilities READ capabilities)
    inline uint capabilities() const
    { return qvariant_cast< uint >(property("Capabilities")); }

    Q_PROPERTY(uint Enabled READ enabled)
    inline uint enabled() const
    { return qvariant_cast< uint >(property("Enabled")); }

    Q_PROPERTY(LocationInformationMap Location READ location)
    inline LocationInformationMap location() const
    { return qvariant_cast< LocationInformationMap >(property("Location")); }

    Q_PROPERTY(bool SignalsLocation READ signalsLocation)
    inline bool signalsLocation() const
    { return qvariant_cast< bool >(property("SignalsLocation")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<LocationInformationMap> GetLocation()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetLocation"), argumentList);
    }

    inline QDBusPendingReply<> Setup(uint sources, bool signal_location)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(sources) << QVariant::fromValue(signal_location);
        return asyncCallWithArgumentList(QLatin1String("Setup"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
