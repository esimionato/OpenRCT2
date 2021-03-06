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

#include "AudioContext.h"

namespace OpenRCT2::Audio
{
    class DummyAudioContext final : public IAudioContext
    {
        IAudioMixer * GetMixer() override { return nullptr; }

        std::vector<std::string> GetOutputDevices() override { return std::vector<std::string>(); }
        void SetOutputDevice(const std::string &deviceName) override { }

        IAudioSource * CreateStreamFromWAV(const std::string &path) override { return nullptr; }

        void StartTitleMusic() override { }

        IAudioChannel * PlaySound(sint32 soundId, sint32 volume, sint32 pan) override { return nullptr; }
        IAudioChannel * PlaySoundAtLocation(sint32 soundId, sint16 x, sint16 y, sint16 z) override { return nullptr; }
        IAudioChannel * PlaySoundPanned(sint32 soundId, sint32 pan, sint16 x, sint16 y, sint16 z) override { return nullptr; }

        void ToggleAllSounds() override { }
        void PauseSounds() override { }
        void UnpauseSounds() override { }

        void StopAll() override { }
        void StopCrowdSound() override { }
        void StopRainSound() override { }
        void StopRideMusic() override { }
        void StopTitleMusic() override { }
        void StopVehicleSounds() override { }
    };

    IAudioContext * CreateDummyAudioContext()
    {
        return new DummyAudioContext();
    }
} // namespace OpenRCT2::Audio
