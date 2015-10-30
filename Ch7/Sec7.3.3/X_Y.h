#ifndef X_Y_H
#define X_Y_H

class Y;  

class X{
	Y *py = nullptr;  // just need declaration of Y
};

class Y{
	X x;  // need definition of X
};


#endif