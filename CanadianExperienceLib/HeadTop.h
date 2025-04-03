/**
 * @file HeadTop.h
 * @author matthew vazquez
 *
 *
 */
 
#ifndef HEADTOP_H
#define HEADTOP_H
#include "ImageDrawable.h"

/**
 * Derived from ImageDrawable, is a moveable top of a head
 */
class HeadTop : public ImageDrawable{
private:
 void DrawEyes(std::shared_ptr<wxGraphicsContext> graphics);
 void DrawEyebrows(std::shared_ptr<wxGraphicsContext> graphics);

public:
 HeadTop(const std::wstring &name, const std::wstring &filename);

 /**
  * Returns if this object is movable
  * @return True
  */
 bool IsMovable() override { return true; };

 void Draw(std::shared_ptr<wxGraphicsContext> graphics) override;
 wxPoint TransformPoint(wxPoint p);
};



#endif //HEADTOP_H
