/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp org.freedesktop.ModemManager1.Bearer.xml -p Bearer -N
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef BEARER_H_1371821210
#define BEARER_H_1371821210

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
 * Proxy class for interface org.freedesktop.ModemManager1.Bearer
 */
class OrgFreedesktopModemManager1BearerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.ModemManager1.Bearer"; }

public:
    OrgFreedesktopModemManager1BearerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopModemManager1BearerInterface();

    Q_PROPERTY(bool Connected READ connected)
    inline bool connected() const
    { return qvariant_cast< bool >(property("Connected")); }

    Q_PROPERTY(QString Interface READ interface)
    inline QString interface() const
    { return qvariant_cast< QString >(property("Interface")); }

    Q_PROPERTY(QVariantMap Ip4Config READ ip4Config)
    inline QVariantMap ip4Config() const
    { return qvariant_cast< QVariantMap >(property("Ip4Config")); }

    Q_PROPERTY(QVariantMap Ip6Config READ ip6Config)
    inline QVariantMap ip6Config() const
    { return qvariant_cast< QVariantMap >(property("Ip6Config")); }

    Q_PROPERTY(uint IpTimeout READ ipTimeout)
    inline uint ipTimeout() const
    { return qvariant_cast< uint >(property("IpTimeout")); }

    Q_PROPERTY(QVariantMap Properties READ properties)
    inline QVariantMap properties() const
    { return qvariant_cast< QVariantMap >(property("Properties")); }

    Q_PROPERTY(bool Suspended READ suspended)
    inline bool suspended() const
    { return qvariant_cast< bool >(property("Suspended")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Connect()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Connect"), argumentList);
    }

    inline QDBusPendingReply<> Disconnect()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Disconnect"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
