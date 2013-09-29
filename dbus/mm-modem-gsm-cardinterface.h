/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -m -N -p mm-modem-gsm-cardinterface introspection/mm-modem-gsm-card.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MM_MODEM_GSM_CARDINTERFACE_H
#define MM_MODEM_GSM_CARDINTERFACE_H

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
 * Proxy class for interface org.freedesktop.ModemManager.Modem.Gsm.Card
 */
class OrgFreedesktopModemManagerModemGsmCardInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.ModemManager.Modem.Gsm.Card"; }

public:
    OrgFreedesktopModemManagerModemGsmCardInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopModemManagerModemGsmCardInterface();

    Q_PROPERTY(QString SimIdentifier READ simIdentifier)
    inline QString simIdentifier() const
    { return qvariant_cast< QString >(property("SimIdentifier")); }

    Q_PROPERTY(uint SupportedBands READ supportedBands)
    inline uint supportedBands() const
    { return qvariant_cast< uint >(property("SupportedBands")); }

    Q_PROPERTY(uint SupportedModes READ supportedModes)
    inline uint supportedModes() const
    { return qvariant_cast< uint >(property("SupportedModes")); }

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

    inline QDBusPendingReply<QString> GetImei()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetImei"), argumentList);
    }

    inline QDBusPendingReply<QString> GetImsi()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetImsi"), argumentList);
    }

    inline QDBusPendingReply<QString> GetOperatorId()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetOperatorId"), argumentList);
    }

    inline QDBusPendingReply<QString> GetSpn()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetSpn"), argumentList);
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