#ifndef _CITYDATA_
#define _CITYDATA_

struct cityData
{
  double xPos;
  double yPos;
  std::string name;

  cityData(double, double, const std::string&)
  :this->xPos(xPos), this->yPos(yPos),this->name(name){}

  cityData()
  {
    //empty constructor
  }
};
#endif
