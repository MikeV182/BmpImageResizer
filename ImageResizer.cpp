#include "ImageResizer.h"

Image ImageResizer::get_box(const int w, const char* path) {
    auto i = images.find(w);
    if (i == images.end()) {
        Image img;
        img.Read(path);
        img.resize(w, w);

        bool b;
        std::tie(i, b) = images.emplace(w, img);
    }
    return i->second;
}
