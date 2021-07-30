#include <opencv2/highgui.hpp>
#include <iostream>

int main( int argc, char** argv ) {
  
  cv::Mat image;
  image = cv::imread("sample.jpeg" , cv::IMREAD_COLOR);
  std::cout << "line 01" << std::endl;
  if(! image.data ) {
      std::cout <<  "Could not open or find the image" << std::endl;
      return -1;
    }
  std::cout << "line 02" << std::endl;
  cv::namedWindow( "Display window", cv::WINDOW_AUTOSIZE);
  cv::imshow( "Display window", image);
  
  cv::waitKey(0);
  return 0;
}
