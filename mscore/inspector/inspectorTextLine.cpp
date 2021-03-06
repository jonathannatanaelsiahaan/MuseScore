//=============================================================================
//  MuseScore
//  Music Composition & Notation
//
//  Copyright (C) 2013 Werner Schweer
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENSE.GPL
//=============================================================================

#include "inspectorTextLine.h"
#include "musescore.h"
#include "libmscore/score.h"

namespace Ms {

//---------------------------------------------------------
//   InspectorTextLine
//---------------------------------------------------------

InspectorTextLine::InspectorTextLine(QWidget* parent)
   : InspectorTextLineBase(parent)
      {
      const std::vector<InspectorItem> il = {
            };
      const std::vector<InspectorPanel> ppList = {
            };

      mapSignals(il, ppList);
      }
}

