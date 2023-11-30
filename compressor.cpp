#include <iostream>
#include <fstream>
#include <string>

using namespace std;


bool readPGM(const char* filename, unsigned char*& imageData, size_t& width, size_t& height, size_t& maxVal);
bool writePGM(const char* filename, const unsigned char* imageData, size_t width, size_t height, size_t maxVal);
void compressImage(const unsigned char* inputImageData, size_t width, size_t height, unsigned char*& outputImageData, size_t& outputSize);
unsigned char* resizeImage(const unsigned char* inputImageData, size_t currentWidth, size_t currentHeight, size_t newWidth, size_t newHeight);
void deallocateMemory(unsigned char*& imageData);
