# Microsoft Developer Studio Project File - Name="LiveMedia" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=LiveMedia - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "LiveMedia.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "LiveMedia.mak" CFG="LiveMedia - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "LiveMedia - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "LiveMedia - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "LiveMedia - Win32 Release"

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
# ADD CPP /nologo /W3 /GX /O2 /I ".\include" /I "..\groupsock\include" /I "..\BasicUsageEnvironment\include" /I "..\UsageEnvironment\include" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\lib\Release\LiveMedia.lib"

!ELSEIF  "$(CFG)" == "LiveMedia - Win32 Debug"

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
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ  /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I ".\include" /I "..\groupsock\include" /I "..\BasicUsageEnvironment\include" /I "..\UsageEnvironment\include" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ  /c
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\lib\Debug\LiveMedia.lib"

!ENDIF 

# Begin Target

# Name "LiveMedia - Win32 Release"
# Name "LiveMedia - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\AACAudioMatroskaFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\AC3AudioFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\AC3AudioMatroskaFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\AC3AudioRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\AC3AudioRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\AC3AudioStreamFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\ADTSAudioFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\ADTSAudioFileSource.cpp
# End Source File
# Begin Source File

SOURCE=.\AMRAudioFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\AMRAudioFileSink.cpp
# End Source File
# Begin Source File

SOURCE=.\AMRAudioFileSource.cpp
# End Source File
# Begin Source File

SOURCE=.\AMRAudioRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\AMRAudioRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\AMRAudioSource.cpp
# End Source File
# Begin Source File

SOURCE=.\AudioInputDevice.cpp
# End Source File
# Begin Source File

SOURCE=.\AudioRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\AVIFileSink.cpp
# End Source File
# Begin Source File

SOURCE=.\Base64.cpp
# End Source File
# Begin Source File

SOURCE=.\BasicUDPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\BasicUDPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\BitVector.cpp
# End Source File
# Begin Source File

SOURCE=.\ByteStreamFileSource.cpp
# End Source File
# Begin Source File

SOURCE=.\ByteStreamMemoryBufferSource.cpp
# End Source File
# Begin Source File

SOURCE=.\ByteStreamMultiFileSource.cpp
# End Source File
# Begin Source File

SOURCE=.\DarwinInjector.cpp
# End Source File
# Begin Source File

SOURCE=.\DeviceSource.cpp
# End Source File
# Begin Source File

SOURCE=.\DigestAuthentication.cpp
# End Source File
# Begin Source File

SOURCE=.\DVVideoFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\DVVideoRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\DVVideoRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\DVVideoStreamFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\EBMLNumber.cpp
# End Source File
# Begin Source File

SOURCE=.\FileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\FileSink.cpp
# End Source File
# Begin Source File

SOURCE=.\FramedFileSource.cpp
# End Source File
# Begin Source File

SOURCE=.\FramedFilter.cpp
# End Source File
# Begin Source File

SOURCE=.\FramedSource.cpp
# End Source File
# Begin Source File

SOURCE=.\GSMAudioRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\H261VideoRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\H263plusVideoFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\H263plusVideoRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\H263plusVideoRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\H263plusVideoStreamFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\H263plusVideoStreamParser.cpp
# End Source File
# Begin Source File

SOURCE=.\H264VideoFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\H264VideoFileSink.cpp
# End Source File
# Begin Source File

SOURCE=.\H264VideoMatroskaFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\H264VideoRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\H264VideoRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\H264VideoStreamDiscreteFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\H264VideoStreamFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\InputFile.cpp
# End Source File
# Begin Source File

SOURCE=.\JPEGVideoRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\JPEGVideoRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\JPEGVideoSource.cpp
# End Source File
# Begin Source File

SOURCE=.\Locale.cpp
# End Source File
# Begin Source File

SOURCE=.\MatroskaDemuxedTrack.cpp
# End Source File
# Begin Source File

SOURCE=.\MatroskaFile.cpp
# End Source File
# Begin Source File

SOURCE=.\MatroskaFileParser.cpp
# End Source File
# Begin Source File

SOURCE=.\MatroskaFileServerDemux.cpp
# End Source File
# Begin Source File

SOURCE=.\Media.cpp
# End Source File
# Begin Source File

SOURCE=.\MediaSession.cpp
# End Source File
# Begin Source File

SOURCE=.\MediaSink.cpp
# End Source File
# Begin Source File

