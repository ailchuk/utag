# Install script for directory: /Users/ailchuk/Desktop/utag/3dparty/taglib/taglib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/ailchuk/.brew")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/ailchuk/.brew/lib/libtag.a")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Users/ailchuk/.brew/lib" TYPE STATIC_LIBRARY FILES "/Users/ailchuk/Desktop/utag/build/3dparty/taglib/taglib/libtag.a")
  if(EXISTS "$ENV{DESTDIR}/Users/ailchuk/.brew/lib/libtag.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/Users/ailchuk/.brew/lib/libtag.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}/Users/ailchuk/.brew/lib/libtag.a")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/ailchuk/.brew/include/taglib/tag.h;/Users/ailchuk/.brew/include/taglib/fileref.h;/Users/ailchuk/.brew/include/taglib/audioproperties.h;/Users/ailchuk/.brew/include/taglib/taglib_export.h;/Users/ailchuk/.brew/include/taglib/taglib_config.h;/Users/ailchuk/.brew/include/taglib/taglib.h;/Users/ailchuk/.brew/include/taglib/tstring.h;/Users/ailchuk/.brew/include/taglib/tlist.h;/Users/ailchuk/.brew/include/taglib/tlist.tcc;/Users/ailchuk/.brew/include/taglib/tstringlist.h;/Users/ailchuk/.brew/include/taglib/tbytevector.h;/Users/ailchuk/.brew/include/taglib/tbytevectorlist.h;/Users/ailchuk/.brew/include/taglib/tbytevectorstream.h;/Users/ailchuk/.brew/include/taglib/tiostream.h;/Users/ailchuk/.brew/include/taglib/tfile.h;/Users/ailchuk/.brew/include/taglib/tfilestream.h;/Users/ailchuk/.brew/include/taglib/tmap.h;/Users/ailchuk/.brew/include/taglib/tmap.tcc;/Users/ailchuk/.brew/include/taglib/tpropertymap.h;/Users/ailchuk/.brew/include/taglib/trefcounter.h;/Users/ailchuk/.brew/include/taglib/tdebuglistener.h;/Users/ailchuk/.brew/include/taglib/mpegfile.h;/Users/ailchuk/.brew/include/taglib/mpegproperties.h;/Users/ailchuk/.brew/include/taglib/mpegheader.h;/Users/ailchuk/.brew/include/taglib/xingheader.h;/Users/ailchuk/.brew/include/taglib/id3v1tag.h;/Users/ailchuk/.brew/include/taglib/id3v1genres.h;/Users/ailchuk/.brew/include/taglib/id3v2.h;/Users/ailchuk/.brew/include/taglib/id3v2extendedheader.h;/Users/ailchuk/.brew/include/taglib/id3v2frame.h;/Users/ailchuk/.brew/include/taglib/id3v2header.h;/Users/ailchuk/.brew/include/taglib/id3v2synchdata.h;/Users/ailchuk/.brew/include/taglib/id3v2footer.h;/Users/ailchuk/.brew/include/taglib/id3v2framefactory.h;/Users/ailchuk/.brew/include/taglib/id3v2tag.h;/Users/ailchuk/.brew/include/taglib/attachedpictureframe.h;/Users/ailchuk/.brew/include/taglib/commentsframe.h;/Users/ailchuk/.brew/include/taglib/eventtimingcodesframe.h;/Users/ailchuk/.brew/include/taglib/generalencapsulatedobjectframe.h;/Users/ailchuk/.brew/include/taglib/ownershipframe.h;/Users/ailchuk/.brew/include/taglib/popularimeterframe.h;/Users/ailchuk/.brew/include/taglib/privateframe.h;/Users/ailchuk/.brew/include/taglib/relativevolumeframe.h;/Users/ailchuk/.brew/include/taglib/synchronizedlyricsframe.h;/Users/ailchuk/.brew/include/taglib/textidentificationframe.h;/Users/ailchuk/.brew/include/taglib/uniquefileidentifierframe.h;/Users/ailchuk/.brew/include/taglib/unknownframe.h;/Users/ailchuk/.brew/include/taglib/unsynchronizedlyricsframe.h;/Users/ailchuk/.brew/include/taglib/urllinkframe.h;/Users/ailchuk/.brew/include/taglib/chapterframe.h;/Users/ailchuk/.brew/include/taglib/tableofcontentsframe.h;/Users/ailchuk/.brew/include/taglib/podcastframe.h;/Users/ailchuk/.brew/include/taglib/oggfile.h;/Users/ailchuk/.brew/include/taglib/oggpage.h;/Users/ailchuk/.brew/include/taglib/oggpageheader.h;/Users/ailchuk/.brew/include/taglib/xiphcomment.h;/Users/ailchuk/.brew/include/taglib/vorbisfile.h;/Users/ailchuk/.brew/include/taglib/vorbisproperties.h;/Users/ailchuk/.brew/include/taglib/oggflacfile.h;/Users/ailchuk/.brew/include/taglib/speexfile.h;/Users/ailchuk/.brew/include/taglib/speexproperties.h;/Users/ailchuk/.brew/include/taglib/opusfile.h;/Users/ailchuk/.brew/include/taglib/opusproperties.h;/Users/ailchuk/.brew/include/taglib/flacfile.h;/Users/ailchuk/.brew/include/taglib/flacpicture.h;/Users/ailchuk/.brew/include/taglib/flacproperties.h;/Users/ailchuk/.brew/include/taglib/flacmetadatablock.h;/Users/ailchuk/.brew/include/taglib/apefile.h;/Users/ailchuk/.brew/include/taglib/apeproperties.h;/Users/ailchuk/.brew/include/taglib/apetag.h;/Users/ailchuk/.brew/include/taglib/apefooter.h;/Users/ailchuk/.brew/include/taglib/apeitem.h;/Users/ailchuk/.brew/include/taglib/mpcfile.h;/Users/ailchuk/.brew/include/taglib/mpcproperties.h;/Users/ailchuk/.brew/include/taglib/wavpackfile.h;/Users/ailchuk/.brew/include/taglib/wavpackproperties.h;/Users/ailchuk/.brew/include/taglib/trueaudiofile.h;/Users/ailchuk/.brew/include/taglib/trueaudioproperties.h;/Users/ailchuk/.brew/include/taglib/rifffile.h;/Users/ailchuk/.brew/include/taglib/aifffile.h;/Users/ailchuk/.brew/include/taglib/aiffproperties.h;/Users/ailchuk/.brew/include/taglib/wavfile.h;/Users/ailchuk/.brew/include/taglib/wavproperties.h;/Users/ailchuk/.brew/include/taglib/infotag.h;/Users/ailchuk/.brew/include/taglib/asffile.h;/Users/ailchuk/.brew/include/taglib/asfproperties.h;/Users/ailchuk/.brew/include/taglib/asftag.h;/Users/ailchuk/.brew/include/taglib/asfattribute.h;/Users/ailchuk/.brew/include/taglib/asfpicture.h;/Users/ailchuk/.brew/include/taglib/mp4file.h;/Users/ailchuk/.brew/include/taglib/mp4atom.h;/Users/ailchuk/.brew/include/taglib/mp4tag.h;/Users/ailchuk/.brew/include/taglib/mp4item.h;/Users/ailchuk/.brew/include/taglib/mp4properties.h;/Users/ailchuk/.brew/include/taglib/mp4coverart.h;/Users/ailchuk/.brew/include/taglib/modfilebase.h;/Users/ailchuk/.brew/include/taglib/modfile.h;/Users/ailchuk/.brew/include/taglib/modtag.h;/Users/ailchuk/.brew/include/taglib/modproperties.h;/Users/ailchuk/.brew/include/taglib/itfile.h;/Users/ailchuk/.brew/include/taglib/itproperties.h;/Users/ailchuk/.brew/include/taglib/s3mfile.h;/Users/ailchuk/.brew/include/taglib/s3mproperties.h;/Users/ailchuk/.brew/include/taglib/xmfile.h;/Users/ailchuk/.brew/include/taglib/xmproperties.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Users/ailchuk/.brew/include/taglib" TYPE FILE FILES
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/tag.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/fileref.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/audioproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/taglib_export.h"
    "/Users/ailchuk/Desktop/utag/build/3dparty/taglib/taglib/../taglib_config.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/taglib.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tstring.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tlist.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tlist.tcc"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tstringlist.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tbytevector.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tbytevectorlist.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tbytevectorstream.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tiostream.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tfilestream.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tmap.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tmap.tcc"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tpropertymap.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/trefcounter.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/toolkit/tdebuglistener.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/mpegfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/mpegproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/mpegheader.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/xingheader.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v1/id3v1tag.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v1/id3v1genres.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2extendedheader.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2frame.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2header.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2synchdata.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2footer.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2framefactory.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2tag.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/attachedpictureframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/commentsframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/eventtimingcodesframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/generalencapsulatedobjectframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/ownershipframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/popularimeterframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/privateframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/relativevolumeframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/synchronizedlyricsframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/textidentificationframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/uniquefileidentifierframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/unknownframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/unsynchronizedlyricsframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/urllinkframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/chapterframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/tableofcontentsframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/podcastframe.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/oggfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/oggpage.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/oggpageheader.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/xiphcomment.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/vorbis/vorbisfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/vorbis/vorbisproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/flac/oggflacfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/speex/speexfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/speex/speexproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/opus/opusfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ogg/opus/opusproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/flac/flacfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/flac/flacpicture.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/flac/flacproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/flac/flacmetadatablock.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ape/apefile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ape/apeproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ape/apetag.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ape/apefooter.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/ape/apeitem.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpc/mpcfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mpc/mpcproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/wavpack/wavpackfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/wavpack/wavpackproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/trueaudio/trueaudiofile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/trueaudio/trueaudioproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/riff/rifffile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/riff/aiff/aifffile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/riff/aiff/aiffproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/riff/wav/wavfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/riff/wav/wavproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/riff/wav/infotag.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/asf/asffile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/asf/asfproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/asf/asftag.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/asf/asfattribute.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/asf/asfpicture.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mp4/mp4file.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mp4/mp4atom.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mp4/mp4tag.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mp4/mp4item.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mp4/mp4properties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mp4/mp4coverart.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mod/modfilebase.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mod/modfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mod/modtag.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/mod/modproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/it/itfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/it/itproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/s3m/s3mfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/s3m/s3mproperties.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/xm/xmfile.h"
    "/Users/ailchuk/Desktop/utag/3dparty/taglib/taglib/xm/xmproperties.h"
    )
endif()

