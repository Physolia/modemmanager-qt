/*
    Copyright 2013 Lukas Tinkl <ltinkl@redhat.com>
    Copyright 2013-2015 Jan Grulich <jgrulich@redhat.com>

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

#ifndef MODEMMANAGER_MODEMTIME_P_H
#define MODEMMANAGER_MODEMTIME_P_H

#include "dbus/timeinterface.h"
#include "interface_p.h"
#include "modemtime.h"

namespace ModemManager
{

class ModemTimePrivate: public InterfacePrivate
{
public:
    explicit ModemTimePrivate(const QString &path, ModemTime *q);
    OrgFreedesktopModemManager1ModemTimeInterface modemTimeIface;
    ModemTime::NetworkTimeZone networkTimeZone;

    ModemTime::NetworkTimeZone variantMapToTimeZone(const QVariantMap &map);

    Q_DECLARE_PUBLIC(ModemTime)
    ModemTime *q_ptr;
private Q_SLOTS:
    void onNetworkTimeChanged(const QString &isoDateTime);
    virtual void onPropertiesChanged(const QString &interface, const QVariantMap &properties, const QStringList &invalidatedProps) Q_DECL_OVERRIDE;
};

} // namespace ModemManager

#endif
