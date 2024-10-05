#ifndef IMAGE_RESIZER_H
#define IMAGE_RESIZER_H
#include <map>
#include "Image.h"

class ImageResizer {
    std::map<int, Image> images;
public:
    Image get_box(const int w, const char* path);
};

#endif