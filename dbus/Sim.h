/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp org.freedesktop.ModemManager1.Sim.xml -p Sim -N
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef SIM_H_1371819960
#define SIM_H_1371819960

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

#include "generic-types.h"

/*
 * Proxy class for interface org.freedesktop.ModemManager1.Sim
 */
class OrgFreedesktopModemManager1SimInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.ModemManager1.Sim"; }

public:
    OrgFreedesktopModemManager1SimInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopModemManager1SimInterface();

    Q_PROPERTY(QString Imsi READ imsi)
    inline QString imsi() const
    { return qvariant_cast< QString >(property("Imsi")); }

    Q_PROPERTY(QString OperatorIdentifier READ operatorIdentifier)
    inline QString operatorIdentifier() const
    { return qvariant_cast< QString >(property("OperatorIdentifier")); }

    Q_PROPERTY(QString OperatorName READ operatorName)
    inline QString operatorName() const
    { return qvariant_cast< QString >(property("OperatorName")); }

    Q_PROPERTY(QString SimIdentifier READ simIdentifier)
    inline QString simIdentifier() const
    { return qvariant_cast< QString >(property("SimIdentifier")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> ChangePin(const QString &old_pin, const QString &new_pin)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(old_pin) << QVariant::fromValue(new_pin);
        return asyncCallWithArgumentList(QLatin1String("ChangePin"), argumentList);
    }

    inline QDBusPendingReply<> EnablePin(const QString &pin, bool enabled)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(pin) << QVariant::fromValue(enabled);
        return asyncCallWithArgumentList(QLatin1String("EnablePin"), argumentList);
    }

    inline QDBusPendingReply<> SendPin(const QString &pin)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(pin);
        return asyncCallWithArgumentList(QLatin1String("SendPin"), argumentList);
    }

    inline QDBusPendingReply<> SendPuk(const QString &puk, const QString &pin)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(puk) << QVariant::fromValue(pin);
        return asyncCallWithArgumentList(QLatin1String("SendPuk"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
