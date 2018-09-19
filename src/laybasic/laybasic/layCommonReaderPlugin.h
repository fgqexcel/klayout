
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/



#ifndef HDR_layCommonReaderPlugin_h
#define HDR_layCommonReaderPlugin_h

#include "layStream.h"
#include <QObject>

namespace Ui
{
  class CommonReaderOptionPage;
}

namespace lay
{

class CommonReaderOptionPage
  : public StreamReaderOptionsPage
{
Q_OBJECT

public:
  CommonReaderOptionPage (QWidget *parent);
  ~CommonReaderOptionPage ();

  void setup (const db::FormatSpecificReaderOptions *options, const lay::Technology *tech);
  void commit (db::FormatSpecificReaderOptions *options, const lay::Technology *tech);

private:
  Ui::CommonReaderOptionPage *mp_ui;
};

}

#endif

