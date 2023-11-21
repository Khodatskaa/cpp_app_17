#ifndef BOX_H
#define BOX_H

struct Box
{
public:
    Box();
    Box(double width, double length, double height);
    void setDimensions(double width, double length, double height);
    double calculateVolume() const;

private:
    double width;
    double length;
    double height;
};

#endif 