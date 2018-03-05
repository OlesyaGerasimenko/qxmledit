/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2018 by Luca Bellonda and individual contributors       *
 *    as indicated in the AUTHORS file                                    *
 *  lbellonda _at_ gmail.com                                              *
 *                                                                        *
 * This library is free software; you can redistribute it and/or          *
 * modify it under the terms of the GNU Library General Public            *
 * License as published by the Free Software Foundation; either           *
 * version 2 of the License, or (at your option) any later version.       *
 *                                                                        *
 * This library is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 * Library General Public License for more details.                       *
 *                                                                        *
 * You should have received a copy of the GNU Library General Public      *
 * License along with this library; if not, write to the                  *
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,       *
 * Boston, MA  02110-1301  USA                                            *
 **************************************************************************/

#include "qxmleditapplication.h"
#include "mainwindow.h"
#include "modules/encoding/codepagedialog.h"
#include "uiservices.h"
#include "visualization/datavisualization.h"
#include "modules/services/anotifier.h"
#include "StartParams.h"
#include "utils.h"
#include "qxmleditconfig.h"
#include "modules/help/firstaccessdialog.h"
#include "modules/help/guidedoperationsdialog.h"
#include "modules/help/guidedvalidationdialog.h"

void QXmlEditApplication::startActionShowUserTypePanel()
{
    Utils::TEST_ME("");
    showUserTypePanel() ;
}

bool QXmlEditApplication::startActionShowGuidedOperationsPanel()
{
    Utils::TEST_ME("fare");
    return showGuidedOperationsPanel();
}

void QXmlEditApplication::startActionSetupFirstAccessForPreferences()
{
    Utils::TODO_THIS_RELEASE("fare");
    setupFirstAccessForPreferences();
}

void QXmlEditApplication::startActionTriggersWelcomeDialog()
{
    Utils::TODO_THIS_RELEASE("fare");
    MainWindow *mainWindow = getOrCreateMainWindow();
    mainWindow->show();
    mainWindow->triggersWelcomeDialog();
}

void QXmlEditApplication::startActionLoadFile(const QString &fileName)
{
    Utils::TODO_THIS_RELEASE("fare");
    MainWindow *mainWindow = getOrCreateMainWindow();
    mainWindow->show();
    mainWindow->loadFile(fileName);
}

//-------------------- accessories
