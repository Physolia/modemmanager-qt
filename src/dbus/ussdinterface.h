/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generictypes.h -p ussdinterface \
 * /home/jgrulich/development/projects/libmm-qt/dbus/introspection/org.freedesktop.ModemManager1.Modem.Modem3gpp.Ussd.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MODEMMANAGERQT_USSDINTERFACE_H
#define MODEMMANAGERQT_USSDINTERFACE_H

#include "generictypes.h"
#include <QList>
#include <QObject>
#include <QString>
#include <QVariant>

/*
 * Proxy class for interface org.freedesktop.ModemManager1.Modem.Modem3gpp.Ussd
 */
class OrgFreedesktopModemManager1ModemModem3gppUssdInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef MMQT_STATIC
    {
        return "org.kde.fakemodem.Modem.Modem3gpp.Ussd";
    }
#else
    {
        return "org.freedesktop.ModemManager1.Modem.Modem3gpp.Ussd";
    }
#endif
public:
    OrgFreedesktopModemManager1ModemModem3gppUssdInterface(const QString &service,
                                                           const QString &path,
                                                           const QDBusConnection &connection,
                                                           QObject *parent = nullptr);

    ~OrgFreedesktopModemManager1ModemModem3gppUssdInterface() override;

    Q_PROPERTY(QString NetworkNotification READ networkNotification)
    inline QString networkNotification() const
    {
        return qvariant_cast<QString>(property("NetworkNotification"));
    }

    Q_PROPERTY(QString NetworkRequest READ networkRequest)
    inline QString networkRequest() const
    {
        return qvariant_cast<QString>(property("NetworkRequest"));
    }

    Q_PROPERTY(uint State READ state)
    inline uint state() const
    {
        return qvariant_cast<uint>(property("State"));
    }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Cancel()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Cancel"), argumentList);
    }

    inline QDBusPendingReply<QString> Initiate(const QString &command)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(command);
        return asyncCallWithArgumentList(QLatin1String("Initiate"), argumentList);
    }

    inline QDBusPendingReply<QString> Respond(const QString &response)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(response);
        return asyncCallWithArgumentList(QLatin1String("Respond"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
