#pragma once
#include "mvDm365.h"
#include "mvTransport.h"
#include "mvMesh.h"
#include "ofMain.h"

class ofxMv {

public:
    ofxMv();
    mvDm365 d;
    mvTransport t;
    mvMesh m;

    void setup(string filename, int widthInMB, int heightInMB);
    void update();
    void draw();

    ofParameterGroup parameters;

    inline int getMvX(int x, int y) {return d.getMvX(x,y);}
    inline int getMvX(int index)    {return d.getMvX(index);}
    inline int getMvY(int x, int y) {return d.getMvY(x,y);}
    inline int getMvY(int index)    {return d.getMvY(index);}
    inline int getSAD(int x, int y) {return d.getSAD(x,y);}
    inline int getSAD(int index)    {return d.getSAD(index);}
    inline ofVec2f getVec2f(int x,int y)  {return d.getVec2f(x,y);}

    inline int xyToIndex(int x,int y)   {return d.xyToIndex(x,y);}
    inline int indexToX(int index)      {return d.indexToX(index);}
    inline int indexToY(int index)      {return d.indexToY(index);}

    inline void scrubForwardsOne() { t.scrubForwardsOne(); }
    inline void scrubBackwardsOne() { t.scrubBackwardsOne(); }

};