/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -m -i generictypes.h -p callinterface ./introspection/org.freedesktop.ModemManager1.Call.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "callinterface.h"

/*
 * Implementation of interface class OrgFreedesktopModemManager1CallInterface
 */

OrgFreedesktopModemManager1CallInterface::OrgFreedesktopModemManager1CallInterface(const QString &service,
                                                                                   const QString &path,
                                                                                   const QDBusConnection &connection,
                                                                                   QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgFreedesktopModemManager1CallInterface::~OrgFreedesktopModemManager1CallInterface()
{
}
