# Microsoft Developer Studio Project File - Name="GroupSock" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=GroupSock - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "GroupSock.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "GroupSock.mak" CFG="GroupSock - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "GroupSock - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "GroupSock - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "GroupSock - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /I ".\include" /I "..\UsageEnvironment\include" /I "..\BasicUsageEnvironment\include" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\lib\Release\GroupSock.lib"

!ELSEIF  "$(CFG)" == "GroupSock - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I ".\include" /I "..\UsageEnvironment\include" /I "..\BasicUsageEnvironment\include" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\lib\Debug\GroupSock.lib"

!ENDIF 

# Begin Target

# Name "GroupSock - Win32 Release"
# Name "GroupSock - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\GroupEId.cpp
# End Source File
# Begin Source File

SOURCE=.\Groupsock.cpp
# End Source File
# Begin Source File

SOURCE=.\GroupsockHelper.cpp
# End Source File
# Begin Source File

SOURCE=.\inet.c
# End Source File
# Begin Source File

SOURCE=.\IOHandlers.cpp
# End Source File
# Begin Source File

SOURCE=.\NetAddress.cpp
# End Source File
# Begin Source File

SOURCE=.\NetInterface.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\include\NetCommon.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\include\GroupEId.hh
# End Source File
# Begin Source File

SOURCE=.\include\Groupsock.hh
# End Source File
# Begin Source File

SOURCE=.\include\groupsock_version.hh
# End Source File
# Begin Source File

SOURCE=.\include\GroupsockHelper.hh
# End Source File
# Begin Source File

SOURCE=.\include\IOHandlers.hh
# End Source File
# Begin Source File

SOURCE=.\include\NetAddress.hh
# End Source File
# Begin Source File

SOURCE=.\include\NetInterface.hh
# End Source File
# Begin Source File

SOURCE=.\include\TunnelEncaps.hh
# End Source File
# End Target
# End Project
