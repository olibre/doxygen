/******************************************************************************
 *
 * $Id$
 *
 *
 * Copyright (C) 1997-2001 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 */

#ifndef _MAINHANDLER_H
#define _MAINHANDLER_H

#include <qlist.h>
#include "basehandler.h"
#include "compoundhandler.h"
#include "doxmlintf.h"

class MainHandler : public IDoxygen, public BaseHandler<MainHandler>
{
  public:
    virtual void startCompound(const QXmlAttributes& attrib);
    MainHandler();
    virtual ~MainHandler();

    // IDoxygen
    QListIterator<ICompound> getCompoundIterator() const
    {
      return m_compounds;
    }
    ICompound *getCompoundById(const QString &id) const
    {
      return m_compoundDict[id];
    }

  private:
    QList<ICompound> m_compounds;
    QDict<ICompound> m_compoundDict;
};

#endif