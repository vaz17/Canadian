/**
 * @file ViewTimeline.h
 * @author Charles B. Owen
 *
 * View class for the timeline area of the screen.
 */

#ifndef CANADIANEXPERIENCE_VIEWTIMELINE_H
#define CANADIANEXPERIENCE_VIEWTIMELINE_H

#include "PictureObserver.h"

/**
 * View class for the timeline area of the screen.
 */
class ViewTimeline final : public wxWindow, public PictureObserver {
private:
    void OnLeftDown(wxMouseEvent &event);
    void OnLeftUp(wxMouseEvent& event);
    void OnMouseMove(wxMouseEvent& event);
    void UpdateObserver() override;
    void OnPaint(wxPaintEvent& event);

public:
    static const int Height = 90;      ///< Height to make this window

    ViewTimeline(wxFrame* parent);
};


#endif //CANADIANEXPERIENCE_VIEWTIMELINE_H
