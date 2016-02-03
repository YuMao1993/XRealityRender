#ifndef VIEWERSCENEGUI_H
#define VIEWERSCENEGUI_H

#include "../../XRUserInterface.h"
#include "../../widget/XRDebugOutputWindow.h"
#include "../../widget/XRStatusWindow.h"

class ViewerSceneGUI :public XRUserInterface
{
public:
	ViewerSceneGUI(XRScene* scene);
	virtual bool initUI();
	virtual bool updateUI(double time);
	virtual bool destroyUI();

private:
	XRDebugOutputWindow *debugInfoWindow;
	XRStatusWindow *statusWindow;

};

#endif