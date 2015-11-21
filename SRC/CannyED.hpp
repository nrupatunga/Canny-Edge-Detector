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

#ifndef __CANNY_EDGE__
#define __CANNY_EDGE__

#include <opencv2\opencv.hpp>

using namespace cv;

class CannyED
{
	public:
		CannyED():ks32NonMaxFiltLen(5){};                             /* constructor */
		CannyED(Mat &sMatInput, Mat &sMatOutput, double dThreshold1, double dThreshold2);
		~CannyED(){};

	private:
		const int ks32NonMaxFiltLen;//Filter size for non-max suppression
		Mat sMatCannyEdge;
		/* ====================  METHODS       ======================================= */
		void NonMaxSuppression(Mat &sMatGrad, Mat &sMatThinEdge, Mat &sMatEdgeOrientation);
		void Hysteresis(Mat &sMatThinEdge, Mat &sMatEdgeMap, double dThOne, double dThTwo);
		void Trace(Mat &sMatThinEdge, Mat &sMatEdgeMap, int s32Y, int s32X, double dThOne);

}; /* -----  end of class CannyED  ----- */
#endif
