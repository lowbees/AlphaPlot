#ifndef BAR2D_H
#define BAR2D_H

#include "../3rdparty/qcustomplot/qcustomplot.h"
#include "Axis2D.h"

class Bar2D : public QCPBars {
  Q_OBJECT
 public:
  Bar2D(Axis2D *xAxis, Axis2D *yAxis);
  ~Bar2D();

  enum BarStyle {
    VerticalNormal,
    HorizontalNornal,
    VerticalStacked,
    HorizontalStacked,
  };

private:

};

#endif  // BAR2D_H