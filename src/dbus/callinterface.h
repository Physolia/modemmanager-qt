/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -m -i generictypes.h -p callinterface ./introspection/org.freedesktop.ModemManager1.Call.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CALLINTERFACE_H
#define CALLINTERFACE_H

#include "generictypes.h"
#include <QList>
#include <QObject>
#include <QString>
#include <QVariant>

/*
 * Proxy class for interface org.freedesktop.ModemManager1.Call
 */
class OrgFreedesktopModemManager1CallInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    {
        return "org.freedesktop.ModemManager1.Call";
    }

public:
    OrgFreedesktopModemManager1CallInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopModemManager1CallInterface();

    Q_PROPERTY(int Direction READ direction)
    inline int direction() const
    {
        return qvariant_cast<int>(property("Direction"));
    }

    Q_PROPERTY(QString Number READ number)
    inline QString number() const
    {
        return qvariant_cast<QString>(property("Number"));
    }

    Q_PROPERTY(int State READ state)
    inline int state() const
    {
        return qvariant_cast<int>(property("State"));
    }

    Q_PROPERTY(int StateReason READ stateReason)
    inline int stateReason() const
    {
        return qvariant_cast<int>(property("StateReason"));
    }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Accept()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Accept"), argumentList);
    }

    inline QDBusPendingReply<> Hangup()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Hangup"), argumentList);
    }

    inline QDBusPendingReply<> SendDtmf(const QString &dtmf)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(dtmf);
        return asyncCallWithArgumentList(QStringLiteral("SendDtmf"), argumentList);
    }

    inline QDBusPendingReply<> Start()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Start"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void DtmfReceived(const QString &dtmf);
    void StateChanged(int oldState, int newState, uint reason);
};

#endif
