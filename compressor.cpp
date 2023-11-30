#include <iostream>
#include <fstream>
#include <string>

using namespace std;


bool readPGM(const char* filename, unsigned char*& imageData, size_t& width, size_t& height, size_t& maxVal);
bool writePGM(const char* filename, const unsigned char* imageData, size_t width, size_t height, size_t maxVal);
// filename stands for the name of the file to be read, 
// imageData is a pointer to the image data,
// readpgm is where the image data will be stored after reading from the file
// writePGM is the image data that will be written to the file.
// A reference to a size_t variable that represents the maximum grayscale value (often 255 for 8-bit images).
void compressImage(const unsigned char* inputImageData, size_t width, size_t height, unsigned char*& outputImageData, size_t& outputSize);
//size_t width, size_t height: The width and height of the input image.
//unsigned char*& outputImageData: A reference to a pointer where the compressed image data will be stored.
//size_t& outputSize: A reference to a size_t variable where the size of the compressed data will be stored.
unsigned char* resizeImage(const unsigned char* inputImageData, size_t currentWidth, size_t currentHeight, size_t newWidth, size_t newHeight);
//size_t currentWidth, size_t currentHeight: The current width and height of the input image.
//size_t newWidth, size_t newHeight: The desired width and height of the resized image
void deallocateMemory(unsigned char*& imageData);
//unsigned char*& imageData: A reference to a pointer to the image data to be deallocated.



bool readPGM(const char* filename, unsigned char*& imageData, size_t& width, size_t& height, size_t& maxVal)
{
    ifstream file(filename, ios::binary);
    if(!file.is_open())
    {
        cout << "Error: failed to open input file - " << filename << endl;
        return false;
          // scenario which we fail to access to file
    }

// didn't make it by now but here i should read the file and allocate memory etc.
// then read image and close the file etc.
}

bool writePGM(const char* filename, const unsigned char* imageData, size_t width, size_t height, size_t maxVal)
{
    ofstream file(filename, ios::binary);
    if(!file.is_open())
    {
        cout << "Error: failed to open output file - " << filename << endl;
        return false;
        // scenario which we fail to access to output file
    }

// after here, this is to write the file and close it etc.
}

/*
Couldnt decide which one to call first in code, i dont know yet, as i understand:
if we want to make it quickly, we should resize first and then compress it, because compression will be on a smaller size ?????
but i dont know the time difference between them, so i would let the user decide which one to call first.
after a while, i will test the cases and decide which one to call first.
*/
