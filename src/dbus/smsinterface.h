/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generictypes.h -p smsinterface
 * /home/jgrulich/development/projects/libmm-qt/dbus/introspection/org.freedesktop.ModemManager1.Sms.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MODEMMANAGERQT_SMSINTERFACE_H
#define MODEMMANAGERQT_SMSINTERFACE_H

#include "generictypes.h"
#include <QByteArray>
#include <QList>
#include <QObject>
#include <QString>
#include <QVariant>

/*
 * Proxy class for interface org.freedesktop.ModemManager1.Sms
 */
class OrgFreedesktopModemManager1SmsInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef MMQT_STATIC
    {
        return "org.kde.fakemodem.Sms";
    }
#else
    {
        return "org.freedesktop.ModemManager1.Sms";
    }
#endif
public:
    OrgFreedesktopModemManager1SmsInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopModemManager1SmsInterface();

    Q_PROPERTY(int SmsClass READ smsClass)
    inline int smsClass() const
    {
        return qvariant_cast<int>(property("Class"));
    }

    Q_PROPERTY(QByteArray Data READ data)
    inline QByteArray data() const
    {
        return qvariant_cast<QByteArray>(property("Data"));
    }

    Q_PROPERTY(bool DeliveryReportRequest READ deliveryReportRequest)
    inline bool deliveryReportRequest() const
    {
        return qvariant_cast<bool>(property("DeliveryReportRequest"));
    }

    Q_PROPERTY(uint DeliveryState READ deliveryState)
    inline uint deliveryState() const
    {
        return qvariant_cast<uint>(property("DeliveryState"));
    }

    Q_PROPERTY(QString DischargeTimestamp READ dischargeTimestamp)
    inline QString dischargeTimestamp() const
    {
        return qvariant_cast<QString>(property("DischargeTimestamp"));
    }

    Q_PROPERTY(uint MessageReference READ messageReference)
    inline uint messageReference() const
    {
        return qvariant_cast<uint>(property("MessageReference"));
    }

    Q_PROPERTY(QString Number READ number)
    inline QString number() const
    {
        return qvariant_cast<QString>(property("Number"));
    }

    Q_PROPERTY(uint PduType READ pduType)
    inline uint pduType() const
    {
        return qvariant_cast<uint>(property("PduType"));
    }

    Q_PROPERTY(QString SMSC READ SMSC)
    inline QString SMSC() const
    {
        return qvariant_cast<QString>(property("SMSC"));
    }

    Q_PROPERTY(uint ServiceCategory READ serviceCategory)
    inline uint serviceCategory() const
    {
        return qvariant_cast<uint>(property("ServiceCategory"));
    }

    Q_PROPERTY(uint State READ state)
    inline uint state() const
    {
        return qvariant_cast<uint>(property("State"));
    }

    Q_PROPERTY(uint Storage READ storage)
    inline uint storage() const
    {
        return qvariant_cast<uint>(property("Storage"));
    }

    Q_PROPERTY(uint TeleserviceId READ teleserviceId)
    inline uint teleserviceId() const
    {
        return qvariant_cast<uint>(property("TeleserviceId"));
    }

    Q_PROPERTY(QString Text READ text)
    inline QString text() const
    {
        return qvariant_cast<QString>(property("Text"));
    }

    Q_PROPERTY(QString Timestamp READ timestamp)
    inline QString timestamp() const
    {
        return qvariant_cast<QString>(property("Timestamp"));
    }

    Q_PROPERTY(ModemManager::ValidityPair Validity READ validity)
    inline ModemManager::ValidityPair validity() const
    {
        return qvariant_cast<ModemManager::ValidityPair>(property("Validity"));
    }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Send()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Send"), argumentList);
    }

    inline QDBusPendingReply<> Store(uint storage)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(storage);
        return asyncCallWithArgumentList(QLatin1String("Store"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
