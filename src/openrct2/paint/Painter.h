#pragma region Copyright (c) 2014-2017 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#pragma once

#include <ctime>
#include "../common.h"

struct rct_drawpixelinfo;

namespace OpenRCT2
{
    namespace Drawing
    {
        interface IDrawingEngine;
    } // namespace Drawing

    namespace Ui
    {
        interface IUiContext;
    } // namespace Ui

    namespace Paint
    {
        class Painter final
        {
        private:
            Ui::IUiContext * const _uiContext;

            time_t  _lastSecond = 0;
            sint32  _currentFPS = 0;
            sint32  _frames     = 0;

        public:
            explicit Painter(Ui::IUiContext * uiContext);
            void Paint(Drawing::IDrawingEngine * de);

        private:
            void PaintFPS(rct_drawpixelinfo * dpi);
            void MeasureFPS();
        };
    } // namespace Paint
} // namespace OpenRCT2
