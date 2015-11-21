/*
The MIT License (MIT)

Copyright (c) 2015 Nrupatunga

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#include <string>
#include <iostream>
#include <opencv2\opencv.hpp>
#include <CannyED.hpp>
#include <vld.h>

#pragma comment(lib, "opencv_core300d.lib") // core functionalities
#pragma comment(lib, "opencv_highgui300d.lib") //GUI
#pragma comment(lib, "opencv_imgcodecs300d.lib")
#pragma comment(lib, "opencv_imgproc300d.lib") // Histograms, Edge detection
#pragma comment(lib, "opencv_video300d.lib")
#pragma comment(lib, "opencv_videoio300d.lib")

using namespace cv;
using namespace std;

#define PI (3.1412)

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */

int main ( int argc, char *argv[] )
{
	 Mat sMatInput = imread("..\\flower.jpg", IMREAD_GRAYSCALE);
	 Mat sMatOutput;

	 String strWinIn = "Input";
	 String strWinOut = "Output";

	 CannyED(sMatInput, sMatOutput, 10, 40);
	 namedWindow(strWinIn, WINDOW_NORMAL);
	 namedWindow(strWinOut, WINDOW_NORMAL);
	 imshow(strWinIn, sMatInput);
	 imshow(strWinOut, sMatOutput);
	 waitKey(0);
	return EXIT_SUCCESS;

} /* ----------  end of function main  ---------- */

