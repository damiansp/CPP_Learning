/* light.h */
// Light class def
#ifndef LIGHT_H
#define LIGHT_H

class Light {
 public:
  Light(const char *);
  ~Light();

  void turnOn();
  void turnOff();

 private:
  bool on;
  const char *name;
};

#endif