SOURCE=.\MediaSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3ADU.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3ADUdescriptor.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3ADUinterleaving.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3ADURTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3ADURTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3ADUTranscoder.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3AudioFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3AudioMatroskaFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3FileSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3Internals.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3InternalsHuffman.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3InternalsHuffmanTable.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3StreamState.cpp
# End Source File
# Begin Source File

SOURCE=.\MP3Transcoder.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2AudioRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2AudioRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2AudioStreamFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2Demux.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2DemuxedElementaryStream.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2DemuxedServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2FileServerDemux.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2VideoFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2VideoRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2VideoRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2VideoStreamDiscreteFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG1or2VideoStreamFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG2IndexFromTransportStream.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG2TransportFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG2TransportStreamFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG2TransportStreamFromESSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG2TransportStreamFromPESSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG2TransportStreamIndexFile.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG2TransportStreamMultiplexor.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG2TransportStreamTrickModeFilter.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG2TransportUDPServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG4ESVideoRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG4ESVideoRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG4GenericRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG4GenericRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG4LATMAudioRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG4LATMAudioRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG4VideoFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG4VideoStreamDiscreteFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEG4VideoStreamFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEGVideoStreamFramer.cpp
# End Source File
# Begin Source File

SOURCE=.\MPEGVideoStreamParser.cpp
# End Source File
# Begin Source File

SOURCE=.\MultiFramedRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\MultiFramedRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\OnDemandServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\our_md5.c
# End Source File
# Begin Source File

SOURCE=.\our_md5hl.c
# End Source File
# Begin Source File

SOURCE=.\OutputFile.cpp
# End Source File
# Begin Source File

SOURCE=.\PassiveServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\ProxyServerMediaSession.cpp
# End Source File
# Begin Source File

SOURCE=.\QCELPAudioRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\QuickTimeFileSink.cpp
# End Source File
# Begin Source File

SOURCE=.\QuickTimeGenericRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\RTCP.cpp
# End Source File
# Begin Source File

SOURCE=.\rtcp_from_spec.c
# End Source File
# Begin Source File

SOURCE=.\RTPInterface.cpp
# End Source File
# Begin Source File

SOURCE=.\RTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\RTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\RTSPClient.cpp
# End Source File
# Begin Source File

SOURCE=.\RTSPCommon.cpp
# End Source File
# Begin Source File

SOURCE=.\RTSPServer.cpp
# End Source File
# Begin Source File

SOURCE=.\RTSPServerSupportingHTTPStreaming.cpp
# End Source File
# Begin Source File

SOURCE=.\ServerMediaSession.cpp
# End Source File
# Begin Source File

SOURCE=.\SimpleRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\SimpleRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\SIPClient.cpp
# End Source File
# Begin Source File

SOURCE=.\StreamParser.cpp
# End Source File
# Begin Source File

SOURCE=.\StreamReplicator.cpp
# End Source File
# Begin Source File

SOURCE=.\T140TextMatroskaFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\T140TextRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\TCPStreamSink.cpp
# End Source File
# Begin Source File

SOURCE=.\TextRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\uLawAudioFilter.cpp
# End Source File
# Begin Source File

SOURCE=.\VideoRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\VorbisAudioMatroskaFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\VorbisAudioRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\VorbisAudioRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\VP8VideoMatroskaFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\VP8VideoRTPSink.cpp
# End Source File
# Begin Source File

SOURCE=.\VP8VideoRTPSource.cpp
# End Source File
# Begin Source File

SOURCE=.\WAVAudioFileServerMediaSubsession.cpp
# End Source File
# Begin Source File

SOURCE=.\WAVAudioFileSource.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\our_md5.h
# End Source File
# Begin Source File

SOURCE=.\rtcp_from_spec.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\include\AC3AudioFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\AC3AudioRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\AC3AudioRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\AC3AudioStreamFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\ADTSAudioFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\ADTSAudioFileSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\AMRAudioFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\AMRAudioFileSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\AMRAudioFileSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\AMRAudioRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\AMRAudioRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\AMRAudioSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\AudioInputDevice.hh
# End Source File
# Begin Source File

SOURCE=.\include\AudioRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\AVIFileSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\Base64.hh
# End Source File
# Begin Source File

SOURCE=.\include\BasicUDPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\BasicUDPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\BitVector.hh
# End Source File
# Begin Source File

SOURCE=.\include\ByteStreamFileSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\ByteStreamMemoryBufferSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\ByteStreamMultiFileSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\DarwinInjector.hh
# End Source File
# Begin Source File

