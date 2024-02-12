#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
    double xleft , xright ,ytop , ybottom , xlength , ylength , area;
    
    if(r1.x > r2.x) xleft = r1.x;
    else xleft = r2.x;
    
    if(r1.x + r1.w < r2.x + r2.w) xright = r1.x + r1.w;
    else xright = r2.x + r2.w;
    
    if(r1.y < r2.y) ytop = r1.y;
    else ytop = r2.y;
    
    if(r1.y - r1.h > r2.y - r2.h) ybottom = r1.y - r1.h;
    else ybottom = r2.y - r2.h;
        
    xlength = xright - xleft;
    ylength = ytop - ybottom;
    
    if((xleft > xright) || (ybottom > ytop)) return 0;
    else{

        area = xlength * ylength;
        return area;
        
    }
}
	
