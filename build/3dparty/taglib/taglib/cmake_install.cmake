# Install script for directory: /Users/admin/Desktop/utag/3dparty/taglib/taglib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
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
   "/usr/local/lib/libtag.a")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib" TYPE STATIC_LIBRARY FILES "/Users/admin/Desktop/utag/build/3dparty/taglib/taglib/libtag.a")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/libtag.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/libtag.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}/usr/local/lib/libtag.a")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/taglib/tag.h;/usr/local/include/taglib/fileref.h;/usr/local/include/taglib/audioproperties.h;/usr/local/include/taglib/taglib_export.h;/usr/local/include/taglib/taglib_config.h;/usr/local/include/taglib/taglib.h;/usr/local/include/taglib/tstring.h;/usr/local/include/taglib/tlist.h;/usr/local/include/taglib/tlist.tcc;/usr/local/include/taglib/tstringlist.h;/usr/local/include/taglib/tbytevector.h;/usr/local/include/taglib/tbytevectorlist.h;/usr/local/include/taglib/tbytevectorstream.h;/usr/local/include/taglib/tiostream.h;/usr/local/include/taglib/tfile.h;/usr/local/include/taglib/tfilestream.h;/usr/local/include/taglib/tmap.h;/usr/local/include/taglib/tmap.tcc;/usr/local/include/taglib/tpropertymap.h;/usr/local/include/taglib/trefcounter.h;/usr/local/include/taglib/tdebuglistener.h;/usr/local/include/taglib/mpegfile.h;/usr/local/include/taglib/mpegproperties.h;/usr/local/include/taglib/mpegheader.h;/usr/local/include/taglib/xingheader.h;/usr/local/include/taglib/id3v1tag.h;/usr/local/include/taglib/id3v1genres.h;/usr/local/include/taglib/id3v2extendedheader.h;/usr/local/include/taglib/id3v2frame.h;/usr/local/include/taglib/id3v2header.h;/usr/local/include/taglib/id3v2synchdata.h;/usr/local/include/taglib/id3v2footer.h;/usr/local/include/taglib/id3v2framefactory.h;/usr/local/include/taglib/id3v2tag.h;/usr/local/include/taglib/attachedpictureframe.h;/usr/local/include/taglib/commentsframe.h;/usr/local/include/taglib/eventtimingcodesframe.h;/usr/local/include/taglib/generalencapsulatedobjectframe.h;/usr/local/include/taglib/ownershipframe.h;/usr/local/include/taglib/popularimeterframe.h;/usr/local/include/taglib/privateframe.h;/usr/local/include/taglib/relativevolumeframe.h;/usr/local/include/taglib/synchronizedlyricsframe.h;/usr/local/include/taglib/textidentificationframe.h;/usr/local/include/taglib/uniquefileidentifierframe.h;/usr/local/include/taglib/unknownframe.h;/usr/local/include/taglib/unsynchronizedlyricsframe.h;/usr/local/include/taglib/urllinkframe.h;/usr/local/include/taglib/chapterframe.h;/usr/local/include/taglib/tableofcontentsframe.h;/usr/local/include/taglib/podcastframe.h;/usr/local/include/taglib/oggfile.h;/usr/local/include/taglib/oggpage.h;/usr/local/include/taglib/oggpageheader.h;/usr/local/include/taglib/xiphcomment.h;/usr/local/include/taglib/vorbisfile.h;/usr/local/include/taglib/vorbisproperties.h;/usr/local/include/taglib/oggflacfile.h;/usr/local/include/taglib/speexfile.h;/usr/local/include/taglib/speexproperties.h;/usr/local/include/taglib/opusfile.h;/usr/local/include/taglib/opusproperties.h;/usr/local/include/taglib/flacfile.h;/usr/local/include/taglib/flacpicture.h;/usr/local/include/taglib/flacproperties.h;/usr/local/include/taglib/flacmetadatablock.h;/usr/local/include/taglib/apefile.h;/usr/local/include/taglib/apeproperties.h;/usr/local/include/taglib/apetag.h;/usr/local/include/taglib/apefooter.h;/usr/local/include/taglib/apeitem.h;/usr/local/include/taglib/mpcfile.h;/usr/local/include/taglib/mpcproperties.h;/usr/local/include/taglib/wavpackfile.h;/usr/local/include/taglib/wavpackproperties.h;/usr/local/include/taglib/trueaudiofile.h;/usr/local/include/taglib/trueaudioproperties.h;/usr/local/include/taglib/rifffile.h;/usr/local/include/taglib/aifffile.h;/usr/local/include/taglib/aiffproperties.h;/usr/local/include/taglib/wavfile.h;/usr/local/include/taglib/wavproperties.h;/usr/local/include/taglib/infotag.h;/usr/local/include/taglib/asffile.h;/usr/local/include/taglib/asfproperties.h;/usr/local/include/taglib/asftag.h;/usr/local/include/taglib/asfattribute.h;/usr/local/include/taglib/asfpicture.h;/usr/local/include/taglib/mp4file.h;/usr/local/include/taglib/mp4atom.h;/usr/local/include/taglib/mp4tag.h;/usr/local/include/taglib/mp4item.h;/usr/local/include/taglib/mp4properties.h;/usr/local/include/taglib/mp4coverart.h;/usr/local/include/taglib/modfilebase.h;/usr/local/include/taglib/modfile.h;/usr/local/include/taglib/modtag.h;/usr/local/include/taglib/modproperties.h;/usr/local/include/taglib/itfile.h;/usr/local/include/taglib/itproperties.h;/usr/local/include/taglib/s3mfile.h;/usr/local/include/taglib/s3mproperties.h;/usr/local/include/taglib/xmfile.h;/usr/local/include/taglib/xmproperties.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/include/taglib" TYPE FILE FILES
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/tag.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/fileref.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/audioproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/taglib_export.h"
    "/Users/admin/Desktop/utag/build/3dparty/taglib/taglib/../taglib_config.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/taglib.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tstring.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tlist.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tlist.tcc"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tstringlist.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tbytevector.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tbytevectorlist.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tbytevectorstream.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tiostream.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tfilestream.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tmap.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tmap.tcc"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tpropertymap.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/trefcounter.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/toolkit/tdebuglistener.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/mpegfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/mpegproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/mpegheader.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/xingheader.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v1/id3v1tag.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v1/id3v1genres.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2extendedheader.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2frame.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2header.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2synchdata.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2footer.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2framefactory.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/id3v2tag.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/attachedpictureframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/commentsframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/eventtimingcodesframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/generalencapsulatedobjectframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/ownershipframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/popularimeterframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/privateframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/relativevolumeframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/synchronizedlyricsframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/textidentificationframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/uniquefileidentifierframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/unknownframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/unsynchronizedlyricsframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/urllinkframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/chapterframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/tableofcontentsframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpeg/id3v2/frames/podcastframe.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/oggfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/oggpage.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/oggpageheader.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/xiphcomment.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/vorbis/vorbisfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/vorbis/vorbisproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/flac/oggflacfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/speex/speexfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/speex/speexproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/opus/opusfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ogg/opus/opusproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/flac/flacfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/flac/flacpicture.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/flac/flacproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/flac/flacmetadatablock.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ape/apefile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ape/apeproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ape/apetag.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ape/apefooter.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/ape/apeitem.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpc/mpcfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mpc/mpcproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/wavpack/wavpackfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/wavpack/wavpackproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/trueaudio/trueaudiofile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/trueaudio/trueaudioproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/riff/rifffile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/riff/aiff/aifffile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/riff/aiff/aiffproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/riff/wav/wavfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/riff/wav/wavproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/riff/wav/infotag.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/asf/asffile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/asf/asfproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/asf/asftag.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/asf/asfattribute.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/asf/asfpicture.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mp4/mp4file.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mp4/mp4atom.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mp4/mp4tag.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mp4/mp4item.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mp4/mp4properties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mp4/mp4coverart.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mod/modfilebase.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mod/modfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mod/modtag.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/mod/modproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/it/itfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/it/itproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/s3m/s3mfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/s3m/s3mproperties.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/xm/xmfile.h"
    "/Users/admin/Desktop/utag/3dparty/taglib/taglib/xm/xmproperties.h"
    )
endif()

