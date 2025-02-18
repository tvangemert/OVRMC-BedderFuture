![language](https://img.shields.io/badge/Language-C%2B%2B11-green.svg)  ![dependencies](https://img.shields.io/badge/Dependencies-Boost%201.80-green.svg)  ![license_gpl3](https://img.shields.io/badge/License-GPL%203.0-green.svg)

# Towards a Bedder Future: A Study of Using Virtual Reality while Lying Down

![Three examples of our participants using Virtual Reality (VR) while lying down: The top row shows their VR view and the bottom row their movement in the moment. On the left, a participant relaxes in bed while traveling through the mountains. In the middle, another is sitting up to dodge a wall in a rhythm game. On the right, a participant is leaning to aim a catapult.](teaser_drawn.jpeg "Teaser figure")

This repository contains the code and publication of the "Towards a Bedder Future" project by Van Gemert et al., 2023.
This code is a modification of the OpenVR-MotionCompensation project (see fork) and was used in a research project at the University of Copenhagen that investigated the use of VR while lying down.
Our modifications allows us to rotate the virtual world based on a tracked device (e.g., an HTC Vive puck) and also compensate the pose of the controllers (this is new compared to original project).

## Paper
The paper is available as Open Access (CC-BY 4.0) here: [Towards a Bedder Future (ACM DL)](https://doi.org/10.1145/3544548.3580963)
The DOI is: 10.1145/3544548.3580963

**ACM Reference Format:**
Thomas van Gemert, Kasper Hornbæk, Jarrod Knibbe, and Joanna Bergström. 2023. Towards a Bedder Future: A Study of Using Virtual Reality while Lying Down. In Proceedings of the 2023 CHI Conference on Human Factors in Computing Systems (CHI '23), April 23–28, 2023, Hamburg, Germany. ACM, New York, NY, USA 18 Pages. https://doi.org/10.1145/3544548.3580963

## Abstract
Most contemporary Virtual Reality (VR) experiences are made for standing users. However, when a user is lying down---either by choice or necessity---it is unclear how they can walk around, dodge obstacles, or grab distant objects. We rotate the virtual coordinate space to study the movement requirements and user experience of using VR while lying down. Fourteen experienced VR users engaged with various popular VR applications for 40 minutes in a study using a think-aloud protocol and semi-structured interviews. Thematic analysis of captured videos and interviews reveals that using VR while lying down is comfortable and usable and that the virtual perspective produces a potent illusion of standing up. However, commonplace movements in VR are surprisingly difficult when lying down, and using alternative interactions is fatiguing and hampers performance. To conclude, we discuss design opportunities to tackle the most significant challenges and to create new experiences.

## How it works
TODO

# Usage
TODO. In a nutshell: if the installation worked well, you should have a new overlay available in SteamVR.
When you open it, you select a tracked device as the origin (e.g., an HTC Vive tracker), press Enable, and rotate the tracker.
By default the transform is applied to the HMD and two controllers. If you have more devices connected this might break.

# Setup

## Beta Version, may cause crashes or contain bugs!

Confirmed Working With..

- SteamVR v1.22.13
- HTC Vive
- HTC Vive wands (2x)
- Valve Index Knuckles (2x)
- HTC Vice Tracker

## Installation

0. You can find the installer and modified binaries you need in the ./Installer folder.
1. Run the installer v3.6.0 from the original project (https://ovrmc.dschadu.de/en/Download).
2. Copy and overwrite the code from ./Installer/OVRMC-Overlay-BedderFuture-0.3.6.7z to the installation directory of OVRMC (C:\Program Files\OpenVR-MotionCompensation) and overwrite.
3. Copy and overwrite the DLL ./Installer/driver_00vrmotioncompensation.dll to the SteamVR driver (C:\Program Files (x86)\Steam\steamapps\common\SteamVR\drivers\00vrmotioncompensation\bin\win64) and overwrite.
4. Start SteamVR. Start MotionCompensation from either the in-game overlay or startdesktopmode.bat in the install dir.

## Building

### Dependencies
1. Boost C++ Libraries 1.80 for MSVC v143 64-bit. You can get these from https://sourceforge.net/projects/boost/
2. Qt Framework 5 with MSVC 2019 support (you may drop everything else). You can get the free Open-Source SDK from https://download.qt.io/archive/qt/5.15/5.15.8/single/
3. OpenVR headers. You can get these in the included directory or at https://github.com/ValveSoftware/openvr/
4. MSVC v143 with C++ 11 support.
5. Windows 10 SDK.

### Build steps
1. Set Visual Studio to Release/x64 target.
3. Set up the $(QTDIR), $(OPENVR_ROOT), $(BOOST_ROOT), and $(BOOST_LIB) macros correctly in the three .vcxproj files.
4. Build solution in Visual Studio.
5. Edit the path to your Qt MSVC tools in ./client_overlay/bin/windeployqt.bat
6. Run windeployqt.bat
7. Copy binaries as instructed above.

# To-Do

1. Fix the offset field not updating / offsets not applying.
2. Implement rotation offsets.
3. Implement auto-offsets.
4. Investigate throwing bugs (wrong direction).
5. Update to use v3.7.0

# Original README - OpenVR-MotionCompensation

An OpenVR driver that allows to enable motion compensation.
Includes a dashboard to configure the settings directly in VR.

This driver hooks into the device driver and allows to modify any pose updates coming from the HMD before they reach the OpenVR runtime. 
Due to the nature of this hack the driver may break when Valve decides to update the driver-side OpenVR API.

The motivation of this driver is to allow the base of motion simulators (driving or flying) to be the reference point for the world, cancelling out simulator movement and differencing head movement from the simulator movement to update the pose.

Visit https://ovrmc.dschadu.de/ for more information!

# License

This software is released under GPL 3.0.
