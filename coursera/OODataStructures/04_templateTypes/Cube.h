namespace dsp {
  class Cube {
  public:
    Cube(double length, char color);
    double getLength() const;
    double getVolume() const;
    double getSurfaceArea() const;
    void setLength(double length);

  private:
    double length_;
    char color_;
  };
}
