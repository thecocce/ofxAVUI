//
//  ofxAVUIXYPad.h
//
//  Created by Borut Kumperscak on 29/02/2016.
//
//

#ifndef ofxAVUIXYPad_h
#define ofxAVUIXYPad_h

#include "ofMain.h"
#include "ofxAVUIBase.h"


class ofxAVUIXYPad : public ofxAVUIBase {
public:
    ofxAVUIXYPad() {};
    ofxAVUIXYPad(string _paramFloat1, string _paramFloat2, string _paramBool);
    ~ofxAVUIXYPad();

    bool mouseMoved(ofMouseEventArgs & args);
    bool mousePressed(ofMouseEventArgs & args);
    bool mouseDragged(ofMouseEventArgs & args);
    bool mouseReleased(ofMouseEventArgs & args);
    bool mouseScrolled(ofMouseEventArgs & args);

    void draw();

private:
    ofRectangle location;
    bool        dragging;
    string      param1, param2, param3;
};

#endif /* ofxAVUIXYPad_h */