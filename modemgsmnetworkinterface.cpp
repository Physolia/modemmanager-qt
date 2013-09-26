/*
Copyright 2008,2011 Will Stephenson <wstephenson@kde.org>
Copyright 2010 Lamarque Souza <lamarque@kde.org>
Copyright 2013 Lukas Tinkl <ltinkl@redhat.com>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) version 3, or any
later version accepted by the membership of KDE e.V. (or its
successor approved by the membership of KDE e.V.), which shall
act as a proxy defined in Section 6 of version 3 of the license.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modemgsmnetworkinterface.h"
#include "modemgsmnetworkinterface_p.h"
#include "manager.h"
#include "mmdebug.h"
#include "dbus/dbus.h"

Modem3gppInterfacePrivate::Modem3gppInterfacePrivate(const QString &path, QObject *owner)
    : ModemInterfacePrivate(path, owner),
      modem3gppIface(MM_DBUS_SERVICE, path, QDBusConnection::systemBus(), this)
{
}

ModemManager::Modem3gppInterface::Modem3gppInterface(const QString & path, QObject * parent)
    : ModemInterface(*new Modem3gppInterfacePrivate(path, this), parent)
{
    Q_D(Modem3gppInterface);

    QDBusConnection::systemBus().connect(MM_DBUS_SERVICE, d->udi, DBUS_INTERFACE_PROPS, "PropertiesChanged", this,
                                         SLOT(onPropertiesChanged(QString,QVariantMap,QStringList)));
}

ModemManager::Modem3gppInterface::~Modem3gppInterface()
{
}

QString ModemManager::Modem3gppInterface::imei() const
{
    Q_D(const Modem3gppInterface);
    return d->modem3gppIface.imei();
}

MMModem3gppRegistrationState ModemManager::Modem3gppInterface::registrationState() const
{
    Q_D(const Modem3gppInterface);
    return (MMModem3gppRegistrationState)d->modem3gppIface.registrationState();
}

QString ModemManager::Modem3gppInterface::operatorCode() const
{
    Q_D(const Modem3gppInterface);
    return d->modem3gppIface.operatorCode();
}

QString ModemManager::Modem3gppInterface::operatorName() const
{
    Q_D(const Modem3gppInterface);
    return d->modem3gppIface.operatorName();
}

ModemManager::Modem3gppInterface::FacilityLocks ModemManager::Modem3gppInterface::enabledFacilityLocks() const
{
    Q_D(const Modem3gppInterface);
    return (FacilityLocks)d->modem3gppIface.enabledFacilityLocks();
}

void ModemManager::Modem3gppInterface::registerToNetwork(const QString &networkId)
{
    Q_D(Modem3gppInterface);
    d->modem3gppIface.Register(networkId);
}

ScanResultsType ModemManager::Modem3gppInterface::scan()
{
    Q_D(Modem3gppInterface);
    return d->modem3gppIface.Scan();
}

void ModemManager::Modem3gppInterface::onPropertiesChanged(const QString &interface, const QVariantMap &properties, const QStringList &invalidatedProps)
{
    Q_D(Modem3gppInterface);
    mmDebug() << interface << properties.keys();

    if (interface == QString(MM_DBUS_INTERFACE_MODEM_MODEM3GPP)) {
        QVariantMap::const_iterator it = properties.constFind(MM_MODEM_MODEM3GPP_PROPERTY_REGISTRATIONSTATE);
        if (it != properties.constEnd()) {
            emit registrationStateChanged((MMModem3gppRegistrationState) it->toUInt());
        }

        it = properties.constFind(MM_MODEM_MODEM3GPP_PROPERTY_ENABLEDFACILITYLOCKS);
        if (it != properties.constEnd()) {
            emit enabledFacilityLocksChanged((FacilityLocks) it->toUInt());
        }
    }
}
