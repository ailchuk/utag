export CMAKE_PREFIX_PATH="/usr/local/Cellar/qt/5.15.1/lib/cmake:$CMAKE_PREFIX_PATH"

cmake . -Bbuild -Wdev -Werror=dev && cmake --build ./build