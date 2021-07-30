# face-recognition-opencv-cpp

using opencv4 while build in terminal because using version OpenCV4 in cmake lib for OpenCVConfig

try build and launch from terminal ubuntu after setting cd

``g++ tutorial-cascade-classifier.cpp -o tcc.out `pkg-config --cflags --libs opencv4`.``

launch it with code `./tcc.out`, got error `--(!)Error loading face cascade`

if you try to launch vscode cpp, try to launch from terminal in current directory with `code .`
and still error, terminal said

```
Starting build...

/usr/bin/gcc -gcc /home/muhardianab/Documents/cpp-file/face-recognition-cpp/tutorial-cascade-classifier.cpp -o /home/muhardianab/Documents/cpp-file/face-recognition-cpp/tutorial-cascade-classifier

gcc: error: unrecognized debug output level ‘cc’

Build finished with error(s).

The terminal process failed to launch (exit code: -1).
```

maybe the problem in `launch.json`, `c_cpp_properties.json`, or `tasks.json`, because vscode not detected the problem and pop up said in `launch.json`


`task.json` deleted, try to make again and match it with code in terminal
