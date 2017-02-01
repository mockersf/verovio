/////////////////////////////////////////////////////////////////////////////
// Name:        turn.cpp
// Author:      Klaus Rettinghaus
// Created:     2017
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#include "turn.h"

//----------------------------------------------------------------------------

#include <assert.h>

//----------------------------------------------------------------------------

#include "aligner.h"

namespace vrv {

//----------------------------------------------------------------------------
// Turn
//----------------------------------------------------------------------------

Turn::Turn() : ControlElement("turn-"), TimePointInterface(), AttColor(), AttPlacement(), vrv::AttTurnLog()
{
    RegisterInterface(TimePointInterface::GetAttClasses(), TimePointInterface::IsInterface());
    RegisterAttClass(ATT_COLOR);
    RegisterAttClass(ATT_PLACEMENT);
    RegisterAttClass(ATT_TURNLOG);

    Reset();
}

Turn::~Turn()
{
}

void Turn::Reset()
{
    ControlElement::Reset();
    TimePointInterface::Reset();
    ResetColor();
    ResetPlacement();
    ResetTurnLog();
}

//----------------------------------------------------------------------------
// Turn functor methods
//----------------------------------------------------------------------------

} // namespace vrv