SOURCE=.\include\DeviceSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\DigestAuthentication.hh
# End Source File
# Begin Source File

SOURCE=.\include\DVVideoFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\DVVideoRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\DVVideoRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\DVVideoStreamFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\FileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\FileSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\FramedFileSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\FramedFilter.hh
# End Source File
# Begin Source File

SOURCE=.\include\FramedSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\GSMAudioRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\H261VideoRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\H263plusVideoFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\H263plusVideoRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\H263plusVideoRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\H263plusVideoStreamFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\H264VideoFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\H264VideoFileSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\H264VideoRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\H264VideoRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\H264VideoStreamDiscreteFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\H264VideoStreamFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\InputFile.hh
# End Source File
# Begin Source File

SOURCE=.\include\JPEGVideoRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\JPEGVideoRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\JPEGVideoSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\liveMedia.hh
# End Source File
# Begin Source File

SOURCE=.\include\liveMedia_version.hh
# End Source File
# Begin Source File

SOURCE=.\include\Locale.hh
# End Source File
# Begin Source File

SOURCE=.\include\MatroskaFile.hh
# End Source File
# Begin Source File

SOURCE=.\include\MatroskaFileServerDemux.hh
# End Source File
# Begin Source File

SOURCE=.\include\Media.hh
# End Source File
# Begin Source File

SOURCE=.\include\MediaSession.hh
# End Source File
# Begin Source File

SOURCE=.\include\MediaSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\MediaSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MP3ADU.hh
# End Source File
# Begin Source File

SOURCE=.\include\MP3ADUinterleaving.hh
# End Source File
# Begin Source File

SOURCE=.\include\MP3ADURTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\MP3ADURTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MP3ADUTranscoder.hh
# End Source File
# Begin Source File

SOURCE=.\include\MP3AudioFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\MP3FileSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MP3Transcoder.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2AudioRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2AudioRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2AudioStreamFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2Demux.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2DemuxedElementaryStream.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2DemuxedServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2FileServerDemux.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2VideoFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2VideoRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2VideoRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2VideoStreamDiscreteFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG1or2VideoStreamFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG2IndexFromTransportStream.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG2TransportFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG2TransportStreamFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG2TransportStreamFromESSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG2TransportStreamFromPESSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG2TransportStreamIndexFile.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG2TransportStreamMultiplexor.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG2TransportStreamTrickModeFilter.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG2TransportUDPServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG4ESVideoRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG4ESVideoRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG4GenericRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG4GenericRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG4LATMAudioRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG4LATMAudioRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG4VideoFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG4VideoStreamDiscreteFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEG4VideoStreamFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\MPEGVideoStreamFramer.hh
# End Source File
# Begin Source File

SOURCE=.\include\MultiFramedRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\MultiFramedRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\OnDemandServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\OutputFile.hh
# End Source File
# Begin Source File

SOURCE=.\include\PassiveServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\ProxyServerMediaSession.hh
# End Source File
# Begin Source File

SOURCE=.\include\QCELPAudioRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\QuickTimeFileSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\QuickTimeGenericRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\RTCP.hh
# End Source File
# Begin Source File

SOURCE=.\include\RTPInterface.hh
# End Source File
# Begin Source File

SOURCE=.\include\RTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\RTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\RTSPClient.hh
# End Source File
# Begin Source File

SOURCE=.\include\RTSPCommon.hh
# End Source File
# Begin Source File

SOURCE=.\include\RTSPServer.hh
# End Source File
# Begin Source File

SOURCE=.\include\RTSPServerSupportingHTTPStreaming.hh
# End Source File
# Begin Source File

SOURCE=.\include\ServerMediaSession.hh
# End Source File
# Begin Source File

SOURCE=.\include\SimpleRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\SimpleRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\SIPClient.hh
# End Source File
# Begin Source File

SOURCE=.\include\StreamReplicator.hh
# End Source File
# Begin Source File

SOURCE=.\include\T140TextRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\TCPStreamSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\TextRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\uLawAudioFilter.hh
# End Source File
# Begin Source File

SOURCE=.\include\VideoRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\VorbisAudioRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\VorbisAudioRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\VP8VideoRTPSink.hh
# End Source File
# Begin Source File

SOURCE=.\include\VP8VideoRTPSource.hh
# End Source File
# Begin Source File

SOURCE=.\include\WAVAudioFileServerMediaSubsession.hh
# End Source File
# Begin Source File

SOURCE=.\include\WAVAudioFileSource.hh
# End Source File
# End Target
# End Project
