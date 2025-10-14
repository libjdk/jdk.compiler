#ifndef _Javac_h_
#define _Javac_h_
//$ class Javac
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Javac : public ::java::lang::Object {
	$class(Javac, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Javac();
	void init$();
	static void main($StringArray* args);
};

#endif // _Javac_h_