#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;
int main()
{
	float histgram[256];
	cv::Mat srcMat = imread("D:\\a\\c.jpg");
	int height = srcMat.rows;
	int width = srcMat.cols;

	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			histgram[srcMat.at<Vec3b>(j, i)[0]] += 1;
		}
	}
	return 0;
}