/* ---------------------------------------------------------------------
 * Definition of MainWindow                                main_window.h
 * Application's top-level window
 * ---------------------------------------------------------------------
 * This file is part of Valkyrie, a front-end for Valgrind
 * Copyright (C) 2000-2008, OpenWorks LLP <info@open-works.co.uk>
 * This program is released under the terms of the GNU GPL v.2
 * See the file COPYING for the full license details.
 */

#ifndef __VK_MAIN_WINDOW_H
#define __VK_MAIN_WINDOW_H


#include "help_about.h"
#include "hand_book.h"
#include "options_window.h"

#include "vk_objects.h"
#include "valkyrie_object.h"
#include "tool_object.h"
#include "tool_view.h"

#include <qbuttongroup.h>
#include <qlabel.h>
#include <qtoolbutton.h>
#include <qptrlist.h>



/* class MainWindow ---------------------------------------------------- */
class MainWindow : public QMainWindow
{
   Q_OBJECT
public:
   MainWindow( Valkyrie* valk );
   ~MainWindow();

public slots:
   /* sets run and stop buttons to correct state */
   void updateButtons( bool running );
   /* show a message in the status bar */
   void setStatus( QString );
   /* dis/enable tooltips */
   void toggleToolTips();
   /* show toolbutton text labels (or not) */
   void toggleToolbarLabels();
   /* show toolview for tool set in [valgrind:tool] */
   void showToolView( int tvid ); 
   /* connected to optionsWin signal flagsChanged() */
   void updateVgFlags();
   /* start appropriate process for given runState */
   void run( VkRunState::State );

   Valkyrie* valkyrie() { return m_valkyrie; }

signals:
   void toolbarLabelsToggled(bool);

protected:
   void closeEvent( QCloseEvent* ce );

private slots:
   void runValgrind();
   void stop();

   void showFlagsWidget( bool show );
   void showOptionsWindow(int);
   void showAboutInfo( int id );
   void closeToolView();

private:
   void setToggles( int );
   void mkMenuBar();
   void mkStatusBar();

private:
   Valkyrie*      m_valkyrie;       /* access to objects */
   ToolViewStack* m_viewStack;      /* tool views        */

   HandBook*      m_handBook;
   OptionsWindow* m_optionsWin;

   /* label to show non-default flags for current tool */
   QLabel*      m_flagsLabel;
   QToolButton* m_flagsButton;

   /* messages label for status bar */
   QLabel*      m_statusMsg;

   bool m_showToolTips;
   bool m_showToolbarLabels;

   enum menuIds{ FILE_RUN, FILE_STOP, FILE_CLOSE };
   QPopupMenu*   m_fileMenu;
   QPopupMenu*   m_toolsMenu;
   QPopupMenu*   m_optsMenu;
   QPopupMenu*   m_helpMenu;
   QButtonGroup* m_viewButtGroup;

   QToolButton* m_runButton;
   QToolButton* m_stopButton;
};


#endif
