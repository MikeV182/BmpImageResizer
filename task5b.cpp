#include "Image.h"
#include "ImageResizer.h"

int main(int, char *[]) {
    const char* path = "img/sample_5184x3456.bmp";
    ImageResizer rs;

    rs.get_box(100, path).Export("resizedSamples/sample100x100.bmp");
    rs.get_box(1000, path).Export("resizedSamples/sample1000x1000.bmp");
    rs.get_box(10, path).Export("resizedSamples/sample10x10.bmp");
    
    return 0;
}

// Image copy;
// copy.Read("img/sample_5184x3456.bmp");
// copy.Export("copy.bmp");
