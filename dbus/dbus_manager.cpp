/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p dbus_manager manager.xml -N
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "dbus_manager.h"

/*
 * Implementation of interface class OrgFreedesktopDBusObjectManagerInterface
 */

OrgFreedesktopDBusObjectManagerInterface::OrgFreedesktopDBusObjectManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgFreedesktopDBusObjectManagerInterface::~OrgFreedesktopDBusObjectManagerInterface()
{
}

