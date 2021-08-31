# Face Detection OpenCV C++

## Instalation
### Install OpenCV
On Ubuntu can use this tutorial from [OpenCV Documentation](https://docs.opencv.org/4.5.2/d7/d9f/tutorial_linux_install.html)

1. Install minimal preruquisites 
On terminal `sudo apt update && sudo apt install -y cmake g++ wget unzip`

2. Download and package the sources
```
wget -O opencv.zip https://github.com/opencv/opencv/archive/master.zip
wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/master.zip
unzip opencv.zip
unzip opencv_contrib.zip
```

3. Create new directory for build file and switch current directory on it
`mkdir -p build && cd build`

4. Configure or generate build scripts for the preferred build system using cmake
```cmake -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib-master/modules ../opencv-master```

5. Build it
`cmake --build`

6. Build or run compilation process
`make -j4`

7. Check build results
`ls bin`
`ls lib`

8. Install
`sudo make install`

```
By default OpenCV will be installed to the /usr/local directory, all files will be copied to following locations:

/usr/local/bin - executable files
/usr/local/lib - libraries (.so)
/usr/local/cmake/opencv4 - cmake package
/usr/local/include/opencv4 - headers
/usr/local/share/opencv4 - other files (e.g. trained cascades in XML format)
```

## How to use

Use the face detection file

1. If using vscode, rename `vscode` file as `.vscode` as hidden folder and can be detected by vscode. This is vscode setting for build, compiler, and include folder

2. Launch vscode with cpp file, try to launch from terminal in current directory with `code .` to launch vscode from contain folder

3. Run `make` on terminal with current directory of `face-recognition.cpp` file and `MakeFile`

4. - Run `fr-cpp` object file for the result of `face-recognition.cpp` with `./fr-cpp` on terminal

   - if not using MakeFile, you can compile from terminal Ubuntu after setting current directory with this code

``g++ tutorial-cascade-classifier.cpp -o tcc.out `pkg-config --cflags --libs opencv4`.``

5. after done use the face recognition, push `ESC` button to stop capture on the window frame
