# 🔊 uTag
## Description
  App to read and write tags of audio files with Qt GUI and Taglib

## How to use

### Must Have (dependencies)
- CMake 3.18.2 or above - https://cmake.org/download
- Qt 5.15 or above - https://www.qt.io/download

### Building
##### First step
If you do not have ```CMAKE_PREFIX_PATH``` you can fix it in 2 ways:
- go into ```utag/CMakeLists.txt``` and add ```set(CMAKE_PREFIX_PATH "/your/path/to/qt")```
- or you can just write in terminal ```export CMAKE_PREFIX_PATH=/your/path/to/qt```
##### Second step
    ./build.sh
### Run
    ./utag [directory]


## App features
- Allows to edit different tags of audio files 
- Supports ```.mp3 .flac .wav .ogg```  audio formats
- Supports to sort audio file items in alphabetical (ascending and descending) and order by selected tags
- Opens the directory with the audio files through the GUI as well as through the command-line argument
- Supports dark and light themes for customizing the look and feel of the editor's entire user interface

    ![First](https://user-images.githubusercontent.com/46691148/94070856-96fcf400-fdfb-11ea-938c-aceead49255f.gif)


## Tech/framework used
 - CMake
 - Qt
 - Taglib

## License
Collision is an open-sourced software licensed under the
[MIT license](LICENSE).
