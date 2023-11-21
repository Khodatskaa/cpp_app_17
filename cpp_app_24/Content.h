#ifndef CONTENT_H
#define CONTENT_H

struct Content
{
public:
    Content();
    Content(double power, int spinSpeed, int heatingTemperature);
    void setParameters(double power, int spinSpeed, int heatingTemperature);
    void startWashing() const;

private:
    double power;
    int spinSpeed;
    int heatingTemperature;
};

#endif 