#ifndef IMAGE_H
#define IMAGE_H
#include <vector>

struct Color {
    float r, g, b;

    Color();
    Color(float r, float g, float b);
    ~Color();
};

class Image {
private:
    int m_width;
    int m_height;
    std::vector<Color> m_colors;

public:
    Image();
    Image(int width, int height);
    ~Image();

    Color GetColor(int x, int y) const;
    void SetColor(const Color& color, int x, int y);
    void Export(const char* path) const;
    void Read(const char* path);
    void resize(int new_width, int new_height);
};

#endif